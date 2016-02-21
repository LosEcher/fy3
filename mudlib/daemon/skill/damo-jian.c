// damo-jian.c ��Ħ��

inherit SKILL;

mapping *action = ({
([	"action":"$Nʹһʽ��������Ե����������$w����΢�񣬻ó�һ���������$n��$l",
	"damage":100,
	"damage_type":	"����"
]),
([	"action":"$N����ǰ��ʹ������ȥ�����С��������������ޣ�$w��������$n��$l��ȥ",
	"damage":140,
	"damage_type":	"����"
]),
([	"action":"$Nһʽ��������ɣԶ��������Ʈ�����ߣ��˷�����������$wңҡָ��$n��$l",
	"damage":180,
	"damage_type":	"����"
]),
([	"action":"$N��������Ծ��һʽ���ֻط����᡹���������ּ�ת������ն��$n��$l",
	"damage":220,
	"damage_type":	"����"
]),
([	"action":"$N����$w�й�ֱ����һʽ��ˮ��ͨ���š���������Ϣ�ض�׼$n��$l�̳�һ��",
	"damage":260,
	"damage_type":	"����"
]),
([	"action":"$N����$wбָ���죬��â���£�һʽ������������������׼$n��$lбб����",
	"damage":300,
	"damage_type":	"����"
]),
([	"action":"$N��ָ�����㣬����$w�Ƴ�����ѩ����â��һʽ��ǧ��һέȥ������$n��$l",
	"damage":340,
	"damage_type":	"����"
]),
([	"action":"$N���Ƶ�����һʽ�����Ķ���������$w�Ի���Ծ�����缲�������$n���ؿ�",
	"damage":380,
	"damage_type":	"����"
]),
});

int valid_enable(string usage) { return usage == "sword" || usage == "parry"; }


int valid_learn(object me)
{
	if ((int)me->query("max_force") < 100)
		return notify_fail("�������������\n");
	if ((int)me->query_skill("hunyuan-yiqi", 1) < 20)
		return notify_fail("��Ļ�Ԫһ�������̫ǳ��\n");
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
	if ((int)me->query("kee") < 30)
		return notify_fail("���������������Ħ����\n");
	me->receive_damage("kee", 10);
	return 1;
}
string perform_action_file(string action)
{
	return __DIR__"damo-jian/" + action;
}
