// yunlong-bian.c 云龙鞭法

#include <ansi.h>

inherit SKILL;

mapping *action = ({
([	"action":		"$N单手一扬，一招「开天辟地」，手中$w抖得笔直，对准$n当头罩下",
	"damage":50,
	"damage_type":	"劈伤"
]),
([	"action":		"$N身形一转，一招「龙腾四海」，手中$w如矫龙般腾空一卷，猛地击向$n太阳穴",
	"damage":80,
	"damage_type":	"劈伤"
]),
([	"action":		"$N唰的一抖长鞭，一招「矫龙出水」，手中$w抖得笔直，刺向$n双眼",
	"damage":110,
	"damage_type":	"刺伤"
]),
([	"action":		"$N力贯鞭梢，一招「破云见日」，手中$w舞出满天鞭影，排山倒海般扫向$n全身",
	"damage":140,
	"damage_type":	"刺伤"
]),
([	"action":		"$N运气于腕，一招「开山裂石」，手中$w向一根铜棍般直击向$n",
	"damage":170,
	"damage_type":	"内伤"
]),
([	"action":		"$N单臂一挥，一招「玉带围腰」，手中$w直击向$n腰肋",
	"damage":200,
	"damage_type":	"内伤"
]),
([	"action":		"$N高高跃起，一招「大漠孤烟」，手中$w笔直向$n当头罩下",
	"damage":230,
	"damage_type":	"内伤"
])
});

int valid_enable(string usage) { return (usage == "whip") || (usage == "parry"); }

int valid_learn(object me)
{
	object weapon;

	if( (int)me->query("max_force") < 100)
		return notify_fail("你的内力不足，没有办法练云龙鞭法, 多练些内力再来吧。\n");

	if ((int)me->query_skill("force", 1) < 40)
		return notify_fail("你的基本内功火候太浅。\n");

	if ( !objectp(weapon = me->query_temp("weapon"))
	|| ( string)weapon->query("skill_type") != "whip" )
		return notify_fail("你必须先找一条鞭子才能练鞭法。\n");

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
	|| (string)weapon->query("skill_type") != "whip")
		return notify_fail("你使用的武器不对。\n");
	if ((int)me->query("kee") < 50)
		return notify_fail("你的体力不够练云龙鞭法。\n");
	me->receive_damage("kee",20);
	return 1;
}

string perform_action_file(string action)
{
	return __DIR__"yunlong-bian/" + action;
}

int power_point()	{	return 1.75;	}
int hard_point()	{	return 2.5;	}

