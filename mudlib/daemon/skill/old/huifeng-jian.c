// �ط������

inherit SKILL;
#include <ansi.h>
mapping *action = ({
([      "action" : "$Nһʽ�����Ϯ�¡�������ƽָ��������磬һ���ǳ��͹�$n��С����",
        "force" : 160,
        "dodge" : 20,
        "parry" : 5,
        "damage" : 25,
        "lvl" : 0,
        "damage_type" : "����"
]),
([      "action" : "$N��ǰԾ��һ�������ֽ���������$wʹ��һʽ��Ʈѩ���ơ�ֱ��$n��ǰ�أ�",
        "force" : 220,
        "dodge" : 15,
        "parry" : 5,
        "damage" : 30,
        "lvl" : 10,
        "damage_type" : "����"
]),
([      "action" : "$N����$wбָ���죬һʽ��ǧ�徺�㡹���������������⣬����$n���ҽ�",
        "force" : 250,
        "dodge" : 15,
        "parry" : 5,
        "damage" : 40,
        "lvl" : 20,
        "damage_type" : "����"
]),
([      "action" : "$Nһʽ���������ڡ���$w���϶��»�������һ���󻡣�ͻȻ������$n�̳���",
        "force" : 300,
        "dodge" : 10,
        "parry" : 5,
        "damage" : 50,
        "lvl" : 30,
        "damage_type" : "����"
]),
([      "action" : "$N����š����һʽ��������������$w����ƽ��������$n���ظ�ҪѨ��",
        "force" : 330,
        "parry" : 5,
        "dodge" : 10,
        "damage" : 60,
        "lvl" : 40,
        "damage_type" : "����"
]),
([      "action" : "$Nһʽ��������ɳ����ȫ������ƽ�ɣ�����һ����������$n���ұۣ�",
        "force" : 380,
        "dodge" : 10,
        "parry" : 10,
        "damage" : 70,
        "lvl" : 50,
        "damage_type" : "����"
]),
([      "action" : "$Nʩ�����������Ρ���$w���ַɳ����������㰿������ƿ�����$n����磡",
        "force" : 440,
        "dodge" : 20,
        "parry" : 15,
        "damage" : 85,
        "lvl" : 65,
        "damage_type" : "����"
]),
([      "action" : "$N��Хһ����һʽ����غ��衹���ڿշ���ȫ��ų�������ѩ����â����ҫ��ʣ�",
        "force" : 500,
        "dodge" : 20,
        "parry" : 25,
        "damage" : 90,
        "lvl" : 80,
        "damage_type" : "����"
]),
});
int valid_enable(string usage) { return (usage == "sword") || (usage == "parry"); }
int valid_learn(object me)
{
        if ((int)me->query("max_force") < 100)
                return notify_fail("�������������\n");
        if ((int)me->query_skill("emei-xinfa", 1) < 20)
                return notify_fail("��Ķ�ü�ķ����̫ǳ��\n");
        if ((int)me->query_skill("parry", 1) < 10)
                return notify_fail("��Ļ����мܻ��̫ǳ��\n");
        return 1;
}


mapping query_action(object me,object target)
{
       
        int i, level;
        level   = (int) me->query_skill("huifeng-jian",1);
        for(i = sizeof(action); i > 0; i--)
                if(level > action[i-1]["lvl"])
        return action[random(sizeof(action))];

}
int practice_skill(object me)
{
        object weapon;

        if (!objectp(weapon = me->query_temp("weapon"))
        || (string)weapon->query("skill_type") != "sword")
                return notify_fail("��ʹ�õ��������ԡ�\n");
        if ((int)me->query("kee") < 20)
                return notify_fail("��������������ط��������\n");
        me->receive_damage("kee", 20);
        if ((int)me->query("force") < 20)
                return notify_fail("��������������ط��������\n");
        me->receive_damage("force",5);
        return 1;
}
           
string perform_action_file(string action)
{
        return __DIR__"huifeng-jian/" + action;
}
