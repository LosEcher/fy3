inherit SKILL;

mapping *action = ({
([	"action" : "$NĴָ�����ָ��һ�С�������项��ָ�ⵯ��$n��$l",
	"damage":60,
	"damage_type" : "����"
]),
([	"action" : "$N�����������,���ֿ�ָ�ᵯ��һʽ������Ǭ������ָ��������л���$n��$l",
	"damage":80,
	"damage_type" : "����"
]),
([	"action" : "$N˫���ཻ,ʮָ��ת������$n��ʱ�������,����һ�С����ֳ�ת��",
	"damage":200,
	"damage_type" : "����"
]),
([	"action" : "$N��¶΢Ц,������ָ�粦����,һ�С��ֻ����ҡ�,������ֱָ��$n��$l",
	"damage":100,
	"damage_type" : "����"
]),
([	"action" : "$Nʹһ�С��軨�׷𡹣���ָ����$n��$l��,��ʱ,$l��������",
	"damage":120,
	"damage_type" : "����"
]),
([	"action" : "$Nʹ����������ء�����ָ��������ǰ���˸�Ȧ,��$n�Ĺ��ƻ�������",
	"damage":140,
	"damage_type" : "����"
]),
([	"action" : "$Nʩ����������项��ָ��$nͷ��,��;һ��,���������ָ��$nͷ���أ�������Ҫ��",
	"damage":160,
	"damage_type" : "����"
]),
([	"action" : "$N��������ȽȽ����һʽ���򷨽��𡹣�һ�Ű�ɫ�Ĺ�ã��ָ�Ⱪ��,ָ��$n��$l",
	"damage":180,
	"damage_type" : "����"
])
});

int valid_enable(string usage) { return usage=="unarmed" || usage=="parry"; }

int valid_learn(object me)
{
	if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
		return notify_fail("ѧ�����ָ��������֡�\n");
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
return "/daemon/class/yandang/tiangang-zhi/"+action;
}

int power_point()	{	return 1.75;	}
int hard_point()	{	return 2.5;	}

