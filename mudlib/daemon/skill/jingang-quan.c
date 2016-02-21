// jingang-quan.c -����ȭ

inherit SKILL;

mapping *action = ({
([	"action" : "$N��ϥ���������ֺ�ʮ��һʽ������������˫ȭ���ƶ���������$n��$l",
	"damage":60,
	"damage_type" : "����"
]),
([	"action" : "$Nһʽ���һ�׶����˫�������»���ȭ�����棬��ž����",
	"damage":80,
        "damage_type" : "����"
]),
([	"action" : "$N�ڿշ���һʽ���˷��꡹��˫��˫���������$n�޿ɶ��",
	"damage":100,
        "damage_type" : "����"
]),
([	"action" : "$N˫���麬����Ե�³���һʽ�������ס���������$n�Ƴ�",
	"damage":120,
        "damage_type" : "����"
]),
([	"action" : "$Nһ��ǰ�죬һ�ۺ�ָ��һʽ����ָɽ��������$n����ǰ���",
	"damage":140,
        "damage_type" : "����"
]),
([	"action" : "$Nһʽ�������ɡ�������ʮָ���$n��ȫ����ʮ����ҪѨ",
	"damage":160,
        "damage_type" : "����"
]),
([	"action" : "$N��Ŀ���ӣ�˫��������һʽ����������������˷������������ǵ�����",
	"damage":180,
        "damage_type" : "����"
]),
([	"action" : "$N��Ц��Ц��˫ȭ�����޶���һʽ������Ц������Ȼ����$n��ǰ��",
	"damage":200,
        "damage_type" : "����"
])
});

int valid_enable(string usage) { return  usage=="unarmed" || usage=="parry"; }

int valid_learn(object me)
{
	if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
		return notify_fail("������ȭ������֡�\n");
	if ((int)me->query_skill("hunyuan-yiqi", 1) < 10)
		return notify_fail("��Ļ�Ԫһ������򲻹����޷�ѧ����ȭ��\n");
	if ((int)me->query("max_force") < 50)
		return notify_fail("�������̫�����޷�������ȭ��\n");
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
		return notify_fail("�����������������ȭ��\n");
	me->receive_damage("kee", 20);
	me->add("force", -6);
	return 1;
}

string perform_action_file(string action)
{
	return __DIR__"jingang-quan/" + action;
}
