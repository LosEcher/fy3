// quanzhen-jian.c ȫ�潣��


inherit SKILL;

mapping *action = ({
([      "action":"$Nʹһʽ��̽��������������$w�������Һ�ɨ����$n��$l",
	"damage":50,
        "damage_type":  "����"
]),
([      "action":"$N̤��һ�������ɨҶ��������$w���������һ����������$n��$l",
	"damage":60,
        "damage_type":  "����"
]),
([      "action":"$N����$wһ����һ�С�˳ˮ���ۡ���ббһ�������ó�������$n��$l",
	"damage":70,
        "damage_type":  "����"
]),
([      "action":"$N����$w����������Ȧ��һʽ���ǳڵ�������һ���������$n��$l",
	"damage":80,
        "damage_type":  "����"
]),
([      "action":"$Nһʽ���׺����᡹��������չ������$w����$n��$l",
	"damage":90,
        "damage_type":  "����"
]),
([      "action":"$N����$wбָ���죬һʽ������Į��������׼$n��$lбб����",
	"damage":100,
        "damage_type":  "����"
]),
([      "action":"$Nһʽ�������仨�������󼱶�������������⣬����$n��$l",
	"damage":120,
        "damage_type":  "����"
]),
([      "action":"$Nһʽ����Ʒ��̨����$w��ն�������缲�������$n���ؿ�",
	"damage":140,
        "damage_type":  "����"
]),
([      "action":"$Nʹһʽ��������ء�������$w������$n���ؿڣ������ɵ�",
	"damage":160,
        "damage_type":  "����"
]),
([      "action":"$N����$w����һ�������Ļ��ߣ�����$n��$l��ȴ��һ�С���ʷ������",
	"damage":180,
        "damage_type":  "����"
]),
([      "action":"$N�ؽ����أ�ʹһʽ��������项���������$w��$n����",
	"damage":200,
        "damage_type":  "����"
]),
([      "action":"$N��������һʽ�������߶�����$w�Ӳ���˼��ĽǶȴ���$n",
	"damage":220,
        "damage_type":  "����"
]),
([      "action":"$Nһʽ���ϵ紩�ơ���$wͻȻ���������һƬ���Χ��$nȫ��",
	"damage":250,
        "damage_type":  "����"
])
});

int valid_enable(string usage) { return usage == "sword" || usage == "parry"; }
int valid_learn(object me) { return 1; }


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
	if((int)me->query("kee")<50)
                return notify_fail("�������������ȫ�潣����\n");
	me->receive_damage("kee",25);
        return 1;
}

string perform_action_file(string action)
{
        return __DIR__"quanzhen-jian/" + action;
}

int power_point()	{	return 1.5;	}
int hard_point()	{	return 2.5;	}

