// ���ֻش�

#include <ansi.h>

inherit SKILL;
mapping *action = ({
	([	"name":			"������",
		"action":		"$Nʹһ�С������ԡ�����ָһ���������ֱ��$n��ȥ",
		"dodge":		-10,
		"damage":		30,
		"damage_type":	"����"
	]),
	([	"name":			"���ʱ��",
		"action":		"$N����һת��һ�С����ʱ�ס�������Ӳ���˼��ĽǶȴ���$n���߲���",
		"dodge":		-50,
		"damage":		40,
		"damage_type":	"����"
	]),
        ([      "name":                 "������ձ",
                "action":               "$N����һ����������������ֱ��$n����$n�ŵ���æ���ҡ�",
                "dodge":                -50,
                "damage":               60,
                "damage_type":  "����"
        ]),
	([	"name":			"â���ڱ�",
		"action":		"$N���ֿ�����ӣ�һ�С�â���ڱ�������֪ʲô��������Ȼ������ӱ�����$n������",
		"dodge":		-30,
		"damage":		80,
		"damage_type":	"����"
	]),
});

int valid_learn(object me)
{
	
	if ( me->query_temp("weapon")!= "����")
		return notify_fail("��û��װ���ʵ���������\n");

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
		return notify_fail("�����������������û�а취��ϰ���ֻش���\n");
	me->receive_damage("kee", 40);
	me->add("force", -10);
	write("�������������Լ���Ѩ����Χ�Ȼ������£��ƺ��е��ĵá�\n");
	return 1;
}

int valid_effect(object me, object weapon, string name, int skill)
{
}

string perform_action_file(string action)
{
	return action;
}

void skill_improved(object me)
{
	if(me->query_skill("miaoshouhuichun",1)==20)	
	tell_object(me,HIC"���Լ������Ѿ�����ļ����е��˽��ˡ�\n"NOR);
	if(me->query_skill("miaoshouhuichun",1)==40)
	tell_object(me,HIC"���Լ����ö���ļ������˲����ĵ���ᣬ������ǿ�˲��١�\n"NOR);
	if(me->query_skill("miaoshouhuichun",1)==80)
	tell_object(me,HIC"�����ļ����Ѿ����������ˡ�\n"NOR);
}
