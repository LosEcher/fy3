// fonxansword.c

#include <ansi.h>
inherit SKILL;
mapping *action = ({
        ([      "action":               
"$Nʹһ�С����·ת������ȭ��ָ����һ�����߰����$n��$l",
		"damage":60,
			"damage_type":  "����"
        ]),
        ([      "action":               
"$Nʹ��Ľ��ȭ���еġ���ɽ�����˫ȭ����ն��$n��$l",
		"damage":80,
		"damage_type":  "ն��"
        ]),
        ([      "action":               
"$Nһ�С�������С������ζ�Ȼ�������ߣ�ȭ�ƽ���ն��$n��$l",
		"damage":100,
		"damage_type":  "����"
        ]),
        ([      "action":               
"$N��ȭ�й�ֱ����һʽ�����ն�������׼$n��$l�ͻ�һȭ",
		"damage":	120,
		"damage_type":  "����"
        ]),
        ([      "action":               
"$N����һԾ��ȭ��ָ��ָ���ƣ�һ�С����к�ء���׼$n��$lбб����",
		"damage":140,
		"damage_type":  "����"
        ]),
        ([      "action":               
"$N������ƾ��һָ��һ�С�ͯ����·����ȭ����·ͻ��ָ������$n��$l",
		"damage":	160,
                "damage_type":  "����"
        ]),
        ([      "action":               
"$N��ȭ����һ�֣�ʹһ�С��������������ֶ�׼$n$lһȭ��ȥ",
		"damage":	180,
		"damage_type":  "����"
        ]),
        ([      "action":               
"$N˫ȭ���أ�����һת��ȭ���ƣ�ʹһ�С��չ���硹����$n��$l",
		"damage":	200,
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
	return __DIR__"murongquanfa/"+action;
}
void skill_improved(object me)
{
	if(me->query_skill("murongquanfa",1)==20)
	tell_object(me,HIC"�������ˡ�̽���֡����ַ���(tanyunshou)\n"NOR);
	if(me->query_skill("murongquanfa",1)==50)
	tell_object(me,HIC"�������ˡ��κ�ָ����ָ����(canhezhi)\n"NOR);
}

int power_point()	{	return 1.5;	}

