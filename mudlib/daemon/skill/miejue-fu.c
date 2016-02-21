// miejue-fu.c ��Ы����� by ksusan 7/27/97 8:30

inherit SKILL;

mapping *action = ({
([	"action" : "$N�ظ����գ�һ�С�������ӥ�����������¶��ϻ��˸��뻡����$n��$l��ȥ",
	"damage":50,
	"damage_type" : "����"
]),
([	"action" : "$N�����������⣬һ�С�Ͷ�������������$w��ֱ����$n��$l",
	"damage":100,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С��ͷл�졹��$w�ƾ�������ˢ��һ�����϶�����$n����",
	"damage":150,
	"damage_type" : "����"
]),
([	"action" : "$N���ַ�ִ������һ�С��۹ǳ��衹����һ����$wֱ��$n�ľ���նȥ",
	"damage":200,
	"damage_type" : "����",
]),
([	"action" : "$Nһ�С�����ǧ�ơ����������⻯����㷱�ǣ���$n��$l��ȥ",
	"damage":250,
	"damage_type" : "����"
]),
([	"action" : "$N˫�ֺ�ִ$w��һ�С����۲�ʩ����š��ת������ֱ����$n��˫��",
	"damage":300,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С���Ƥ�龭��������$w����һ����ƽʮ�֣���$n�ݺ���ȥ",
	"damage":350,
	"damage_type" : "����"
]),
([	"action" : "$N��ת�����׼�Լ���һ�С����ľ�־����ȫ��һ��������$w��$n����նȥ",
	"damage":400,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С������𡹣�$w�ĸ���·𻯳�һ�ش����棬��$n����Χ��",
	"damage":450,
	"damage_type" : "����"
]),
([	"action" : "$N����ƽָ��һ�С���Ѫ���ء���һƬƬ�йǸ�����쫷�����$n��ȫ��",
	"damage":500,
	"damage_type" : "����"
]),
});

int valid_enable(string usage) { return usage == "axe" || usage == "parry"; }


int valid_learn(object me)
{
	if ((int)me->query("max_force") < 50)
		return notify_fail("�������������\n");
	if ((int)me->query_skill("xiuluo-force", 1) < 10)
		return notify_fail("���������ɷ�����̫ǳ��\n");
	return 1;
}

mapping query_action(object me, object weapon)
{
	return action[random(sizeof(action))];
}

int practice_skill(object me)
{
	object weapon;

	if (!objectp(weapon = me->query_temp("weapon"))
	|| (string)weapon->query("skill_type") != "axe")
		return notify_fail("��ʹ�õ��������ԡ�\n");
	if ((int)me->query("kee") < 50)
		return notify_fail("���������������Ы�������\n");
	me->receive_damage("kee", 35);
	return 1;
}

