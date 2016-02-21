// jingang-quan.c -����ȭ

inherit SKILL;

mapping *action = ({
([	"action" : "$N��ϥ�������������$n��$l",
	"force" : 60,
        "dodge" : -5,
	"lvl" : 0,
	"skill_name" : "������",
	"damage_type" : "����"
]),
([	"action" : "$N�͵�һȭ�����Լ��¸����з�����������$n",
	"force" : 70,
        "dodge" : 5,
	"damage": 10,
	"lvl" : 10,
	"skill_name" : "�һ�׶",
        "damage_type" : "����"
]),
([	"action" : "$N�ڿշ���˫ȭ�������$n�ۻ��Ļ�,�޴�����",
	"force" : 80,
        "dodge" : 15,
	"damage": 10,
	"lvl" : 20,
	"skill_name" : "�˷���",
        "damage_type" : "����"
]),
([	"action" : "$N��Ŀ���ӣ�˫ȭ���������������������",
	"force" : 100,
        "dodge" : 15,
	"damage": 35,
	"lvl" : 54,
	"skill_name" : "����",
        "damage_type" : "����"
]),
});

int valid_enable(string usage)
 { 
    return  usage=="unarmed" || usage=="parry"; 
 }

int valid_learn(object me)
{
	if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
		return notify_fail("������ȭ������֡�\n");
	if ((int)me->query("max_force") < 50)
		return notify_fail("�������̫�����޷�������ȭ��\n");
	return 1;
}

string query_skill_name(int level)
{
        int i;
        for(i = sizeof(action)-1; i >= 0; i--)
                if(level >= action[i]["lvl"])
                        return action[i]["skill_name"];
}

mapping query_action(object me, object weapon)
{
        int i, level;
        return action[random(sizeof(action))];
}

int practice_skill(object me)
{
	if ((int)me->query("kee") < 30)
		return notify_fail("�������̫���ˡ�\n");
	if ((int)me->query("force") < 20)
		return notify_fail("�����������������ȭ��\n");
	me->receive_damage("kee", 30);
	me->add("force", -10);
	return 1;
}

