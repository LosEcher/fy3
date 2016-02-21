// nianhua-zhi.c -�黨ָ

inherit SKILL;

mapping *action = ({
([	"action" : "$N����̧�ۣ���ָ���˸���Ȧ��һʽ��ƿ�����⡹����$n��$l",
	"damage":100,
	"weapon":"ʳָ",
	"damage_type" : "����"
]),
([	"action" : "$N�������У�һʽ����÷�������ָ��Ҹ������ָ��$n����ǰ",
	"damage":140,
	"weapon":"������ָ",
        "damage_type" : "����"
]),
([	"action" : "$N����б�У����ְ��ƣ�����һʽ�������ʾơ�����$n��$l����",
	"damage":180,
	"weapon":"������ָ",
        "damage_type" : "����"
]),
([	"action" : "$N˫Ŀ΢����һʽ��¶��б������˫�ֻû���ǧ�ٸ�ָӰ������$n��$l",
	"damage":220,
	"weapon":"��ָ",
        "damage_type" : "����"
]),
([	"action" : "$Nһʽ�����³��ء������ƻ�ס�������бָ���죬���Ƶ���$n��$l",
	"damage":240,
	"weapon":"����",
        "damage_type" : "����"
]),
([	"action" : "$N˫��ƽ����ǰ��ʮָ�濪��һʽ��Ҷ����������ָ��$n�������Ѩ",
	"damage":280,
	"weapon":"ָ�⽣��",
        "damage_type" : "����"
]),
([	"action" : "$N˫�Ʒ��ɣ�һʽ�������𡹣�ָ�˱ų�����������������$n��ȫ��",
	"damage":320,
	"weapon":"ʳָ",
        "damage_type" : "����"
]),
([	"action" : "$Nһʽ��������˪������ָ���У�һ����������ٱ�ĵ�����������$n��$l��ȥ",
	"damage":360,
	"weapon":"����",
        "damage_type" : "����"
]),
([	"action" : "$Nһʽ��٤Ҷ΢Ц����˫��ʳָ���棬ָ�����һ�����������$n��$l",
	"damage":400,
	"weapon":"����˫ָ",
        "damage_type" : "����"
]),
([	"action" : "$N����������ǰ��һʽ�������黨��������ʳָ��סĴָ���������$nһ��",
	"damage":440,
	"weapon":"����",
        "damage_type" : "����"
])
});

int valid_enable(string usage) { return usage=="unarmed" || usage=="parry"; }


int valid_learn(object me)
{
	if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
		return notify_fail("���黨ָ������֡�\n");
	if ((int)me->query_skill("hunyuan-yiqi", 1) < 20)
		return notify_fail("��Ļ�Ԫһ������򲻹����޷�ѧ�黨ָ��\n");
	if ((int)me->query("max_force") < 100)
		return notify_fail("�������̫�����޷����黨ָ��\n");
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
		return notify_fail("��������������黨ָ��\n");
	me->receive_damage("kee", 10);
	me->add("force", -5);
	return 1;
}
string perform_action_file(string action)
{
	return __DIR__"nianhua-zhi/" + action;
}

