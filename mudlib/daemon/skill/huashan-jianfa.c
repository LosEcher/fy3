// huashan-sword.c
// Modified by Venus Oct.1997
#include <ansi.h>

inherit SKILL;

mapping *action = ({
([
        "action":      "$Nʹһ�С��з����ǡ�������$w���Ⱪ������$n��$l��ȥ",
	"damage":	50,
        "damage_type":  "����"
]),
([
        "action":      "$N������ת��һ�С��ޱ���ľ������$n��$l",
	"damage":	80,
        "damage_type":  "����"
]),
([
        "action":      "$N�趯$w��һ�С����ڤڤ��Ю�������������$n��$l",
	"damage":	110,
        "damage_type":  "����"
]),
([
        "action":      "$N����$w����һ����������ƽɳ���㡹��$n��$l�̳�����",
	"damage":	140,
        "damage_type":  "����"
]),
([
        "action":      "$N����$w���Ⱪ����һ�С��������á���$n$l��ȥ",
	"damage":	170,
        "damage_type":  "����"
]),
([
        "action":      "$N����$w����һ���⻡��ֱָ$n$l��һ�С��׺���ա���������������ȥ",
	"damage":	200,
        "damage_type":  "����"
]),
});

int valid_learn(object me)
{
    object ob;
    return 1;
}

int valid_enable(string usage)
{
    return usage=="sword" || usage=="parry";
}

mapping query_action(object me, object weapon)
{
    return action[random(sizeof(action))];
}

int practice_skill(object me)
{
	if( (int)me->query("kee")<30
	||      (int)me->query("force")<5)
        return notify_fail("�����������������û�а취��ϰ��ɽ������\n")
;
	me->receive_damage("kee",30);
	me->add("force",-5);
    write("�㰴����ѧ����һ�黪ɽ������\n");
    return 1;
}

int valid_effect(object me, object weapon, string name, int skill)
{
}


string perform_action_file(string action)
{
return "/daemon/class/huashan/huashan-jianfa/" + action;
}
