// SKILL liuyang-zhang.c

#include <ansi.h>
inherit SKILL;

mapping *action = ({
([	"action" : "$Nһ�С������۽𡹣����Ƶ�������֮�ϣ�����$n",
	"damage":110,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С������ƶ���������ɫ���أ�˫����ƮƮ������$n",
	"damage":120,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С���б��·��ϼ������˫�ƻû�һƬ��Ӱ����$n�������ڡ�",
	"damage":130,
	"damage_type" : "����"
]),

([	"action" : "$Nһ�С���������������$n��$l��������",
	"damage":140,
    "damage_type" : "����"
]),
([	"action" : "$Nһ�С�����һ���ͽ��ѡ���ֻ��һƬ��Ӱ����$n",
	"damage":160,
	"damage_type" : "����"
]),

([	"action" : "$N˫��ƽ�ӣ�һ�С���ϼ���������$n",
	"damage":180,
            "damage_type" : "����"
]),
([	"action" : "$Nһ�С����ղγ��֡���ֻ��һƬ��Ӱ����$n",
	"damage":200,
	"damage_type" : "����"
]),

([	"action" : "$N������Σ�����һ�ǡ���ϼ��Ѧᡡ�����$n��ͷ��",
	"damage":220,
           "damage_type" : "����"
]),
([	"action" : "$Nʩ��������������������ֺ�ɨ$n��$l�����ֹ���$n���ؿ�",
	"damage":240,
            "damage_type" : "����"
]),
([	"action" : "$Nʩ���������������˫��ͬʱ����$n��$l",
	"damage":260,
    "damage_type" : "����"
])
});

int valid_enable(string usage) { return usage=="unarmed" || usage=="parry" ;}


int valid_learn(object me)
{
	if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
		return notify_fail("����ɽ�����Ʊ�����֡�\n");
	return 1;
}

mapping query_action(object me, object weapon)
{
	return action[random(sizeof(action))];
}

int practice_skill(object me)
{
	if((int)me->query("kee")<30)
		return notify_fail("�������̫���ˡ�\n");
	if((int)me->query("force")<20)
		return notify_fail("���������������ɽ�����ơ�\n");
	me->receive_damage("kee",25);
	me->add("force",-10);
	return 1;
}
string perform_action_file(string action)
{
	return __DIR__"liuyang-zhang/" + action;
}

int power_point()	{	return 1.75;	}
int hard_point()	{	return 2;	}
