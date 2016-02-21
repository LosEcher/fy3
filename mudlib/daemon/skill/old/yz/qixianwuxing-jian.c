//�������ν�
inherit SKILL;

mapping *action = ({
        ([      "action":               
"$Nʹһ�С�����������������$w��һ��һ�����$n��$l",
                "dodge":                -20,
		"parry":		50,
		"damage":		100,
		"force":	100,
                "damage_type":  "����"
        ]),
        ([      "action":               
"$N��ָ��$w��һ������$w����֮��һ�С�ӹ�����š�����������հ�����$n��$l",
                "dodge":                -20,
			"damage":		110,
			"force":		100,
                "damage_type":  "����"
        ]),
        ([      "action":               
"$Nһ�С���į������������$wĬĬ������$n��$l",
                "dodge":                -30,
			"damage":		120,
			"force":		110,
                "damage_type":  "����"
        ]),
        ([      "action":               
"$N����$wһʽ���������̡���׼$n��$lһ���̳�����",
		"damage":		130,
		"force":		110,
                "damage_type":  "����"
        ]),
        ([      "action":               
"$N��$wƾ��һָ��һ�С�����˼������$n��$l",
                "dodge":                20,
		"damage":		140,
		"force":		120,
                "damage_type":  "����"
        ]),
        ([      "action":               
"$N����$w����һ�֣�ʹһ�С��������ơ����ֶ�׼$n$lһ����ȥ",
                "dodge":                -20,
		"damage":		150,
		"force":		120,
                "damage_type":  "����"
        ]),
	([	"action":
"$N��Ȼ���о������䣬һ�С�������ɽ����һ�����Ƹ��Ľ���ֱ��$n",
		"dodge":		20,
		"parry":		50,
		"damage":		200,
		"force":		150,
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
        return CLASS_D("legend") + "/deisword/" + action;
}
 
string *parry_msg = ({
        "$nʹ��һ�С�������������е�$v������$N��$w��\n",
        "$nʹ������������ʡ�����$N��$w�������⡣\n",
        "$nʹ��һ�С�ǿ�ֻ���ζ�������е�$v����������գ�������$N��$w��\n",
        "$n���е�$vһ����һ�С��ԾƵ��衹����$N��$w��������ȥ��\n",
});

string *unarmed_parry_msg = ({
        "$n�����е�$v����ܲ�͸�磬һ�С����ǿ��Ϊ����ס��$N�Ĺ��ơ�\n",
        "$n����һ�С����������ޡ�����������ʧ��һ�Ž���֮�С�\n",
        "$nʹ��һ�С��м���ɫ�ԡ���$vֱ��$N��˫�֡�\n",
        "$n�����е�$vһ����һ���С��Ѿ��ִ��������ȵ�$N�������ˡ�\n",
});

string query_parry_msg(object weapon)
{
        if( weapon )
                return parry_msg[random(sizeof(parry_msg))];
        else
                return unarmed_parry_msg[random(sizeof(unarmed_parry_msg))];
}

