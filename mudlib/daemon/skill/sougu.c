//sougu.c �ѹ�ӥצ��

inherit SKILL;

mapping *action = ({
([	"action" : "\n$N˫��һ£����צֱ��$n���̣���צȴЮ����֮������$n���䣬һ��һʵ������һ�С���צʽ��",
	"damage":200,
	"damage_type" : "ץ��",
]),
([	"action" : "\n$N���ζ�������ӥ���հ㡰ٿ���ش�$nͷ��Խ����ʹһ�С���צʽ��˫צ����$n�Ժ����",
	"damage_type" : "ץ��",
	"damage":140,
]),
([	"action" : "\n$N�͵�һ����ͻȻ����$n��ǰ��ʹһ�С���צʽ������צֱ��$nС��",
	"damage_type" : "ץ��",
	"damage":150,
]),
([	"action" : "\n$N��צ���أ���צ�����󷢣�һ�С���צʽ������������$n��$l",
	"damage_type" : "ץ��",
	"damage":160,
]),
([	"action" : "\n$N���ι��죬����ǰ�ˣ�ʹһ�С���צʽ����ֱ��$n�ɲ�",
	"damage_type" : "ץ��",
	"damage":170,
]),
([	"action" : "\n$N����Ʈ������Ȼת��$n���һ�С���צʽ����˫צֱ��$n�ʺ����",
	"damage_type" : "ץ��",
	"damage":180,
]),
([	"action" : "\n$Nһ����Х�����ΰ���ʹ����ǧצʽ�����ɰ�������»���$n�پ�����צӰ������ȫ����Ѩ",
	"damage_type" : "ץ��",
	"damage":190,
])
});

int valid_enable(string usage) { return usage=="unarmed" ||  usage=="parry"; }

int valid_learn(object me)
{
	return 1;
}

mapping query_action(object ob, object weapon)
{
		return action[random(sizeof(action))];
}

int practice_skill(object me)
{
	if ((int)me->query("kee")<30)
		return notify_fail("�������̫���ˡ�\n");
	if ((int)me->query("force")<20)
		return notify_fail("�������������ӥצ����\n");
	me->receive_damage("kee",25);
	me->add("force",-5);
	return 1;
}

string perform_action_file(string action)
{
	return __DIR__"sougu/" + action;
}

int power_point()	{	return 1.5;	}
int hard_point()	{	return 2;	}

