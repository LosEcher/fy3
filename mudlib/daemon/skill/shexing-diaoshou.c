
// shexing-diaoshou.c ���ε���

inherit SKILL;

mapping *action = ({
([	"action" : "$Nһʽ�����߳�������������Σ���������ͻȻ����$n�ı����Ѩ",
	"damage":60,
	"damage_type" : "����"
]),
([	"action" : "$N����һ�Σ�һʽ����ͷ��β������������$n�ļ�ͷ����ȭ����$n���ؿ�",
	"damage":80,
        "damage_type" : "����"
]),
([	"action" : "$Nһʽ���������㡹�����ֻ�£��צ��һ���־����$n���ʺ�Ҫ��",
	"damage":100,
        "damage_type" : "����"
]),
([	"action" : "$N�������У�����ֱ����һʽ��������Ӱ������Ʈ��������$n������",
	"damage":120,
        "damage_type" : "����"
]),
([	"action" : "$Nʹһʽ��������ܡ�����ȭ�ϸ�����̽��ͻ����ץ��$n���ɲ�",
	"damage":140,
        "damage_type" : "����"
]),
([	"action" : "$Nһʽ���������񡹣�ʮָ����������ʵʵ��Ϯ��$n��ȫ��ҪѨ",
	"damage":160,
        "damage_type" : "����"
]),
([	"action" : "$N˫�ֱ�ȭ��һʽ��������ӿ������Ӱ���ɣ�ͬʱ��$nʩ���žŰ�ʮһ��",
	"damage":180,
        "damage_type" : "����"
]),
([	"action" : "$Nһʽ���������š���ȭ���������֣��������ޣ�����������$n�ĵ���",
	"damage":200,
        "damage_type" : "����"
]),
});

int valid_enable(string usage) { return usage=="unarmed"  || usage=="parry"; }

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
	if ((int)me->query("kee") < 30)
		return notify_fail("�������̫���ˡ�\n");
	if ((int)me->query("force") < 20)
		return notify_fail("����������������ε��֡�\n");
	me->receive_damage("kee", 25);
	me->add("force", -5);
	return 1;
}
string perform_action_file(string action)
{
return "/daemon/class/baituo/shexing-diaoshou/" + action;
}

