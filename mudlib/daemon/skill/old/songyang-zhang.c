// songshan-sword.c
// Modified by Java Sep.1998
#include <ansi.h>

inherit SKILL;

mapping *action = ({
([      "name":    "���ػ���",
        "action":  "$N���ֵ���һ����������ָ����,��$n��ȥ",
        "force":    50,
        "damage":  50,
        "damage_type":  "����"
]),
([      "name":    "�ƶ�Ǭ��",
        "action":  "$N���ֳ�����,��������,����һ��,�Ȼ����,����Ǭ����һ",
        "force":   70,
        "damage":  80,
        "damage_type":  "����"
]),
([      "name":    "�������",
        "action":  "$NĴָ,Сָ���,˫�ƻ���֮ʱ,���»���,ɲ�Ǽ��ѽ�������,
        ֻ����Ӱ��ɽ,��$n���ؿڳ�ȥ",
        "force":   70,
        "damage":  100,
        "damage_type":  "����"
]),
([      "name":    "��������",
        "action":  "$N˫���������,����ʮָ�ε�ɢ��,˫��Բת����,
        ֻ��һȦ��Ӱ������ָӰ��$n��ȥ",
        "force":   80,
        "damage":  120,
        "damage_type":  "����"
]),
([      "name":    "��������",
        "action":  "$N��������һ�֣�������ɲ�Ǽ���������ɱ��,������������һ��",
        "dodge":   90,
        "damage":  140,
        "damage_type":  "����"
]),
([      "name":    "ǧ���ѩ",
        "action":  "$N˫��һ���ȷ�,����������������",
        "dodge":   100,
        "damage":  160,
        "damage_type":  "����"
]),
([      "name":    "�������",
        "action":  "$Nʹ���������,˫���ڻ���֮ʱ����һ��,��Ե���޶˽���
        һ�㺮��,˫���Ƴ�֮ʱ,��������,���г���һ������",
        "dodge":   120,
        "damage":  180,
        "damage_type":  "����"
]),
});

int valid_learn(object me)
{
    object ob;
    if( (int)me->query("max_force") < 50 )
        return notify_fail("�������������û�а취���������ơ�\n");
    if(ob = me->query_temp("weapon")
        return notify_fail("���������Ʊ�����֡�\n");

    return 1;
}

int valid_enable(string usage)
{
    return usage=="unarmed" || usage=="parry";
}

mapping query_action(object me, object weapon)
{
    return action[random(sizeof(action))];
}

int practice_skill(object me)
{
    if( (int)me->query("kee") < 30
    ||      (int)me->query("force") < 5 )
        return notify_fail("�����������������û�а취��ϰ�������ơ�\n");
    me->receive_damage("kee", 30);
    me->add("force", -5);
    write("�㰴����ѧ����һ��������ơ�\n");
    return 1;
}

int valid_effect(object me, object weapon, string name, int skill)
{
}

string perform_action_file(string action)
{
        return __DIR__"songyang-zhang/" + action;
}
