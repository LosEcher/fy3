// jiangshi-jianfa.c
// ��ʬ����
// made by cwj 97/7/6

inherit SKILL;

mapping *action = ({
        ([      "action":               
"$Nʹһ�С���������������ʱ����$w����һ������ѹ��$n��ȫ��",
                "dodge":                -20,
                "damage":               30,
                "damage_type":  "����"
        ]),
        ([      "action":               
"$Nʹ����ʬ�����еġ��׻��㡹����ʱ��������$n��$l",
                "dodge":                -20,
                "damage":               30,
                "damage_type":  "����"
        ]),
        ([      "action":               
"$Nһ�С�����ɭɭ�������ζ�Ȼ�������ߣ�����$wն��$n��$l",
                "dodge":                -30,
                "damage":               20,
                "damage_type":  "����"
        ]),
        ([      "action":               
"$N����$w�й�ֱ����һʽ�����鰵Ͷ����׼$n��$l�̳�һ��",
                "dodge":                -40,
                "damage_type":  "����"
        ]),
        ([      "action":               
"$N����һԾ������$wһ�С�������ա���׼$n��$lбб�̳�һ��",
                "dodge":                -40,
                "damage_type":  "����"
        ]),
        ([      "action":               
"$N��$wƾ��һָ��һ�С�����ָ·������$n��$l",
                "dodge":                20,
                "damage":               40,
                "damage_type":  "����"
        ]),
        ([      "action":               
"$N����$w����һ�֣�ʹһ�С�����Ͷ�������ֶ�׼$n$lһ����ȥ",
                "dodge":                -20,
                "damage":               20,
                "damage_type":  "����"
        ]),
        ([      "action":               
"$N�ὣ���ˣ��þ�ȫ����һת����$wʹһ�С���ٲ�����ӭ��ն��$n��$l",
                "dodge":                -30,
                "parry":                 30,
                 "force":                 75,
                "damage":                50,
                "damage_type":  "����"
        ]),
});

int valid_learn(object me)
{
        object ob;

        if( (int)me->query("max_force") < 50 )
	return notify_fail("�������������û�а취����ʬ������\n");

        if( (string)me->query_skill_mapped("force")!= "jimie-dafa")
                return notify_fail("��ʬ����������ϼ���󷨲�������\n");

        if( !(ob = me->query_temp("weapon"))
        ||      (string)ob->query("skill_type") != "sword" )
                return notify_fail("���������һ�ѽ�������������\n");

        return 1;
}

int valid_enable(string usage)
{
        return usage=="sword";
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
notify_fail("�����������������û�а취��ϰ��ʬ������\n");
        me->receive_damage("kee", 30);
        me->add("force", -3);
        write("�㰴����ѧ����һ�齩ʬ������\n");
        return 1;
}

string perform_action_file(string action)
{
	return CLASS_D("mingjiao")+"/jiangshi-jianfa/"+action;
}
 
