// �ط������

inherit SKILL;
#include <ansi.h>
mapping *action = ({
([      "action" : "$Nһʽ�����Ϯ�¡�������ƽָ��������磬һ���ǳ��͹�$n��С����",
	"damage":60,
        "damage_type" : "����"
]),
([      "action" : "$N��ǰԾ��һ�������ֽ���������$wʹ��һʽ��Ʈѩ���ơ�ֱ��$n��ǰ�أ�",
	"damage":80,
        "damage_type" : "����"
]),
([      "action" : "$N����$wбָ���죬һʽ��ǧ�徺�㡹���������������⣬����$n���ҽ�",
	"damage":100,
        "damage_type" : "����"
]),
([      "action" : "$Nһʽ���������ڡ���$w���϶��»�������һ���󻡣�ͻȻ������$n�̳���",
	"damage":120,
        "damage_type" : "����"
]),
([      "action" : "$N����š����һʽ��������������$w����ƽ��������$n���ظ�ҪѨ��",
	"damage":140,
        "damage_type" : "����"
]),
([      "action" : "$Nһʽ��������ɳ����ȫ������ƽ�ɣ�����һ����������$n���ұۣ�",
	"damage":160,
        "damage_type" : "����"
]),
([      "action" : "$Nʩ�����������Ρ���$w���ַɳ����������㰿������ƿ�����$n����磡",
	"damage":180,
        "damage_type" : "����"
]),
([      "action" : "$N��Хһ����һʽ����غ��衹���ڿշ���ȫ��ų�������ѩ����â����ҫ��ʣ�",
	"damage":200,
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
        return 1;
}


mapping query_action(object me,object target)
{
       
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
        if ((int)me->query("force") < 20)
                return notify_fail("��������������ط��������\n");
	me->receive_damage("kee", 20);
	me->add("force",-5);
        return 1;
}
           
string perform_action_file(string action)
{
        return "/daemon/class/emei/huifeng-jian/" + action;
}
