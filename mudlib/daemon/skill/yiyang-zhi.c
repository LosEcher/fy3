// yizhi-chan.c һ��ָ


inherit SKILL;

mapping *action = ({
([      "action" : "$N������ָ���أ�Сָ�͵ص���$n���ؿ�ҪѨ��ȴ��һ�С�����ͨ�̡�",
	"damage":50,
        "damage_type" : "����"
]),
([      "action" : "$N����Сָ���˸�С���ߣ����Ż���$n��$l,��һ�С��岨���ۡ�",
	"damage":70,
        "damage_type" : "����"
]),
([      "action" : "$Nת���ͷ��һʽ��̫�׺��������������ָ���ּ���$n��$l",
	"damage":90,
        "damage_type" : "����"
]),
([      "action" : "$Nʹһʽ���ƺ�֮�ɡ�����������ָ��ƮƮ�ص���$n��$l",
	"damage":110,
        "damage_type" : "����"
]),
([      "action" : "$Nʹһ�С��ر�ɽ�ݡ���������ָ������Ȧ������$n��������ʮ��Ѩ",
	"damage":130,
        "damage_type" : "����"
]),
([      "action" : "$Nʹһ�С��������̡�������������Ȧ��������ָͻȻ��Ȧ�д�����ֱ��$n��$l",
	"damage":130,
        "damage_type" : "����"
]),
([      "action" : "$N����ʳָ�������㣬�������$n�ı��Ĵ�Ѩ��ȴ��һʽ������ʯջ��",
	"damage":150,
        "damage_type" : "����"
]),
([      "action" : "$Nʹ�����ָ��ߡ�����ʳָ�������$n���ؿڣ���$n�ؿڵ����д�Ѩ��������ָ��֮��",
	"damage":170,
        "damage_type" : "����"
]),
([      "action" : "$N����Ĵֱָ����ңң����$nһ�࣬һ������ֱ��$n��ȥ����һʽ���������ա�",
	"damage":190,
        "damage_type" : "����"
]),
([      "action" : "$N���һ��������Ĵָ����$n�������ɵ���ȴ��һʽ���������¡�",
	"damage":210,
        "damage_type" : "����"
])
});

int valid_enable(string usage) { return usage=="unarmed" || usage=="parry"; }


int valid_learn(object me)
{
        if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
                return notify_fail("��һ��ָ������֡�\n");
        if ((int)me->query_skill("kurong-changong", 1) > 80 ||
            (int)me->query_skill("xiantian-qigong", 1) > 80)
                return 1;
        else
                return notify_fail("��ı����ڹ���򲻹����޷�ѧһ��ָ��\n");
        return 1;
}

mapping query_action(object me, object weapon)
{
	return action[random(sizeof(action))];
}

int practice_skill(object me)
{
	if((int)me->query("kee")<30)
                return notify_fail("�������̫���ˡ�\n");
	if((int)me->query("force")<25)
                return notify_fail("�������������һ��ָ��\n");
	me->receive_damage("kee",25);
	me->add("force",-10);
        return 1;
}

string perform_action_file(string action)
{
return "/daemon/class/dali/yiyang-zhi/" + action;
}

int power_point()	{	return 1.75;	}
int hard_point()	{	return 2;	}

