//lingshe_zhangfa.c �����ȷ�

#include "ansi.h"

inherit SKILL;

mapping *action = ({
([	"action": "$Nʹ��һ�С����߳�����������$w�󿪴���ɨ��$n��$l",
	"damage":60,
	"damage_type": "����"
]),
([	"action": "$N����$w������죬һ�С�ҡͷ��β����$n��$l��ȥ",
	"damage":80,
	"damage_type": "����"
]),
([	"action": "$N����$w���Ӹ�����ʹһ�С������½�������$n��$l",
	"damage":100,
	"damage_type": "����"
]),
([	"action": "$Nһ�С�����ͦ��������$w����ɨ��$n��$l",
	"damage":120,
	"damage_type": "����"
]),
([	"action": "$Nʹ��һ�С��������ߡ���$w�����ػ���$n��$lɨȥ",
	"damage":140,
	"damage_type": "����"
]),
([	"action": "$N����$wһ�ӣ�ʹ��һ�С��߲����ҡ����������ɨ��$n��$l",
	"damage":160,
	"damage_type": "����"
]),
([	"action": "$Nʹ��һ�С�������ɽ�����߾�����$w����ͷ����$n��$l",
	"damage":180,
	"damage_type": "����"
]),
([	"action": "$Nʹ��һ�С����߳�����������$w��һ̽��ֱɨ$n��$l",
	"damage":200,
	"damage_type": "����"
]),

});


mapping query_action(object me, object weapon)
{
	return action[random(sizeof(action))];
}

int valid_enable(string usage) { return (usage == "staff") || (usage == "parry"); }

int valid_learn(object me)
{
	if ((int)me->query("max_force") < 70)
		return notify_fail("�������������\n");
	return 1;
}

int practice_skill(object me)
{
	object weapon;

	if (!objectp(weapon = me->query_temp("weapon"))
	|| (string)weapon->query("skill_type") != "staff")
		return notify_fail("��ʹ�õ��������ԡ�\n");
	if ((int)me->query("kee") < 50)
		return notify_fail("������������������ȷ���\n");
	me->receive_damage("kee", 20);
	return 1;
}

mixed hit_ob(object me, object victim, int damage_bonus, int factor)
{
	string msg;
        if( random(me->query_skill("hamagong")) > 10 ) 
	{
	victim->apply_condition("snake_poison", random(me->query_skill("hamagong")/10) + 1 +
	victim->query_condition("snake_poison"));
	msg=HIG"ͻȻ����ͷ�Ķ��ߴܳ������ݺݵ�ҧ��$nһ�ڣ�\n"NOR;
	return msg;
	}
}

int power_point()	{	return 1.5;	}
int hard_point()	{	return 2;	}

string perform_action_file(string action)
{
return "/daemon/class/baituo/lingshe-zhangfa/" + action;
}

