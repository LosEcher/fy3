//
// six-finger.c
// ������
// С����д(islet@wx.jsinfo.net)
// 1999��10��31��
//

inherit SKILL;

#include <ansi.h>

mapping *action = ({
([      "action" : "$N˫�ִ󿪴��أ�Ĵָ����һ�࣬һ��[���̽�],\n��ʯ���쾪���������֮��Ϯ��$n��",
          "force" : 120,
        "damage_type" : "�˺�",
          "damage" : 120,
]),
([      "action" : "$Nʳָ���죬һ��[������],�͵�һ����\nһ��������ָ�⼤�����������Ѹ�ٵ���$n��ȥ��",
          "force" : 130,
        "damage_type" : "�˺�",
          "damage" : 130,
]),
([      "action" : "$N��ָ������һ��[�г彣],�ھ��ԡ��г�Ѩ������������������죬����$n!",
          "force" : 140,
        "damage_type" : "�˺�",
          "damage" : 140,
]),
([      "action" : "$N��������������ָ�㴦��һ��[�س彣],�����ԡ��س塯Ѩ����ӿ����,ֱָ$n��",
          "force" : 150,
        "damage_type" : "�˺�",
          "damage" : 150,
]),
([      "action" : "$N����б��������һ��[�ٳ彣],����Сָ�����������������$nб����ȥ!",
          "force" : 160,
        "damage_type" : "�˺�",
          "damage" : 160,
]),
([      "action" : "$N����б��������һ��[����],����Сָ�������������ҵ���$nб����ȥ��",
          "force" : 170,
        "damage_type" : "�˺�",
          "damage" : 170,
]),
});

int valid_enable(string usage) 
{
        return (usage == "unarmed") || (usage == "parry");
}

int valid_learn(object me)
{
        if ((int)me->query("max_force") < 500)
                return notify_fail("�������������\n");
        if ((int)me->query_skill("yiyang-zhi", 1) < 80)
                return notify_fail("���[һ��ָ]���̫ǳ��\n");
        return 1;
}

mapping query_action(object me,object target)
{
        return action[random(sizeof(action))];
}

int practice_skill(object me)
{
        object weapon;

        if (me->query_temp("weapon")||me->query_temp("second_weapon"))
                return notify_fail("���ֲ����������񽣡�\n");
        if ((int)me->query("kee") < 30)
                return notify_fail("������������������񽣡�\n");
        if ((int)me->query("force") < 30)
                return notify_fail("������������������񽣡�\n");
        me->receive_damage("kee", 30);
        me->add("force",-10);
        return 1;
}

string perform_action_file(string action)
{
        return "/daemon/class/dali/six-finger/" + action;

}

int power_point()       {       return 2;    }
int hard_point()        {       return 3;    }

