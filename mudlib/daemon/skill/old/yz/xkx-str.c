//    赵客缦胡缨，吴钩霜雪明。银鞍照白马，飒沓如流星。    
//    飒沓如流星，千里不留行。事了拂衣去，深藏身与名。
//    闲过信陵饮，脱剑膝前横。将炙啖朱亥，持觞劝侯赢。
//    三杯吐然诺，五狱倒为轻。眼花耳热后，意气素霓生。
//    救赵挥金锤，邯郸先震惊。千秋二壮士，煊赫大梁城。
//    纵死侠骨香，下惭世上英。谁能书阁下，白首太玄经。

// xkx-str.c
// 侠客行
// made by yaorong 97/7/23

inherit SKILL;

mapping *action = ({
        ([      "action":               "$N使出一招「赵客缦胡缨」，腾身半空，双手一合，击向$n的$l",
		"dodge":		30,
		"parry":		20,
                "force":                50,
		"damage_type":	"瘀伤"
	]),
        ([      "action":               "$N使出「吴钩霜雪明」，突然间双手象钩子一般，击在$n的$l上",
		"dodge":		30,
		"parry":		30,
                "force":                50,
		"damage_type":	"瘀伤"
	]),
        ([      "action":               "$N吐气扬声，使出「银鞍照白马」，双手带起无数雷鸣同时向$n的全身攻击",
		"dodge":		-20,
		"parry":		30,
                "force":                70,
		"damage_type":	"瘀伤"
	]),
        ([      "action":               "$N大喝一声，一招「飒沓如流星」，双拳带起连绵不断的气浪滚向$n的$l",
		"dodge":		-10,
		"parry":		30,
                "force":                70,
		"damage_type":	"瘀伤"
	]),
        ([      "action":               "$N突然使一招「十步杀一人」，双眼狠狠的瞪住$n,双手同时拍向$n的$l",
		"dodge":		50,
		"parry":		50,
                "force":                70,
		"damage_type":	"瘀伤"
	]),
        ([      "action":               "$N双手一错，一招「脱剑膝前横」对准$n的$l连续拍出三掌",
                "dodge":                30,
                "parry":                30,
                "force":                70,
		"damage_type":	"瘀伤"
	]),
        ([      "action":               "$N使出一招「将炙啖朱亥」，全身化作一道雷电从半空中全力击向$n",
		"dodge":		75,
		"parry":		20,
                "force":                80,
		"damage_type":	"瘀伤"
	]),
        ([      "action":               "$N神色凝重，双足运功深陷入地，双手施全力使出「救赵挥金锤」，天地为之变色",
		"dodge":		-55,
		"parry":		-30,
                "force":                100,
		"damage_type":	"瘀伤"
	]),
});

string *interattack = ({
        "$N双手拢起，伺机而动。\n",
});


string query_interattack(object me, object target)
{
	return interattack[random(sizeof(interattack))];
}

mapping query_action(object me, object weapon)
{
	return action[random(sizeof(action))];
}

int valid_enable(string usage) 
{ 
     return (usage=="unarmed") || (usage=="parry");
}

int valid_learn(object me)
{
 mapping weapons;
 if ( mapp(weapons = me->query_temp("weapon")) && sizeof(weapons) )
                return notify_fail("练侠客行必须空手。\n");
        if( (int)me->query_skill("force", 1) < 20 )
                return notify_fail("你的基本内功火候不足，无法练侠客行。\n");
	return 1;
}

int practice_skill(object me)
{
	if( (int)me->query("kee") < 30 )
		return notify_fail("你的体力不够了，休息一下再练吧。\n");
	if( (int)me->query("sen") < 20 )
		return notify_fail("你的元神不济了，休息一下再练吧。\n");

	me->receive_damage("kee", 10);
	me->receive_damage("sen", 10);
        write("你按着所学练了一遍侠客行。\n");
	return 1;
}
