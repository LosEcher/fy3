// haotian-zhang �����


inherit SKILL;

mapping *action = ({
([      "action" : "$Nʹһ�С�������ˮ����˫�ֻ��˸���Ȧ������$n��$l",
	"damage":50,
        "damage_type" : "����"
]),
([      "action" : "$Nʹһ�С��������¡�����������һ�ӣ�����$n��$l",
	"damage":60,
        "damage_type" : "����"
]),
([      "action" : "$N�����������⣬��������ʹһ�С������沨������$n��$l��ȥ",
	"damage":70,
        "damage_type" : "����"
]),
([      "action" : "$Nʹһ�С�������ת�����ֻ�$n���ؿں�$l",
	"damage":80,
        "damage_type" : "����"
]),
([      "action" : "$Nʹһ�С����ջ��֡���������ͬʱ�������ڿ���ͻȻ�����Ʒ��򻥱�",
	"damage":90,
        "damage_type" : "����"
]),
([      "action" : "$N���ֲ�ס�ζ�������һ�С�������˪������$n��$l��ȥ",
	"damage":100,
        "damage_type" : "����"
]),
([      "action" : "$N���ֱ���Ϊ�ģ����������絶��һ�С�͡�ϰ�ɳ��������$n��$l",
	"damage":120,
        "damage_type" : "����"
]),
([      "action" : "$N����˺�벽������ʹһ�С�����һɫ���������$n",
	"damage":140,
        "damage_type" : "����"
]),
([      "action" : "$Nһ�С�����¡��������ȷ������������ƺ󷢶�����",
	"damage":160,
        "damage_type" : "����"
]),
([      "action" : "$N˫���������У�˫�����ɨ��$n��$l��ȴ��һ�С�������ˮ������̬����",
	"damage":180,
        "damage_type" : "����"
]),
([      "action" : "$N�����鰴�����ֻ�������ʹһ�С��������ơ�����$n��$l��ȥ",
	"damage":200,
        "damage_type" : "����"
]),
([      "action" : "$N˫�ֱ�����ȭ����ǰ��󻮻���һ�С�������ϡ�����$n��$l",
	"damage":220,
        "damage_type" : "����"
]),
([      "action" : "$N�����黮�����ֱ���Ϊ��һ�ǡ�¥����ء�����$n��$l",
	"damage":240,
        "damage_type" : "����"
]),
([      "action" : "$Nʩ���������С�����������ӳ�������ͬʱ����$n",
	"damage":280,
        "damage_type" : "����"
]),
([      "action" : "$N�ɱ۴��֣�����ǰ����������ʹһ�С����㳤�ɡ�������$n��$l",
	"damage":300,
        "damage_type" : "����"
]),
([      "action" : "$N����͵أ�����ʹһ�С�����ǱԾ�������¶�����$n��$l��ȥ",
	"damage":320,
        "damage_type" : "����"
]),
([      "action" : "$N�����ɹ����ƣ�˫���������ϣ�������ǰ�Ƴ�һ�С��»����ա�",
	"damage":340,
        "damage_type" : "����"
]),
([      "action" : "$N���Ʋ�ס����ɨ������һʽ����̶�仨����������ת����$n��ȥ",
	"damage":250,
        "damage_type" : "����"
]),
([      "action" : "$N���־���ǰ��������ǰƲ����ʹһ�С���ˮ����������$n��$l��ȥ",
	"damage":210,
        "damage_type" : "����"
]),
([      "action" : "$Nʹһ�С�б�³���������������������Ȧ�����ƴ�Ȧ�д�������$n",
	"damage":150,
        "damage_type" : "����"
]),
([      "action" : "$N�������ϻ�������������ʹһ�С���ʯ���桹�����Ʋ�ס�ζ�������$nͷ������֮��",
	"damage":280,
        "damage_type" : "����"
])
});

int valid_enable(string usage) { return usage=="unarmed" || usage=="parry";}


int valid_learn(object me)
{
        if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
                return notify_fail("������Ʊ�����֡�\n");
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
	if((int)me->query("force")<20)
                return notify_fail("�����������������ơ�\n");
	me->receive_damage("kee",25);
	me->add("force",-10);
        return 1;
}

string perform_action_file(string action)
{
        return __DIR__"haotian-zhang/" + action;
}
