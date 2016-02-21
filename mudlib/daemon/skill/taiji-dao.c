// taiji-dao.c ̫����
// cleansword 2/15/96
#include <ansi.h>
inherit SKILL;

mapping *action = ({
([	"action" : "$N����$wбָ��һ�С�ͣ����·��������һ�٣�һ����$n��$l��ȥ",
	"damage":130,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С�ͯ�ӹһ�������������㣬$wһ��һ�գ�ƽ�л���$n�ľ���",
	"damage":140,
	"damage_type" : "����"
]),
([	"action" : "$Nչ���鲽������Ծ�䣬һ�С��ƴ����¡�������һ������ն��$n",
	"damage":150,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С����ż�ɽ����$w�󿪴��أ����϶��»���һ���󻡣���ֱ����$n",
	"damage":160,
	"damage_type" : "����"
]),
([	"action" : "$N����$wһ����һ�С���Ϫ���㡹��˫�ֳ����������У�����$n���ؿ�",
	"damage":170,
	"damage_type" : "����"
]),
([	"action" : "$N����$w��ʹ��һ�С��Ź����ġ����������ã����ҿ�����������$n",
	"damage":180,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С��������ۡ������Ծ����أ�$w˳����ǰ��Ю��������$n��$l",
	"damage":190,
	"damage_type" : "����"
]),
([	"action" : "$N����פ�أ�һ�С�������Ϣ�����ӳ�һƬ�����ĵ�Ӱ����$n��ȫ��ӿȥ",
	"damage":200,
	"damage_type" : "����"
]),
});


int valid_enable(string usage) { return (usage == "blade") || (usage == "parry"); }

int valid_learn(object me)
{
	if ((int)me->query("max_force") < 100)
		return notify_fail("�������������\n");
	if ((int)me->query_skill("taiji-shengong", 1) < 20)
		return notify_fail("���̫���񹦻��̫ǳ��\n");
	if ((int)me->query_skill("taiji-quan", 1) < 20)
		return notify_fail("���̫��ȭ���̫ǳ��\n");
	return 1;
}

mapping query_action(object me, object weapon)
{
	return action[random(sizeof(action))];
}

int practice_skill(object me)
{
	object weapon;

	if (!objectp(weapon = me->query_temp("weapon"))
	|| (string)weapon->query("skill_type") != "blade")
		return notify_fail("��ʹ�õ��������ԡ�\n");
	if ((int)me->query("kee") < 50)
		return notify_fail("�������������̫��������\n");
	me->receive_damage("kee", 30);
	return 1;
}

string perform_action_file(string action)
{
return "/daemon/class/wudang/taiji-dao/" + action;
}

int power_point()	{	return 1.5;	}
int hard_point()	{	return 2;	}

/*
int parry_action(object me,object target,object target_weapon,int attack_type,mapping action,string limb)
{
	string msg;
	int pp,ap;
	object weapon;
	if( !living(me))	return 0;
	if( !(int)me->query_temp("pfm_tjd"))	return 0;
	weapon=me->query_temp("weapon");
	if( !objectp(weapon) || weapon->query("skill_type")!="blade")
		return 0;
	if( !me->query_skill_mapped("parry") ||
		me->query_skill_mapped("parry")!="taiji-dao")
		return 0;
	if(target_weapon)	ap=target->query_skill(target_weapon->query("skill_type"));
	else	ap=target->query_skill("unarmed");
	pp=me->query_skill("parry");
	if( random(pp)>ap/10)	{
	msg="\n"+action["action"]+"\n";
	msg+=HIW"$n����"+weapon->query("name")+HIW"����һ���ԲȦ�����಻������$N����������������\n"NOR;
	if(target_weapon)
	msg=replace_string(msg,"$w",target_weapon->query("name"));
	msg=replace_string(msg,"$l",limb);
	message_combat(msg,target,me);
	target->start_busy(random(2)+1);
	return 1;
	}
	else return 0;
}

*/
