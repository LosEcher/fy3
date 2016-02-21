// poyu-quan.c ��ʯ����ȭ

inherit SKILL;

mapping *action = ({
([	"action" : "$N�ҽ������������㣬һʽ������ʽ����������һ��һ�ͣ�����$n��$l",
	"damage":100,
	"damage_type" : "����"
]),
([	"action" : "$N�����̤��ȫ����ת��һ�С�ʯ���쾪������ȭ�͵ػ���$n��$l",
	"damage":150,
	"damage_type" : "����"
]),
([	"action" : "$N˫�ִ󿪴��أ����߾٣�ʹһ�С����ź��š���˫ȭ��$n��$l��ȥ",
	"damage":200,
	"damage_type" : "����"
]),
([	"action" : "$N����Ȧ���������⵱�أ����ֻ��ڳ��ϣ�һ�С�ǧ��׹�ء�����$n��$l",
	"damage":250,
	"damage_type" : "����"
]),
([	"action" : "$Nʹһ�С�����������������ǰ̽��˫ȭ���˸���Ȧ������$n��$l",
	"damage":300,
	"damage_type" : "����"
]),
([	"action" : "$N˫ȭ������һ�ǡ����ֿβ�����Ƴ���磬һ�����е�$n������",
	"damage":350,
	"damage_type" : "����"
]),
([	"action" : "$Nʩ��������֡���˫ȭȭ����磬ͬʱ����$nͷ���أ�������Ҫ��",
	"damage":400,
	"damage_type" : "����"
]),
([	"action" : "$N����ڿۣ�����������һʽ����ʯ���񡹣�˫ȭ���봷��$n���ؿ�",
	"damage":450,
	"damage_type" : "����"
])
});

int valid_enable(string usage) { return usage=="unarmed" || usage=="parry"; }


int valid_learn(object me)
{
	if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
		return notify_fail("������ʯ����ȭ��������֡�\n");
	if ((int)me->query_skill("zixia-shengong", 1) < 10)
		return notify_fail("��ġ���ϼ�񹦡���򲻹����޷�ѧ����ʯ����ȭ����\n");
	if ((int)me->query("max_force") < 50)
		return notify_fail("�������̫�����޷�������ʯ����ȭ����\n");
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
		return notify_fail("�����������������ʯ����ȭ����\n");
	me->receive_damage("kee", 25);
	me->add("force", -5);
	return 1;
}

string perform_action_file(string action)
{
	return __DIR__"poyu-quan/" + action;
}
int power_point()       {       return 1.5;     }
int hard_point()        {       return 2;       }
