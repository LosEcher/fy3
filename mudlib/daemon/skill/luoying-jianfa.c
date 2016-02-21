// luoying-sword.c by ksusan 07/08/1997
// 97/9/27 by Aug

#include <ansi.h>

inherit SKILL;

mapping *action = ({
	([	"action":		"$Nʹ��һ�С�����һɫ����һ��Ʈ��$n��$l",
		"damage":	100,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһ�С������������һ������$n��$l",
		"damage":	110,
		"damage_type":	"����"
	]),
	([	"action":		"$Nʹ����һ�����ġ���һ���׹�����$n������",
		"damage":	120,
		"damage_type":	"����"
	]),
	([	"action":		"$N����������ʹ������Ӣ�ͷס�����ʮ��$w��$n��$lնȥ",
		"damage":	130,
		"damage_type":	"����"
	]),
	([	"action":		"$N΢΢һЦ��ʹ�����л�������������$w���ű߼ʵĴ̳��������ж�������$n������",
		"damage":	140,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһʽ���������С�������$w����һ����Ϯ��$n",
		"damage":	150,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһ�ɳ��죬һʽ����������������$n��ʮ������Ѩ",
		"damage":	150,
		"damage_type":	"����"
	]),
	([	"action":		"$N����һ����$n��ʱ������ʮ��$w������˷�Ϯ����ȱ������$N�����Σ���һ�С������ˮ��",
		"damage":	160,
		"damage_type":	"����"
	]),
	([	"action":		HIW"$N��ɫ���أ�$w"+HIW"ƽ�̣�ʹ����Ǭ��һ������˲ʱ���Ϊ֮һ��"NOR,
		"damage":	170,
		"damage_type":	"����"
	]),
	([	"action":		HIW"$Nһ����$n�̳��Ž�����$n���ڽ���֮�У���Ҳ�ֲ��嶫���ϱ�����һ�С��������Ρ�"NOR,
		"damage":	180,
		"damage_type":	"����"
	]),
	([	"action":		HIW"$Nһ�С�ԴԴ������ʹ�������಻�ϵ���$n�̳���ʮ������$n�������æ���ң�Ӧ�Ӳ�Ͼ"NOR,
		"damage":	190,
		"damage_type":	"����"
	]), 
	([	"action":		HIW"$Nһ�С��绨ѩ�¡�ʹ����$n��ʱ�е�һ�ɺ���Ϯ�ˣ��ƺ����˱���ѩ��֮��"NOR,
		"damage":	200,
		"damage_type":	"����"
	]),
	([	"action":		YEL"$N��ɫһ�䣬���ٹ˼�����İ�Σ��һ�С����ͬ�١�����һ��$n��ȥ"NOR,
		"damage":	210,
		"damage_type":	"����"
	]),
	([	"action":		YEL"$N������Ц������$w"+YEL"������Ļ���$n����Ω�Ҷ���ʹ����$N����������",
		"damage":	220,
		"damage_type":	"����"
	]),

});

int valid_learn(object me)
{
        object ob;

		if( (int)me->query_skill("suiyu-force", 1) < 20 )
			return notify_fail("��������񹦻���㣬�޷�����Ӣ������\n");
		
        if( (int)me->query("max_force") < 50 )
                return notify_fail("�������������û�а취����Ӣ������\n");

        if( !(ob = me->query_temp("weapon"))
        ||      (string)ob->query("skill_type") != "sword" )
                return notify_fail("���������һ�ѽ�������������\n");

        return 1;
}

int valid_enable(string usage)
{
        return usage=="sword" || usage=="parry";
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
notify_fail("�����������������û�а취��ϰ��Ӣ������\n");
        me->receive_damage("kee", 20);
        me->add("force", -3);
        write("�㰴����ѧ����һ����Ӣ������\n");
        return 1;
}

string perform_action_file(string action)
{
	return __DIR__"luoying-jianfa/"+action;
}
int power_point()	{	return 1.75;	}
int power_hard()	{	return 3;	}

