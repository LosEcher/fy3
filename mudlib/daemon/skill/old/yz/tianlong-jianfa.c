// tianlong-jianfa.c �������� by ksusan 08/09/97

inherit SKILL;

mapping *action = ({
([	"action":"$Nʹһʽ��������Ե����������$w����΢�񣬻ó�һ���������$n��$l",
	"force" : 120,
        "dodge" : -10,
	"damage": 15,
	"lvl" : 0,
	"skill_name" : "������Ե��",
	"damage_type":	"����"
]),
([	"action":"$N����ǰ��ʹ������ȥ�����С��������������ޣ�$w��������$n��$l��ȥ",
	"force" : 140,
        "dodge" : -10,
	"damage": 20,
	"lvl" : 9,
	"skill_name" : "��ȥ������",
	"damage_type":	"����"
]),
([	"action":"$Nһʽ��������ɣԶ��������Ʈ�����ߣ��˷�����������$wңҡָ��$n��$l",
	"force" : 160,
        "dodge" : 5,
	"damage": 30,
	"lvl" : 18,
	"skill_name" : "������ɣԶ",
	"damage_type":	"����"
]),
([	"action":"$N��������Ծ��һʽ���ֻط����᡹���������ּ�ת������ն��$n��$l",
	"force" : 180,
        "dodge" : 10,
	"damage": 35,
	"lvl" : 27,
	"skill_name" : "�ֻط�����",
	"damage_type":	"����"
]),
([	"action":"$N����$w�й�ֱ����һʽ��ˮ��ͨ���š���������Ϣ�ض�׼$n��$l�̳�һ��",
	"force" : 220,
        "dodge" : 15,
	"damage": 40,
	"lvl" : 36,
	"skill_name" : "ˮ��ͨ����",
	"damage_type":	"����"
]),
([	"action":"$N����$wбָ���죬��â���£�һʽ������������������׼$n��$lбб����",
	"force" : 260,
        "dodge" : 5,
	"damage": 45,
	"lvl" : 44,
	"skill_name" : "����������",
	"damage_type":	"����"
]),
([	"action":"$N��ָ�����㣬����$w�Ƴ�����ѩ����â��һʽ��ǧ��һέȥ������$n��$l",
	"force" : 320,
        "dodge" : 5,
	"damage": 55,
	"lvl" : 52,
	"skill_name" : "ǧ��һέȥ",
	"damage_type":	"����"
]),
([	"action":"$N���Ƶ�����һʽ�����Ķ���������$w�Ի���Ծ�����缲�������$n���ؿ�",
	"force" : 380,
        "dodge" : 5,
	"damage": 60,
	"lvl" : 60,
	"skill_name" : "���Ķ�����",
	"damage_type":	"����"
]),
});

int valid_enable(string usage) { return usage == "sword" || usage == "parry"; }


int valid_learn(object me)
{
	if(me->query("max_force")<150)
		return notify_fail("�������������\n");
	if ((int)me->query_skill("tianlong-force", 1) < 20)
		return notify_fail("��������ķ����̫ǳ��\n");
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
	return action[random(sizeof(action))];
}

int practice_skill(object me)
{
	object weapon;

	if (!objectp(weapon = me->query_temp("weapon"))
	|| (string)weapon->query("skill_type") != "sword")
		return notify_fail("��ʹ�õ��������ԡ�\n");
	if(me->query("kee")<50)
		return notify_fail("�����������������������\n");
	me->receive_damage("kee",25);
	return 1;
}
