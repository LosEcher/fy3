// musix ' skill Ǭ��һ��

#include <ansi.h>

inherit SKILL;
mapping *action = ({
	([	"name":			"��������",
		"action":		"$Nʹһ�С��������������$w��ֱ��$n��$l��ȥ",
		"dodge":		-10,
		"damage":		50,
		"damage_type":	"����"
	]),
	([	"name":			"���ǵ��",
		"action":		"$N����һת��һ�С����ǵ�ơ�$w�ó������Ӱ������ʵʵ��Ϯ��$n��$l",
		"dodge":		-50,
		"damage":		40,
		"damage_type":	"����"
	]),
        ([      "name":                 "��������",
                "action":               "$N��ǰһԾ��һ�С��������衹$w������֮������$n��$l",
                "dodge":                -50,
                "damage":               40,
                "damage_type":  "����"
        ]),
	([	"name":			"���糱ˮ",
		"action":		"$N����$w��һ�С����糱ˮ������ӰƮ�������ص���$n��$l",
		"dodge":		-30,
		"damage":		80,
		"damage_type":	"����"
	]),
});

int valid_learn(object me)
{
	object ob;

//	if( (int)me->query("max_force") < 100 )
//		return notify_fail("�������������û�а취��Ǭ��һ��, ����Щ���������ɡ�\n");

	if( !(ob = me->query_temp("weapon"))
	||	(string)ob->query("skill_type") != "throwing" )
		return notify_fail("���������һ֧�ڲ�������\n");

	return 1;
}

int valid_enable(string usage)
{
	return usage=="throwing";
}

mapping query_action(object me, object weapon)
{
	return action[random(sizeof(action))];
}

int practice_skill(object me)
{
	if( (int)me->query("kee") < 50
	||	(int)me->query("force") < 20 )
		return notify_fail("�����������������û�а취��ϰ��ѩ�޷���\n");
	me->receive_damage("kee", 40);
	me->add("force", -10);
	write("��������Ǭ��һ����\n");
	return 1;
}

int valid_effect(object me, object weapon, string name, int skill)
{
}

