//�Ὣ��ʫ�ȷ�

inherit SKILL;

mapping *action = ({
        ([      "action":               
"$N����$w��$n��$l�������㣬���ǡ��᡹���������ʣ�",
		"damage":		100,
                "dodge":                10,
                "parry":                -40,
		"force":		100,
                "damage_type":  "����"
        ]),
        ([      "action":               
"$N����$w����׼$n��$l��㣬�����Ͻ������½��������£����ǡ��硹�ֲ��飡",
		"damage":		110,
                "dodge":                20,
                "parry":                -60,
		"force":		100,
                "damage_type":  "����"
        ]),
        ([      "action":               
"$N���$w��д�˸����͡��֣�����$nбɨ��ȥ��",
		"damage":		120,
                "dodge":                10,
                "parry":                -40,
		"force":		110,
                "damage_type":  "����"
        ]),
        ([      "action":               
"$N���һ�����ʷ�һ��д�����������֣�$wһͦײ��$n$l��",
		"damage":		130,
                "dodge":                10,
                "parry":                -40,
		"force":		110,
                "damage_type":  "����"
        ]),
	([	"action":
"$N����΢ת��$w����$n��$l��ɨ��ȥ��˳�ƴ������������֣�",
		"dodge":	50,
		"parry":		60,
		"force":	120,
		"damage":		140,
		"damage_type":		"����",
	]),
	
	([	"action":
"$N�߸�Ծ������$w��������׳���֣�����$n��$lײ�˹�����",
		"dodge":	50,
		"parry":		50,
		"force":	120,
		"damage":		150,
		"damage_type":		"����",
	]),
	([	"action":
"$Nŭ��һ��������$w�������Ǹ����ڡ��֣���$n$l�������£�",
		"dodge":	80,
		"parry":	50,
		"damage":	200,
		"force":	150,
		"damage_type":	"����",
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
        return (usage=="staff") || (usage=="parry");
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

int practice_skill(object me)
{
        object weapon;

        if( !objectp(weapon = me->query_temp("weapon"))
        ||      (string)weapon->query("skill_type") != "staff" )
                return 
notify_fail("���������һ��ľ�Ȼ��������Ƶ��������������ȷ���\n");

		if((int)me->query("kee") <40)
                return 
notify_fail("������������������ȷ�����������Ϣ��Ϣ�ɡ�\n");
		me->receive_damage("kee",40);
        return 1;
}
 
