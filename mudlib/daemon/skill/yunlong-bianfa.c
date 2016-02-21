// yunlong-bian.c �����޷�

#include <ansi.h>

inherit SKILL;

mapping *action = ({
([	"action":		"$N����һ�һ�С�����ٵء�������$w���ñ�ֱ����׼$n��ͷ����",
	"damage":50,
	"damage_type":	"����"
]),
([	"action":		"$N����һת��һ�С������ĺ���������$w��������ڿ�һ���͵ػ���$n̫��Ѩ",
	"damage":80,
	"damage_type":	"����"
]),
([	"action":		"$N৵�һ�����ޣ�һ�С�������ˮ��������$w���ñ�ֱ������$n˫��",
	"damage":110,
	"damage_type":	"����"
]),
([	"action":		"$N������ң�һ�С����Ƽ��ա�������$w��������Ӱ����ɽ������ɨ��$nȫ��",
	"damage":140,
	"damage_type":	"����"
]),
([	"action":		"$N��������һ�С���ɽ��ʯ��������$w��һ��ͭ����ֱ����$n",
	"damage":170,
	"damage_type":	"����"
]),
([	"action":		"$N����һ�ӣ�һ�С����Χ����������$wֱ����$n����",
	"damage":200,
	"damage_type":	"����"
]),
([	"action":		"$N�߸�Ծ��һ�С���Į���̡�������$w��ֱ��$n��ͷ����",
	"damage":230,
	"damage_type":	"����"
])
});

int valid_enable(string usage) { return (usage == "whip") || (usage == "parry"); }

int valid_learn(object me)
{
	object weapon;

	if( (int)me->query("max_force") < 100)
		return notify_fail("����������㣬û�а취�������޷�, ����Щ���������ɡ�\n");

	if ((int)me->query_skill("force", 1) < 40)
		return notify_fail("��Ļ����ڹ����̫ǳ��\n");

	if ( !objectp(weapon = me->query_temp("weapon"))
	|| ( string)weapon->query("skill_type") != "whip" )
		return notify_fail("���������һ�����Ӳ������޷���\n");

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
	|| (string)weapon->query("skill_type") != "whip")
		return notify_fail("��ʹ�õ��������ԡ�\n");
	if ((int)me->query("kee") < 50)
		return notify_fail("������������������޷���\n");
	me->receive_damage("kee",20);
	return 1;
}

string perform_action_file(string action)
{
	return __DIR__"yunlong-bian/" + action;
}

int power_point()	{	return 1.75;	}
int hard_point()	{	return 2.5;	}

