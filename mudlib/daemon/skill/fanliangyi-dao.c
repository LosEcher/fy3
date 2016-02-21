// fanliangyi-dao.c �����ǵ���

inherit SKILL;

mapping *action = ({
([	"action" : "$N����$wбָ��һ�С�����һ�ơ�������һ�٣�һ����$n��$l��ȥ",
	"damage":100,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С�̫�����ȡ�����������㣬$wһ��һ�գ�ƽ�л���$n�ľ���",
	"damage":150,
	"damage_type" : "����"
]),
([	"action" : "$Nչ���鲽������Ծ�䣬һ�С����Ǻϵ¡������滯������ն��$n",
	"damage":200,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С����»�������$w�󿪴��أ����϶��»���һ���󻡣���ֱ����$n",
	"damage":250,
	"damage_type" : "����"
]),
([	"action" : "$N����$wһ����һ�С���ɫ���ࡹ��˫�ֳ����������У�����$n���ؿ�",
	"damage":300,
	"damage_type" : "����"
]),
([	"action" : "$N����$w��ʹ��һ�С���ٲ��������������ã����ҿ�����������$n",
	"damage":350,
	"damage_type" : "����"
])
});


int valid_enable(string usage) { return usage == "blade" || usage == "parry"; }

int valid_learn(object me)
{
	if ((int)me->query("max_force") < 50)
		return notify_fail("�������������\n");
	if ((int)me->query_skill("zixia-shengong", 1) < 10)
		return notify_fail("��ġ���ϼ�񹦡����̫ǳ��\n");
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
	|| (string)weapon->query("skill_type") != "blade")
		return notify_fail("��ʹ�õ��������ԡ�\n");
	if ((int)me->query("kee") < 50)
		return notify_fail("��������������������ǵ�������\n");
	me->receive_damage("kee", 25);
	return 1;
}

string perform_action_file(string action)
{
return "/daemon/class/huashan/fanliangyi-dao/" + action;
}
int power_point()       {       return 1.5;     }
int hard_point()        {       return 3;       }
