//������

#include <ansi.h>

inherit SKILL;
mapping *action = ({
	([	"name":			"��������",
		"action":
"$Nʹһ�С������١�����������$w��$n��$l��ȥ",
		"dodge":		-10,
		"damage":	100,
		"force":	100,
		"damage_type":	"����"
	]),
	([	"name":			"���ǵ��",
		"action":
"$N����һת��һ�С������ǡ�$w�ó��ĵ㣬�Ӳ�ͬ����ɱ�$n��$l",
		"dodge":		-50,
		"damage":	110,
		"force":	100,
		"damage_type":	"����"
	]),
        ([      "name":                 "��������",
		"action":
"$N����΢�࣬һ�С�����ѥ������֪�Ӻδ��ɳ���$w��ֱ��$n��$l��ȥ",
                "dodge":                -50,
		"damage":		120,
		"force":		110,
                "damage_type":  "����"
        ]),
	([	"name":			"���糱ˮ",
		"action":
"$Nһ�С��Ӳ��项������$w������֮������$n��$l",
		"dodge":		-30,
		"damage":	130,
		"force":	110,
		"damage_type":	"����"
	]),
	([	"action":
"$N���θ߸�Ծ��һʽ����ɡ�$w�ӿ��е���$n��$l",
		"damage":	140,
		"force":	120,
		"damage_type":	"����",
	]),
	([	"action":
"$NͻȻ��������$w�����ǡ�˫�ʽ������$n��Ϣ֮��ֱ��$l����",
		"damage":	150,
		"force":	120,
		"damage_type":	"����",
	]),
	([	"action":
"$N����һ����ͻʹ�����⡹��ʽ��$w���ź�����������$n��$l����",
		"dodge":	-100,
		"damage":	200,
		"force":	150,
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


