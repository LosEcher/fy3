// fonxansword.c

#include <ansi.h>
inherit SKILL;
mapping *action = ({
        ([      "action":               
"$Nʹһ�С����·ת����$w����һ�����ߣ������Ƶ�����$n��$l",
			"dodge":                30,
		"damage":               50,
		"parry":		50,
		"weapon":"����",
		"damage_type":"����",
        ]),
        ([      "action":               
"$Nʹ��Ľ��ȭ���еġ���ɽ�����$w����$n��$l",
		"dodge":                40,
		"damage":               50,
		"parry":		40,
		"force":		40,
	"weapon":"˫ȭ����",
	"damage_type":"����",
        ]),
        ([      "action":               
"$Nһ�С�������С������ζ�Ȼ�������ߣ�$wն��$n��$l",
		"dodge":		40,
		"damage":               50,
		"parry":		40,
		"force":		40,
	"weapon":"ȭ�ƽ���",
		"damage_type":  "����"
        ]),
        ([      "action":               
"$N��ȭ�й�ֱ����һʽ�����ն�������׼$n��$l�ͻ�һȭ",
		"dodge":		40,
		"parry":		60,
		"force":		30,
		"damage":		80,
		"damage_type":  "����"
        ]),
        ([      "action":               
"$N����һԾ��һ�С����к�ء�$w��׼$n��$lбб����",
		"dodge":		40,
		"parry":		80,
		"force":		70,
		"damage":		90,
	"weapon":"ȭ��ָ��ָ���ƣ�",
		"damage_type":  "����"
        ]),
        ([      "action":               
"$N������ƾ��һָ��һ�С�ͯ����·����$w�������ֱ��$n��$l",
                "dodge":                20,
                "damage":               40,
		"parry":		60,
		"force":		90,
	"weapon":"ȭ����·ͻ��ָ��",
		"damage_type" : "����"
        ]),
        ([      "action":               
"$N��ȭ����һ�֣�ʹһ�С��������������ֶ�׼$n$lһȭ��ȥ",
		"dodge":		50,
		"parry":		50,
		"force":		50,
                "damage":               20,
		"damage_type":  "����"
        ]),
        ([      "action":               
"$N˫ȭ���أ�����һתʹһ�С��չ���硹��$w����$n��$l",
		"dodge":		40,
		"damage":               80,
		"parry":		50,
		"force":		40,
		"weapon":"��ȭ����",
		"damage_type":  "ն��"
        ]),
});

int valid_learn(object me)
{
        object ob;

        return 1;
}

int valid_enable(string usage)
{
	return usage=="unarmed" || usage=="parry";
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
notify_fail("�����������������û�а취��ϰĽ��ȭ����\n");
        me->receive_damage("kee", 30);
        me->add("force", -3);
	write("�㰴����ѧ����һ��Ľ��ȭ����\n");
        return 1;
}

string perform_action_file(string action)
{
	return CLASS_D("xiake")+"/murongquanfa/"+action;
}
void skill_improved(object me)
{
	if(me->query_skill("murongquanfa",1)==20)	
	tell_object(me,HIC"�������ˡ�̽���֡����ַ���(tanyunshou)\n"NOR);
	if(me->query_skill("murongquanfa",1)==40)
	tell_object(me,HIC"�������ˡ��κ�ָ����ָ����(canhezhi)\n"NOR);
	if(me->query_skill("murongquanfa",1)==80)
	tell_object(me,HIC"�������ˡ���ת���ơ��񹦣�(douzhuan)\n"NOR);
}
