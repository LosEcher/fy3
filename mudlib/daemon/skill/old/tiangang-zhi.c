inherit SKILL;

mapping *action = ({
([	"action" : "$NĴָ�����ָ��һ�С�������项��ָ�ⵯ��$n��$l",
	"force" : 10,
	"dodge" : 5,
	"lvl" : 0,
	"skill_name" : "�������",
	"damage_type" : "����"
]),
([	"action" : "$N�����������,���ֿ�ָ�ᵯ��һʽ������Ǭ������ָ��������л���$n��$l",
	"force" : 20,
	"dodge" : 10,
	"lvl" : 10,
	"skill_name" : "����Ǭ��",
	"damage_type" : "����"
]),
([	"action" : "$N˫���ཻ,ʮָ��ת������$n��ʱ�������,����һ�С����ֳ�ת��",
	"force" : 40,
	"dodge" : 15,
	"lvl" : 20,
	"skill_name" : "���ֳ�ת",
	"damage_type" : "����"
]),
([	"action" : "$N��¶΢Ц,������ָ�粦����,һ�С��ֻ����ҡ�,������ֱָ��$n��$l",
	"force" : 60,
	"dodge" : 20,
	"lvl" : 30,
	"skill_name" : "�ֻ�����",
	"damage_type" : "����"
]),
([	"action" : "$Nʹһ�С��軨�׷𡹣���ָ����$n��$l��,��ʱ,$l��������",
	"force" : 80,
	"dodge" : 25,
	"lvl" : 40,
	"skill_name" : "�軨�׷�",
	"damage_type" : "����"
]),
([	"action" : "$Nʹ����������ء�����ָ��������ǰ���˸�Ȧ,��$n�Ĺ��ƻ�������",
	"force" : 100,
	"dodge" : 0,
	"lvl" : 50,
	"skill_name" : "�������",
	"damage_type" : "����"
]),
([	"action" : "$Nʩ����������项��ָ��$nͷ��,��;һ��,���������ָ��$nͷ���أ�������Ҫ��",
	"force" : 120,
	"dodge" : 35,
	"lvl" : 60,
	"skill_name" : "�������",
	"damage_type" : "����"
]),
([	"action" : "$N��������ȽȽ����һʽ���򷨽��𡹣�һ�Ű�ɫ�Ĺ�ã��ָ�Ⱪ��,ָ��$n��$l",
	"force" : 140,
	"dodge" : 40,
	"lvl" : 80,
	"skill_name" : "�򷨽���",
	"damage_type" : "����"
])
});

int valid_enable(string usage) { return usage=="unarmed" || usage=="parry"; }

int valid_learn(object me)
{
	if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
		return notify_fail("ѧ�����ָ��������֡�\n");
	if ((int)me->query_skill("yuxuan-guizheng", 1) < 10)
		return notify_fail("��ġ��������桹��򲻹����޷�ѧ�����ָ����\n");
	if ((int)me->query_skill("unarmed",1) < 10)
		return notify_fail("���ͽ�ֲ���̫�ͣ��޷�ѧ�����ָ����\n");
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
		return notify_fail("������������������ָ����\n");
	me->receive_damage("kee", 25);
	me->add("force", -5);
	return 1;
}

string perform_action_file(string action)
{
        return CLASS_D("xiake") + "/tiangang-zhi/" + action;
}