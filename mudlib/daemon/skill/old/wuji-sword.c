// wuji-jianfa.c 
// �޼�����

#include <ansi.h>

inherit SKILL;

mapping *action = ({
        ([      "action":               "$Nʹһ�С�̣���ػ���������$wһ�и�һ�У�һ����һ�������羪����$n��$l",
		"dodge":		20,
            "damae":          30,
            "force":          25,
            "parry":          40,
		"damage_type":	"����"
	]),
        ([      "action":               "$N����$w�������������ΰ������һʽ��������������$n��$l",
		"dodge":	      20,
		"damae":		30,
            "force":          30,
            "parry":          25,
		"damage_type":	"����"
	]),
        ([     "action":		"$Nһ�С�����ϴ����������$wһ����ֱ��$n��$l����",
		"dodge":		30,
		"damae":		20,
            "force":          30,
            "parry":          35,
		"damage_type":	"����"
	]),
	([	"action":		"$N���˴�$w�����ߡ���ɽ���С���׼$n��$l�̳�һ��",
            "damae":          30, 
		"dodge":		40,
            "parry":          35,
            "force":          40,
		"damage_type":	"����"
	]),
	([	"action":		"$N�������أ�����΢�ˣ�����$wһ�С�������â����׼$n��$lбб�̳�һ��",
		"dodge":		40,
            "damae":          25,
            "force":          40,
            "parry":          45,
		"damage_type":	"����"
	]),
	([	"action":		"$N����������һ��������$w�ߡ�ü�ĵ�ࡹһ�У�����$n��$l",
		"dodge":		20,
		"damage":		40,
            "parry":          50, 
            "force":          30,
		"damage_type":	"����"
	]),
	([	"action":		"$N�����������һ��������$wһ��һ����ʹһ�С����Ƿ�׹������$n$l����",
		"dodge":		20,
		"damage":		20,
            "parry":          50,
            "force":          45,
		"damage_type":	"����"
	]),
	([	"action":		"$Nʹһ�С�����滨����˫��ԭ�ز������ϰ���һ����ת������$wһ����$n��$l����",
		"dodge":		30,
		"damage":		10,
            "force":          30, 
            "parry":          35, 
		"damage_type":	"����"
	]),
});

int valid_learn(object me)
{
        object ob;

                if( (int)me->query_skill("xiantian-force", 1) < 50 )
                return notify_fail("���������������㣬�޷����޼�����
��\n");

        if( (int)me->query("max_force") < 50 )
                return notify_fail("�������������û�а취���޼�������\n");
        if( !(ob = me->query_temp("weapon"))
        ||      (string)ob->query("skill_type") != "sword" )
                return notify_fail("���������һ�ѽ�������������\n");
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
notify_fail("�����������������û�а취��ϰ�޼�������\n");
        me->receive_damage("kee", 30);
        me->add("force", -3);
        write("�㰴����ѧ����һ���޼�������\n");
        return 1;
}
