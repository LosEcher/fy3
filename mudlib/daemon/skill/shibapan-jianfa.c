// taishan-sword.c
// Modified by Java Sep.1998
#include <ansi.h>

inherit SKILL;

mapping *action = ({
([
        "action":  "$N����$wбָ���£�������ָ������ָ��������һ�����壬�ն���ȭ����
��Ĵָ������ζ�ʳָ��������ָȫչ����������Ĵָ����ʳָ��������
ָ��Ȼ������$w���Ⱪ������$n��$l��ȥ",
	"damage":80,
        "damage_type":  "����"
]),
([
        "action":  "$N����$wһ�Σ����һ���������һ�С��������ơ���ת����������
��΢����$w��$nбб��ȥ",
	"damage":110,
        "damage_type":  "����"
]),
([
        "action":  "$N����$wȦת��һ�С������ա�ȥ���漲�������������$n��$l",
	"damage":140,
        "damage_type":  "����"
]),
([
        "action":  "$Nչ�����ƣ����潣�ߣ����һ�գ��ұ�һ�䣬ԽתԽ�����͵�
$w���Ⱪ����һ�С�̩ɽʮ���̡���$n$l��ȥ",
	"damage":170,
        "damage_type":  "����"
]),
([
        "action":  "$N����$wٿ�ش̳���һ���彣��ÿһ���Ľ��нԲ�Ȼ�й��⡣����
���ӣ��ڲ���䣬���ǡ����򽣡�",
	"damage":200,
        "damage_type":  "����"
]),
});

int valid_learn(object me)
{
    object ob;
	if( (int)me->query("max_force")<50)
        return notify_fail("�������������û�а취��̩ɽ������\n");
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
	if((int)me->query("kee")<30
	|| (int)me->query("force")<5)
        return notify_fail("�����������������û�а취��ϰ̩ɽ������\n");
	me->receive_damage("kee",30);
	me->add("force",-5);
    write("�㰴����ѧ����һ��̩ɽ������\n");
    return 1;
}


string perform_action_file(string action)
{
        return "/daemon/class/taishan/shibapan-jianfa/"+action;
}

   int power_point()       {       return 1.5;     }
   int hard_point()        {       return 2;       }

