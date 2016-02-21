// yunlong-jian.c ������

inherit SKILL;

mapping *action = ({
([	"action":"\n$Nʹһʽ������˳��Ȼ��������$w����΢�񣬻ó�һ���׹����$n��$l",
	"damage":50,
	"damage_type":	"����"
]),
([	"action":"\n$N����ǰ��ʹ������ȥ�����С��������������ޣ�$w��������$n��$l��ȥ",
	"damage":60,
	"damage_type":	"����"
]),
([	"action":"\n$Nһʽ��־�����Զ��������Ʈ�����ߣ��˷�����������$wңҡָ��$n��$l",
	"damage":70,
	"damage_type":	"����"
]),
([	"action":"$N��������Ծ��һʽ�������γ�����������ˮ��һкǧ�����$nȫ��",
	"damage":80,
	"damage_type":	"����"
]),
([	"action":"$N����$w�й�ֱ����һʽ�����Ǳ��ҹ����������Ϣ�ض�׼$n��$l�̳�һ��",
	"damage":90,
	"damage_type":	"����"
]),
([	"action":"$N����$wһ����һʽ������ϸ��������������Ϣ�ػ���$n��$l",
	"damage":100,
	"damage_type":	"����"
]),
([	"action":"\n$N����$wбָ���죬��â���£�һʽ������������������׼$n��$lбб����",
	"damage":110,
	"damage_type":	"����"
]),
([	"action":"$N��ָ�����㣬����$w�Ƴ�����ѩ����â��һʽ������һ��졹����$n���ʺ�",
	"damage":120,
	"damage_type":	"����"
]),
([	"action":"$N���Ƶ�����һʽ�����Ļ���������$w�Ի���Ծ�����缲�������$n���ؿ�",
	"damage":130,
	"damage_type":	"����"
]),
([	"action":"\n$N����һ���εض���һʽ��������ͬ�ԡ���$w�ó������Ӱ����$n����Χס",
	"damage":150,
	"damage_type":	"����"
]),
([	"action":"$N�������Ʈ�䣬һʽ�����֪���⡹������$wƽָ����������$n����",
	"damage":170,
	"damage_type":	"����"
]),
([	"action" : "$N����΢����������һ�С��ߴ���ʤ�������йǽ�����쫷�����$nȫ��",
	"damage":190,
	"damage_type":	"����"
]),
([	"action" : "$Nļ��ʹһ�С���Ҷ����ɽ������ʱ�����м���Ѫ������$nȫ��",
	"damage":210,
	"damage_type":	"����"
]),
});

int valid_enable(string usage) { return usage == "sword" || usage == "parry"; }

int valid_learn(object me)
{
	if ((int)me->query("max_force") < 100)
		return notify_fail("�������������\n");
	if ((int)me->query_skill("yunlong-xinfa", 1) < 20)
		return notify_fail("��������ķ����̫ǳ��\n");
	if ((int)me->query_skill("force", 1) < 40)
		return notify_fail("��Ļ����ڹ����̫ǳ��\n");
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
	|| (string)weapon->query("skill_type") != "sword")
		return notify_fail("��ʹ�õ��������ԡ�\n");
	if ((int)me->query("kee") < 50)
		return notify_fail("�����������������������\n");
	me->receive_damage("kee", 25);
	return 1;
}
string perform_action_file(string action)
{
        return __DIR__"yunlong-jianfa/" + action;

}

int power_point()	{	return 1.75;	}
int hard_point()	{	return 3;	}

