//�������ν�
inherit SKILL;

mapping *action = ({
        ([      "action":               
"$Nʹһ�С�����������������$w��һ��һ�����$n��$l",
		"damage":		100,
                "damage_type":  "����"
        ]),
        ([      "action":               
"$N��ָ��$w��һ������$w����֮��һ�С�ӹ�����š�����������հ�����$n��$l",
		"damage":120,
                "damage_type":  "����"
        ]),
        ([      "action":               
"$Nһ�С���į������������$wĬĬ������$n��$l",
		"damage":140,
                "damage_type":  "����"
        ]),
        ([      "action":               
"$N����$wһʽ���������̡���׼$n��$lһ���̳�����",
		"damage":160,
                "damage_type":  "����"
        ]),
        ([      "action":               
"$N��$wƾ��һָ��һ�С�����˼������$n��$l",
		"damage":180,
                "damage_type":  "����"
        ]),
        ([      "action":               
"$N����$w����һ�֣�ʹһ�С��������ơ����ֶ�׼$n$lһ����ȥ",
		"damage":		200,
                "damage_type":  "����"
        ]),
	([	"action":
"$N��Ȼ���о������䣬һ�С�������ɽ����һ�����Ƹ��Ľ���ֱ��$n",
		"damage":		250,
		"damage_type":		"����",
	]),
});

int valid_learn(object me)
{
    if(me->query_skill("xuantian-quan",1)<20)
        return notify_fail("��ġ�����ȭ����������졣\n");
    if(me->query_skill("xuantian-neigong",1)<20)
    return notify_fail("��ġ������ڹ�������������\n");
    if(me->query("max_force")<50)
    return notify_fail("���������Ϊ������\n");
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
	object ob;
	        if( !(ob = me->query_temp("weapon"))
        ||      (string)ob->query("skill_type") != "sword" )
			return notify_fail("���������һ�ѽ�������������\n");
	if( (int)me->query("kee") <40)
                return 
	notify_fail("�����������û�а취��ϰ���������ν�����\n");
	me->receive_damage("kee",40);
        return 1;
}

string perform_action_file(string action)
{
return "/daemon/class/meizhuang/qixianwuxing-jian/"+action;
}
 

int power_point()	{	return 1.25;	}
