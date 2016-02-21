// yunlongshou.c -������

inherit SKILL;

mapping *action = ({
([	"action" : "$Nһʽ����ľ�Ա�����ʮָ����������ʵʵ��Ϯ��$n��ȫ��ҪѨ",
	"damage":50,
        "damage_type" : "ץ��"
]),
([	"action" : "�ں��������У�$Nʹһ�С�����׽Ӱ����˫���繳��ꫣ�����$n��$l",
	"damage":60,
	"damage_type" : "����"
]),
([	"action" : "$N˫ȭ���裬һʽ������ȥ���������ֻ��ۣ�£��Ȧ״���ͻ�$n�����",
	"damage":70,
        "damage_type" : "����"
]),
([	"action" : "$N˫��ƽ�죬ʮָ΢΢���¶�����һ�С�ʮָǬ��������$n��$l",
	"damage":80,
	"damage_type" : "����"
]),
([	"action" : "$N���ֻ��أ�Ҹ�º��գ�������ָ�繳��һ�С�������ȱ������$n�Ķ���",
	"damage":90,
	"damage_type" : "����"
]),
([	"action" : "$N����б��$n����֮�䣬һ�С��������项������ȡĿ�����ַ���$n���ɲ�",
	"damage":100,
	"damage_type" : "����"
]),
([	"action" : "$Nһ����ָ$n�Ľ�����һ�С��������С�������ץ��$n���еı���",
	"damage":120,
	"damage_type" : "ץ��"
]),
([	"action" : "$N����ָ��$n��ǰ�������Ѩ������бָ̫��Ѩ��һ�С�����������ʹ$n��������",
	"damage":140,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�ֶ����צ��һ��ָ�أ�һ�С����Ƽ��ա�,��������$n��ȫ��",
	"damage":160,
	"damage_type" : "����"
]),
([	"action" : "$Nһʽ���������¡���ȭ���������֣��������ޣ�����������$n�ĵ���",
	"damage":180,
        "damage_type" : "����"
]),
([	"action" : "$N���������ʹһʽ���������ɡ�������΢��,��������$n��$l",
	"damage":200,
        "damage_type" : "����"
]),
});

int valid_enable(string usage) { return usage=="unarmed" ||  usage=="parry"; }


int valid_learn(object me)
{
	if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
		return notify_fail("�������ֱ�����֡�\n");
	return 1;
}


mapping query_action(object me, object weapon)
{
    return action[random(sizeof(action))];
}


int practice_skill(object me)
{
	if ((int)me->query("kee") < 30)
		return notify_fail("�������̫���ˡ�\n");
	if ((int)me->query("force") < 20)
		return notify_fail("������������������֡�\n");
	me->receive_damage("kee", 30);
	me->add("force", -10);
	return 1;
}

string perform_action_file(string action)
{
	return __DIR__"yunlong-shou/" + action;
}

int power_point()	{	return 1.25;	}

