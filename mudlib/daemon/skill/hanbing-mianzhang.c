// hannbing-mianzhang.c ��������
// pal 1997.05.26

inherit SKILL;

mapping *action = ({
([	"action" : "$Nһʽ���󽭶�ȥ����˫�ƴ󿪴�ϣ�ֱ��$n��$l��ȥ",
	"damage":110,
        "damage_type" : "����"
]),
([	"action" : "$N����һ�䣬һʽ���ƺӾ�������˫��������ֱ������$n��$l",
	"damage":120,
        "damage_type" : "����"
]),
([	"action" : "$Nʹһʽ������ɽɫ����������΢����棬������ϸ�����ֱȡ$n��$l",
	"damage":130,
        "damage_type" : "����"
]),
([	"action" : "$N����һ�֣�һʽ�������׺���������������������$n�����ȥ",
	"damage":140,
        "damage_type" : "����"
]),
([	"action" : "$N����һת��ʹ��һʽ��ˮ�����١���ֻ��������Ӱ��ס��$n��ȫ��",
	"damage":150,
        "damage_type" : "����"
]),
([	"action" : "$NͻȻ����һ����ʹ��һʽ��С����硹���������أ�������ӯ������$n��$l",
	"damage":160,
        "damage_type" : "����"
]),
([	"action" : "$Nʹһʽ����ѩ��ɽ����˫��Ю��籩ѩ֮�ƣ��͵�����$n��$l",
	"damage":170,
        "damage_type" : "����"
]),
([	"action" : "$Nһ�С�˪�����ء���˫�ƴ�����ɪ������������$n��$l",
	"damage":180,
        "damage_type" : "����"
]),
([	"action" : "$N����Ȼһ�䣬ʹ��һʽ���������������Ӱǧ����ã���$n�޷�����",
	"damage":190,
        "damage_type" : "����"
]),
([	"action" : "$N��Хһ����һʽ����˪ѩ�꡹��˫�ƻ��裬��ͬѩ������ת������$n��$l",
	"damage":200,
        "damage_type" : "����"
])
});

int valid_enable(string usage)
{
	return usage=="unarmed" || usage=="parry" ;
}

int valid_learn(object me)
{
	return 1;
}


mapping query_action(object me, object weapon)
{
		return action[random(sizeof(action))];
}

int practice_skill(object me)
{
	if ((int)me->query("kee")<30)
		return notify_fail("�������̫���ˡ�\n");
	if ((int)me->query("force") < 40)
		return notify_fail("��������������������ơ�\n");
	me->receive_damage("kee",30);
	me->add("force",-10);
	return 1;
}

mixed hit_ob(object me, object victim, int damage_bonus, int factor)
{
if( random(me->query_skill("hanbing-mianzhang")) > 10 )
	victim->apply_condition("ice_poison", random(me->query_skill("hanbing-mianzhang")/10) + 1 + victim->query_condition("ice_poison"));
}

string perform_action_file(string action)
{
	return __DIR__"hanbing-mianzhang/" + action;
}

int power_point()	{	return 1.75;	}
int hard_point()        {       return 3;	}
