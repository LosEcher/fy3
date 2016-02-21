// luoying-sword.c by ksusan 07/08/1997
// 97/9/27 by Aug

#include <ansi.h>

inherit SKILL;

mapping *action = ({
	([	"action":		"$Nʹ��һ�С�����һɫ����һ��Ʈ��$n��$l",
		"dodge":		20,
		"parry":		20,
		"force":		25,
		"damage":         30,
		"lvl":		0,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһ�С������������һ������$n��$l",
		"dodge":		10,
		"parry":		30,
		"force":		50,
		"damage":         40,
		"lvl":		0,
		"damage_type":	"����"
	]),
	([	"action":		"$Nʹ����һ�����ġ���һ���׹�����$n������",
		"dodge":		60,
		"parry":		-20,
		"force":		20,
		"damage":         60,
		"lvl":		9,
		"damage_type":	"����"
	]),
	([	"action":		"$N����������ʹ������Ӣ�ͷס�����ʮ��$w��$n��$lնȥ",
		"dodge":		60,
		"parry":		60,
		"force":		50,
		"damage":         50,
		"lvl":		9,
		"damage_type":	"����"
	]),
	([	"action":		"$N΢΢һЦ��ʹ�����л�������������$w���ű߼ʵĴ̳��������ж�������$n������",
		"dodge":		80,
		"parry":		80,
		"force":		60,
		"damage":         80,
		"lvl":		19,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһʽ���������С�������$w����һ����Ϯ��$n",
		"dodge":		-40,
		"parry":		-40,
		"force":		85,
		"damage":         85,
		"lvl":		29,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһ�ɳ��죬һʽ����������������$n��ʮ������Ѩ",
		"dodge":		90,
		"parry":		90,
		"force":		50,
		"damage":         50,
		"lvl":		29,
		"damage_type":	"����"
	]),
	([	"action":		"$N����һ����$n��ʱ������ʮ��$w������˷�Ϯ����ȱ������$N�����Σ���һ�С������ˮ��",
		"dodge":		100,
		"parry":		100,
		"force":		60,
		"damage":         60,
		"lvl":		39,
		"damage_type":	"����"
	]),
	([	"action":		HIW"$N��ɫ���أ�$w"+HIW"ƽ�̣�ʹ����Ǭ��һ������˲ʱ���Ϊ֮һ��"NOR,
		"dodge":		-60,
		"parry":		-30,
		"force":		100,
		"damage":         100,
		"lvl":		49,
		"damage_type":	"����"
	]),
	([	"action":		HIW"$Nһ����$n�̳��Ž�����$n���ڽ���֮�У���Ҳ�ֲ��嶫���ϱ�����һ�С��������Ρ�"NOR,
		"dodge":		120,
		"parry":		120,
		"force":		75,
		"damage":         75,
		"lvl":		59,
		"damage_type":	"����"
	]),
	([	"action":		HIW"$Nһ�С�ԴԴ������ʹ�������಻�ϵ���$n�̳���ʮ������$n�������æ���ң�Ӧ�Ӳ�Ͼ"NOR,
		"dodge":		100,
		"parry":		100,
		"force":		90,
		"damage":         90,
		"lvl":		69,
		"damage_type":	"����"
	]), 
	([	"action":		HIW"$Nһ�С��绨ѩ�¡�ʹ����$n��ʱ�е�һ�ɺ���Ϯ�ˣ��ƺ����˱���ѩ��֮��"NOR,
		"dodge":		90,
		"parry":		90,
		"force":		120,
		"damage":         120,
		"lvl":		79,
		"damage_type":	"����"
	]),
	([	"action":		HIY"$N��ɫһ�䣬���ٹ˼�����İ�Σ��һ�С����ͬ�١�����һ��$n��ȥ"NOR,
		"dodge":		-100,
		"parry":		-100,
		"force":		160,
		"damage":         150,
		"lvl":		89,
		"damage_type":	"����"
	]),
	([	"action":		HIY"$N������Ц������$w"+YEL"������Ļ���$n����Ω�Ҷ���ʹ����$N����������"NOR,
		"dodge":		150,
		"parry":		150,
		"force":		200,
		"damage":         200,
		"lvl":		99,
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
 
