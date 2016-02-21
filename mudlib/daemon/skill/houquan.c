// houquan.c ��ȭ

inherit SKILL;

mapping *action = ({
([	"action" : "\n$����΢����������ǰ�˳���һʽ���ɺ�ժ�ҡ�����צֱ����ץ��$n��˫��",
	"damage":50,
	"damage_type" : "ץ��",
]),
([	"action" : "$N������Σ�һʽ�������֦��������ֱ��������$n�ļ羮��Ѩ",
	"damage":80,
        "damage_type" : "����"
]),
([	"action" : "$Nһ��ǰ�죬һ�ۺ�ָ��һʽ��Գ�����桹������$n������",
	"damage":110,
        "damage_type" : "����"
]),
([	"action" : "\n$N��Ȼ����һ�ţ�ʹһʽ���˷���Ӱ����˫�������޶���һצץ��$n���ؿ�",
	"damage":140,
        "damage_type" : "����"
]),
([	"action" : "$N����һ������һ������ʹһʽ��ˮ�����¡���˫צ������$n��С��",
	"damage":170,
        "damage_type" : "����",
]),
([	"action" : "$N�͵����ϸ߸�Ծ��һʽ�����ժ�ǡ����Ӹ����£�һצ����$n��ͷ��",
	"damage":200,
        "damage_type" : "ץ��",
]),
});

int valid_enable(string usage) { return usage=="unarmed" ||  usage=="parry"; }

int valid_learn(object me)
{
	if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
		return notify_fail("����ȭ������֡�\n");
	if ((int)me->query_skill("force", 1) < 30)
		return notify_fail("��Ļ����ڹ���򲻹����޷�ѧ��ȭ��\n");
	if ((int)me->query("max_force") < 100)
		return notify_fail("�������̫�����޷�����ȭ��\n");
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
	if ((int)me->query("force") < 10)
		return notify_fail("���������������ȭ��\n");
	me->receive_damage("kee", 15);
	me->add("force", -5);
	return 1;
}

string perform_action_file(string action)
{
	return __DIR__"houquan/" + action;
}

int power_point()	{	return 1.5;	}
