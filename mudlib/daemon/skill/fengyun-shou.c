// fengyun-shou.c -������

inherit SKILL;

mapping *action = ({
([	"action" : "$Nһʽ���������ա������ƻ�צ����ָ�繳��ֱ��$n������ҪѨ",
	"damage":60,
	"damage_type" : "����"
]),
([	"action" : "$N������Σ�һʽ���һ����ơ�����������ֱ��������$n�ļ羮��Ѩ",
	"damage":80,
        "damage_type" : "����"
]),
([	"action" : "$Nʹһʽ���������󡹣���ָ��������ò�ʩ������$n����·Ҫ��",
	"damage":100,
        "damage_type" : "����"
]),
([	"action" : "$N����ӥץ�������߾٣�һʽ����Ŀ�ѻԡ�����$n���нڴ���",
	"damage":120,
        "damage_type" : "����"
]),
([	"action" : "$Nʹһʽ�������ķ���������˷�����������Ӱ��һצͻ����ץ��$n���ؿ�",
	"damage":140,
        "damage_type" : "����"
]),
([	"action" : "$N���ֻ��ۣ�ȫ��ؽ�žž���죬һʽ��ˮ�����ɡ�������$n��$l",
	"damage":160,
        "damage_type" : "����"
]),
([	"action" : "$Nһʽ��ɽ�����ܡ���ʮָ���죬������հ������$n��ȫ��ҪѨ",
	"damage":180,
        "damage_type" : "����"
]),
([	"action" : "$N�������ţ�һʽ��������ġ�����һ�������У�˫��ͬʱ����$n���ߵ���Ѩ",
	"damage":200,
        "damage_type" : "����"
])
});

int valid_enable(string usage) { return usage=="unarmed" || usage=="parry"; }

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
		return notify_fail("������������������֡�\n");
	me->receive_damage("kee", 10);
	me->add("force", -2);
	return 1;
}

