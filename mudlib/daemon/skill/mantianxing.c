//������

#include <ansi.h>

inherit SKILL;
mapping *action = ({
	([
		"action":
"$Nʹһ�С������١�����������$w��$n��$l��ȥ",
		"damage":	100,
		"damage_type":	"����"
	]),
	([
		"action":
"$N����һת��һ�С������ǡ�$w�ó��ĵ㣬�Ӳ�ͬ����ɱ�$n��$l",
		"damage":	120,
		"damage_type":	"����"
	]),
	([
		"action":
"$N����΢�࣬һ�С�����ѥ������֪�Ӻδ��ɳ���$w��ֱ��$n��$l��ȥ",
		"damage":	140,
                "damage_type":  "����"
        ]),
	([
		"action":
"$Nһ�С��Ӳ��项������$w������֮������$n��$l",
		"damage":	160,
		"damage_type":	"����"
	]),
	([	"action":
"$N���θ߸�Ծ��һʽ����ɡ�$w�ӿ��е���$n��$l",
		"damage":	180,
		"damage_type":	"����",
	]),
	([	"action":
"$NͻȻ��������$w�����ǡ�˫�ʽ������$n��Ϣ֮��ֱ��$l����",
		"damage":	200,
		"damage_type":	"����",
	]),
	([	"action":
"$N����һ����ͻʹ�����⡹��ʽ��$w���ź�����������$n��$l����",
		"damage":	250,
		"damage_type":	"����",
	]),
});

int valid_learn(object me)
{
    if(me->query_skill("xuantian-quan",1)<20)
        return notify_fail("��ġ�����ȭ����������졣\n");
    if(me->query_skill("xuantian-neigong",1)<20)
    return notify_fail("��ġ������ڹ�������������\n");
    if(me->query("max_force")<50)
    return notify_fail("���������Ϊ������\n");
	return 1;
}

int valid_enable(string usage)
{
	return usage=="throwing"||usage=="parry";
}

mapping query_action(object me, object weapon)
{
	return action[random(sizeof(action))];
}

int practice_skill(object me)
{
	object ob;
    if( !(ob = me->query_temp("weapon"))
    ||  (string)ob->query("skill_type") != "throwing" )
        return notify_fail("���������һ֧�ڲ�������\n");
	if( (int)me->query("kee") < 40)
	return notify_fail("�����������û�а취��ϰ��\n");
	me->receive_damage("kee", 40);
	return 1;
}

int power_point()	{	return 1.25;	}

