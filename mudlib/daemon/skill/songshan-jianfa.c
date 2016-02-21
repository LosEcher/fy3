// songshan-sword.c
// Modified by Java Sep.1998
#include <ansi.h>

inherit SKILL;

mapping *action = ({
([
        "action":  "$N����$wһ�����ٽ���������������ʹһ�С��������ڡ�����
��ϵ���ڵ���ɽ����",
	"damage":50,
        "damage_type":  "����"
]),
([
        "action":  "$N����$wͻȻ�佣��һ�£�����һ���׺磬������ΰ������Ʈ�ݣ�
������ɽ�����ľ�Ҫ���ڣ�һ�С�ǧ����������$n$lֱ�̹���",
	"damage":80,
        "damage_type":  "����"
]),
([
        "action":  "$N����$wͻȻ�佣��һ�£�һ�С����両�࡯����һ����⣬��
׳�ۻ룬��$n$lֱ�̹���",
	"damage":110,
        "damage_type":  "����"
]),
([
        "action":  "$N����$w����һ�£�һ�С������ء��������࣬������ΰ����
$n$lֱ�̹���",
	"damage":140,
        "damage_type":  "����"
]),
([
        "action":  "$N��������һ�֣�����$w�����ӳ���ʹ������ɽ�ɽ��������ż�
ɽ��",
	"damage":170,
        "damage_type":  "����"
]),
([
        "action":  "$N����$w���϶��µ���$nֱ����ȥ��һ�С�������ɽ��������ʯ
���쾪�����ƣ�����ɽ����֮�������ӵ����쾡��",
	"damage":200,
        "damage_type":  "����"
]),
([
        "action":  "$N����$wˢ��һ��������Ҽ�����ȥ������һ����ɽ����
�ڽ���������������������$w�԰���к��������������ֱ����
������һ������һ��",
	"damage":220,
        "damage_type":  "����"
]),
});

int valid_learn(object me)
{
    object ob;
	if( (int)me->query("max_force")<50)
        return notify_fail("�������������û�а취����ɽ������\n");
    if( !(ob = me->query_temp("weapon"))
    ||      (string)ob->query("skill_type") != "sword" )
        return notify_fail("���������һ�ѽ�������������\n");

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
        return notify_fail("�����������������û�а취��ϰ��ɽ������\n");
	me->receive_damage("kee",30);
	me->add("force",-5);
    write("�㰴����ѧ����һ����ɽ������\n");
    return 1;
}


string perform_action_file(string action)
{
        return "/daemon/class/songshan/songshan-jianfa/" + action;
}

int power_point()	{	return 1.5;	}
int hard_point()	{	return 1.5;	}

