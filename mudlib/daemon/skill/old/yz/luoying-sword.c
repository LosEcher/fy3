// luoying-sword.c by ksusan 07/08/1997
// 97/10/17 by Aug

#include <ansi.h>

inherit SKILL;

mapping *action = ({
	([	"action":		"$Nʹ��һ�С�����һɫ��������һ����һ��Ʈ��$n��$l",
		"dodge":		20,
		"parry":		20,
		"force":		25,
		"damage":         20,
		"lvl":		0,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһ�С������������˫����ס$w������$n��$l",
		"dodge":		10,
		"parry":		30,
		"force":		50,
		"damage":         20,
		"lvl":		0,
		"damage_type":	"����"
	]),
	([	"action":		"$N����һ����Ϊһ���׹⣬һʽ��һ�����ġ�����$n������",
		"dodge":		60,
		"parry":		-20,
		"force":		20,
		"damage":         50,
		"lvl":		9,
		"damage_type":	"����"
	]),
	([	"action":		"$N����������ʹ������Ӣ�ͷס�����ʮ��$w��$n��$lնȥ",
		"dodge":		60,
		"parry":		60,
		"force":		60,
		"damage":         40,
		"lvl":		9,
		"damage_type":	"����"
	]),
	([	"action":		"$N΢΢һЦ��ʹ�����л�������������$w���ű߼ʵĴ̳��������ж�������$n����������",
		"dodge":		60,
		"parry":		80,
		"force":		80,
		"damage":         45,
		"lvl":		19,
		"damage_type":	"����"
	]),
	([	"action":		"$N����$wһ����һʽ���������С�����һ����Ϯ��$n",
		"dodge":		-40,
		"parry":		-40,
		"force":		85,
		"damage":         55,
		"lvl":		19,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһ�ɳ��죬һʽ����������������$n��ʮ������Ѩ",
		"dodge":		90,
		"parry":		90,
		"force":		80,
		"damage":         50,
		"lvl":		29,
		"damage_type":	"����"
	]),
	([	"action":		"$N����һ����$n��ʱ������ʮ��$w������˷�Ϯ����ȷ������$N�����Σ���һ�С������ˮ��",
		"dodge":		100,
		"parry":		100,
		"force":		80,
		"damage":         50,
		"lvl":		39,
		"damage_type":	"����"
	]),
	([	"action":		HIW"$N��ɫ���أ�$w"+HIW"ƽ�̣�ʹ����Ǭ��һ������˲ʱ���Ϊ֮һ��"NOR,
		"dodge":		-60,
		"parry":		-30,
		"force":		120,
		"damage":         80,
		"lvl":		49,
		"damage_type":	"����"
	]),
	([	"action":		HIW"$Nһ����$n�̳��Ž�����$n���ڽ���֮�У���Ҳ�ֲ��嶫���ϱ�����һ�С��������Ρ�"NOR,
		"dodge":		120,
		"parry":		120,
		"force":		90,
		"damage":         60,
		"lvl":		59,
		"damage_type":	"����"
	]),
	([	"action":		HIW"$Nһ�С�ԴԴ������ʹ�������಻�ϵ���$n�̳���ʮ������$n�������æ���ң�Ӧ�Ӳ�Ͼ"NOR,
		"dodge":		100,
		"parry":		100,
		"force":		90,
		"damage":         70,
		"lvl":		69,
		"damage_type":	"����"
	]), 
	([	"action":		HIW"$Nһ�С��绨ѩ�¡�ʹ����$n��ʱ�е�һ�ɺ���Ϯ�ˣ��ƺ����˱���ѩ��֮��"NOR,
		"dodge":		90,
		"parry":		90,
		"force":		120,
		"damage":         80,
		"lvl":		79,
		"damage_type":	"����"
	]),
	([	"action":		HIW"$Nһʽ��÷����Ū��ʽ���������������಻�������⣬$n��ʱ�����˸���æ����"NOR,
		"dodge":		150,
		"parry":		150,
		"force":		100,
		"damage":         80,
		"lvl":		89,
		"damage_type":	"����"
	]),
	([	"action":		YEL"$N��ɫһ�䣬���ٹ˼�����İ�Σ��һ�С����ͬ�١�����һ��$n��ȥ"NOR,
		"dodge":		-50,
		"parry":		-50,
		"force":		200,
		"damage":         120,
		"lvl":		99,
		"damage_type":	"����"
	]),
	([	"action":		YEL"$N����$w"+YEL"���һ��������һʽ���ط����衹��ס��$n"NOR,
		"dodge":		120,
		"parry":		120,
		"force":		120,
		"damage":         100,
		"lvl":		109,
		"damage_type":	"����"
	]),

	([	"action":		YEL"$N������Ц������$w"+YEL"������Ļ���$n����Ω�Ҷ���ʹ����$N����������"NOR,
		"dodge":		150,
		"parry":		150,
		"force":		250,
		"damage":         150,
		"lvl":		119,
		"damage_type":	"����"
	]),
	([	"action":		YEL"$N���θ߸�Ծ��һʽ��ӭ�������ˡ�ʹ���������������������һ������������̳�����"NOR,
		"dodge":		200,
		"parry":		200,
		"force":		250,
		"damage":         200,
		"lvl":		149,
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
        return CLASS_D("xiake") + "/luoying-sword/" + action;
}
 
