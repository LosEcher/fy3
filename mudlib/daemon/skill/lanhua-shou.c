// lanhua-finger.c  ������Ѩ��
// 97.9.27 by Aug

#include <ansi.h>

inherit SKILL;

mapping *action = ({
	([	"action":		"$Nʹ��һ�С�������������һָʯ����ָ��$n��$l",
		"damage":		60,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһʽ���绨ѩ�¡�ʹ������ָ��Ʈ����ɢ����$n��ʱ����Χ��ָ��֮�С�",
		"damage":		80,
		"damage_type":	"����"
	]),
	([	"action":		"$N����ָ��Ӱ�Ӱ�׷����$n�����Σ���֦��Ӱ�ӡ�,$n��Ҳ���Ѳ���$N����ָ��",
		"damage":		100,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһ�С��������ۡ�����ָ��������ķ���$n��$l",
		"damage":		120,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһ�С���ʯ��١������Ϊ֮һ����$N�ƺ�ƴ���ƵĴ���$n��$l",
		"damage":		140,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһ�С��²л�ȱ��ʹ����$n����ǰ������������Ӱ�������������飬��ʱ���˷���",
		"damage":		160,
		"damage_type":	"����"
	]),
	([	"action":		"$N����һչԾ�ڿ��У���������졹�Ӹ�����һָ����$n��$l",
		"damage":		180,
		"damage_type":	"����"
	]),	
	([	"action":		"$Nһ�С���ָ���ס�����ؼ�һ���������$n��$l",
		"damage":		200,
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
	return __DIR__"lanhua-shou/"+action;
}

void skill_improved(object me)
{
        if(me->query_skill("lanhua-finger",1)==60)       
	       tell_object(me,HIC"�������ˡ���ָ��ͨ�����ַ���(tanzhi)\n"NOR);
}

int power_point()	{	return 1.5;	}
int hard_point()	{	return 2;	}

