// lanhua-finger.c  ������Ѩ��
// 97.9.27 by Aug

#include <ansi.h>

inherit SKILL;

mapping *action = ({
	([	"action":		"$Nʹ��һ�С�������������һָʯ����ָ��$n��$l",
		"dodge":		30,
		"parry":		20,
		"force":		40,
		"damage":		60,
		"lvl":		0,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһʽ���绨ѩ�¡�ʹ������ָ��Ʈ����ɢ����$n��ʱ����Χ��ָ��֮�С�",
		"dodge":		50,
		"parry":		60,
		"force":		100,
		"damage":		100,
		"lvl":		9,
		"damage_type":	"����"
	]),
	([	"action":		"$N����ָ��Ӱ�Ӱ�׷����$n�����Σ���֦��Ӱ�ӡ�,$n��Ҳ���Ѳ���$N����ָ��",
		"dodge":		80,
		"parry":		80,
		"force":		110,
		"damage":		110,
		"lvl":		19,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһ�С��������ۡ�����ָ��������ķ���$n��$l",
		"dodge":		-50,
		"parry":		-20,
		"force":		200,
		"damage":		200,
		"lvl":		29,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһ�С���ʯ��١������Ϊ֮һ����$N�ƺ�ƴ���ƵĴ���$n��$l",
		"dodge":		-60,
		"parry":		-80,
		"force":		260,
		"damage":		300,
		"lvl":		39,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһ�С��²л�ȱ��ʹ����$n����ǰ������������Ӱ�������������飬��ʱ���˷���",
		"dodge":		150,
		"parry":		150,
		"force":		250,
		"damage":		250,
		"lvl":		49,
		"damage_type":	"����"
	]),
	([	"action":		"$N����һչԾ�ڿ��У���������졹�Ӹ�����һָ����$n��$l",
		"dodge":		150,
		"parry":		150,
		"force":		280,
		"damage":		280,
		"lvl":		59,
		"damage_type":	"����"
	]),	
	([	"action":		"$Nһ�С���ָ���ס�����ؼ�һ���������$n��$l",
		"dodge":		100,
		"parry":		100,
		"force":		400,
		"damage":		400,
		"lvl":		79,
		"damage_type":	"����"
	]),


});

int valid_enable(string usage)
{
        return usage=="unarmed" || usage=="parry";
}

int valid_learn(object me)
{
	if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
		return notify_fail("��������Ѩ�ֱ�����֡�\n");
	if( (int)me->query_skill("suiyu-force", 1) < 10 )
		return notify_fail("��������񹦻���㣬�޷���������Ѩ�֡�\n");
	if( (int)me->query_skill("unarmed", 1) < 10 )
		return notify_fail("���ͽ�ֲ�������㣬�޷���������Ѩ�֡�\n");

	return 1;
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

int practice_skill(object me)
{
        if( (int)me->query("kee") < 30
        ||      (int)me->query("force") < 3 )
                return 
notify_fail("�����������������û�а취��ϰ������Ѩ�֡�\n");
        me->receive_damage("kee", 20);
        me->add("force", -3);
        write("�㰴����ѧ����һ��������Ѩ�֡�\n");
        return 1;
}

string perform_action_file(string action)
{
        return CLASS_D("xiake") + "/lanhua-finger/" + action;
}

void skill_improved(object me)
{
        if(me->query_skill("lanhua-finger",1)==60)       
	       tell_object(me,HIC"�������ˡ���ָ��ͨ�����ַ���(tanzhi)\n"NOR);
}