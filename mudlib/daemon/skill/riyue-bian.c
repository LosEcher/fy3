// riyue-bian.c ���±޷�

#include <ansi.h>

inherit SKILL;

mapping *action = ({
([	"action":		"$N����������һ�С���ʯʽ��������$w���ñ�ֱ����׼$n���ظ�Ҫ����������",
	"damage":	50,
	"damage_type":	"����"
]),
([	"action":		"$N����һת��һ�С��ϴ�ʽ��������$w��������ڿ�һ���͵���$n��ͷ����",
	"damage":	80,
	"damage_type":	"����"
]),
([	"action":		"$N������ң�һ�С�����ʽ��������$w��������Ӱ����ɽ������ɨ��$nȫ��",
	"damage":	110,
	"damage_type":	"����"
]),
([	"action":		"$N������ң�һ�С��ֺ�ʽ��������$w��������Ӱ����ɽ������ɨ��$nȫ��",
	"damage":	140,
	"damage_type":	"����"
]),
([	"action":		"$N������ң�һ�С��ѿ�ʽ��������$w��������Ӱ����ɽ������ɨ��$nȫ��",
	"damage":	170,
	"damage_type":	"����"
]),
([	"action":		"$N������ң�һ�С�������ա�������$w��������Ӱ����ɽ������ɨ��$nȫ��",
	"damage":	200,
	"damage_type":	"����"
]),
([	"action":		"$N������ң�һ�С���շ�ħ��������$w��������Ӱ����ɽ������ɨ��$nȫ��",
	"damage":	220,
	"damage_type":	"����"
]),
([	"action":		"$N������ң�һ�С����ޱߡ�������$w��������Ӱ����ɽ������ɨ��$nȫ��",
	"damage":	250,
	"damage_type":	"����"
]),
});

int valid_enable(string usage) { return (usage == "whip") || (usage == "parry"); }

int valid_learn(object me)
{
	object weapon;

	if( (int)me->query("max_force") < 100)
		return notify_fail("����������㣬û�а취�����±޷�, ����Щ���������ɡ�\n");

	if ((int)me->query_skill("sanyang-shengong",1)<50)
		return notify_fail("��������񹦻�����\n");

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
		return notify_fail("����������������±޷���\n");
	me->receive_damage("kee",20);
	return 1;
}

string perform_action_file(string action)
{
		return __DIR__"riyue-bian/" + action;
}
int power_point()	{	return 1.5;	}
int hard_point()	{	return 2.5;	}

