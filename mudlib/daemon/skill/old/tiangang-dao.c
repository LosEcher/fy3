// tiangang-dao.c ����޵е�
inherit SKILL;

mapping *action = ({
([      "action":"$Nʹ��һ�С�һ��ƽ�硹������$w΢΢һ�񣬻ó�һ�������ɨ$n��$l
",
        "force" : 150,
        "dodge" : -10,
        "damage": 30,
        "lvl" : 0,
        "skill_name" : "һ��ƽ��",
        "damage_type":  "����"
]),
([      "action":"$Nһͦ��Ծ����գ�һʽ��̩ɽѹ����������$w����һ���â�����ǰ�
����$n��$l",
        "force" : 200,
        "dodge" : 10,
        "damage": 50,
        "lvl" : 27,
        "skill_name" : "̩ɽѹ��",
        "damage_type":  "����"
]),
([      "action":"$N˫��һ��ʹ��һʽ��ֱ��������������$wͻȻ����Ҵ������
������֮��������$n���ؿ�",
        "force" : 300,
        "dodge" : 15,
        "damage": 80,
        "lvl" : 60,
        "skill_name" : "ֱ������",
        "damage_type":  "����"
]),
([      "action":"$N˫��һ�һʽ��������ɽ��������$w����һ����âֱ��$n
�����б����ȥ",
        "force" : 400,
        "dodge" : 20,
        "damage": 100,
        "lvl" : 60,
        "skill_name" : "������ɽ",
        "damage_type":  "����"
]),
([      "action":"$N˫��һ����һʽ��һ�����졹������΢�ƣ�����$wѶ���ޱȵ�
����$nС��",
        "force" : 500,
        "dodge" : 20,
        "damage": 120,
        "lvl" : 60,
        "skill_name" : "һ������",
        "damage_type":  "����"
]),
});

int valid_enable(string usage) { return usage == "blade" || usage == "parry"; }

int valid_combine(string combo) { return combo=="xiuluo-dao"; }

int valid_learn(object me)
{
        if ((int)me->query("max_force") < 100)
                return notify_fail("�������������\n");
        if ((int)me->query_skill("haoran-force", 1) < 30)
                return notify_fail("��ĺ�Ȼ������̫ǳ��\n");
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
        level   = (int) me->query_skill("tiangang-dao",1);
        for(i = sizeof(action); i > 0; i--)
                if(level > action[i-1]["lvl"])
                        return action[random(sizeof(action))];
}

int practice_skill(object me)
{
        object weapon;

        if (!objectp(weapon = me->query_temp("weapon"))
        || (string)weapon->query("skill_type") != "blade")
                return notify_fail("��ʹ�õ��������ԡ�\n");
        if ((int)me->query("kee") < 50)
                return notify_fail("�����������������޵е���\n");
        me->receive_damage("kee", 10);
        return 1;
}
string perform_action_file(string action)
{
        return __DIR__"tiangang-dao/" + action;
}


