// songshan-sword.c
// Modified by Java Sep.1998
#include <ansi.h>

inherit SKILL;

mapping *action = ({
([
        "action":  "$N���ֵ���һ����������ָ����,��$n��ȥ",
	"damage":50,
        "damage_type":  "����"
]),
([
        "action":  "$N���ֳ�����,��������,����һ��,�Ȼ����,����Ǭ����һ",
        "damage":  80,
        "damage_type":  "����"
]),
([
        "action":  "$NĴָ,Сָ���,˫�ƻ���֮ʱ,���»���,ɲ�Ǽ��ѽ�������,
        ֻ����Ӱ��ɽ,��$n���ؿڳ�ȥ",
	"damage":110,
        "damage_type":  "����"
]),
([
        "action":  "$N˫���������,����ʮָ�ε�ɢ��,˫��Բת����,
        ֻ��һȦ��Ӱ������ָӰ��$n��ȥ",
	"damage":140,
        "damage_type":  "����"
]),
([
        "action":  "$N��������һ�֣�������ɲ�Ǽ���������ɱ��,������������һ��",
	"damage":170,
        "damage_type":  "����"
]),
([
        "action":  "$N˫��һ���ȷ�,����������������",
	"damage":200,
        "damage_type":  "����"
]),
([
        "action":  "$Nʹ���������,˫���ڻ���֮ʱ����һ��,��Ե���޶˽���
        һ�㺮��,˫���Ƴ�֮ʱ,��������,���г���һ������",
	"damage":220,
        "damage_type":  "����"
]),
});

int valid_learn(object me)
{
    object ob;
    if( (int)me->query("max_force") < 50 )
        return notify_fail("�������������û�а취���������ơ�\n");
	if(ob = me->query_temp("weapon"))
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
    write("�㰴����ѧ����һ����ɽ������\n");
    return 1;
}


string perform_action_file(string action)
{
        return __DIR__"songyang-zhang/" + action;
}
