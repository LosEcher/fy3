// wuqing-jianfa.c  
// ���ݽ���

#include <ansi.h>

inherit SKILL;

mapping *action	=({
        ([      "action":"$Nʹһ�С������Ҷ��������$wб����������ȥ�����$n��$l",
		"dodge":		50,
		"damage":		80,
            "parry":          60, 
            "force":          70,
		"damage_type":	"����"
	]),
        ([      "action":"$N����$wͻȻ��������ˢ��ˢ��ˢ�����鳷��������$n��$l��$l",
		"dodge":		60,
		"damage":		70,
            "parry":          50, 
            "force":          60,
		"damage_type":	"����"
	]),
        ([     "action":"$Nһ�С��ط�Ϸ����������$wһ������$n��$l",
		"dodge":		80,
		"damage":		90,
            "parry":          100, 
            "force":          80,
		"damage_type":	"����"
	]),
	([	"action":"$N��$wһ�ã����ߡ���Ŀ�ײ�����׼$n��$l�̳�һ��",
		"dodge":		90,
		"damage":		80,
            "parry":          70, 
            "force":          90,
		"damage_type":	"����"
	]),
	([	"action":"$Nһ�С�ӭ��ɨ��������$w������һȦ�������$n��$l",
		"dodge":		100,
		"damage":		100,
            "parry":          110, 
            "force":          90,
		"damage_type":	"����"
	]),
	([	"action":"$N�����ȣ�����ֱ����$w�ߡ��׺����᡹һ�У�����$n��$l",
		"dodge":		60,
		"damage":		70,
            "parry":          100, 
            "force":          85,
		"damage_type":	"����"
	]),
	([	"action":"$N������$w�����˸�Ȧ��ͻȻʹһ�С��׺���ա��������磬����$n$l",
		"dodge":		90,
		"damage":		75,
            "parry":          90, 
            "force":          80,
		"damage_type":	"����"
	]),
	([	"action":"$N����$w���Ʈ��Ҷ��һʽ��չ��Ħ�ơ����������ϣ���$n��$l����",
		"dodge":		60,
		"damage":		90,
            "parry":          120, 
            "force":          100,
		"damage_type":	"����"
	]),
       ([	"action":"$Nһ�С�Գ��ժ�ҡ�������$w��$n��$l��$n��$l",
		"dodge":		90,
		"damage":		70,
            "parry":          80, 
            "force":          100,
		"damage_type":	"����"
	]),
});

string *interattack = ({
        "$N���������е�$w���Ż�������\n",

});

int valid_learn(object me)
{
        object ob;

            if( (int)me->query_skill("xiantian-force", 1) < 70 )
            return notify_fail("���������������㣬�޷������ݽ�����\n");

        if( (int)me->query("max_force") < 400 )
                return notify_fail("�������������û�а취�����ݽ�����\n");

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
notify_fail("�����������������û�а취��ϰ���ݽ�����\n");
        me->receive_damage("kee", 35);
        me->add("force", -30);
        write("�㰴����ѧ����һ�����ݽ�����\n");
        return 1;
}
string perform_action_file(string func)
{
        return CLASS_D("xiake")+"/wuqin-sword/"+func;
}






