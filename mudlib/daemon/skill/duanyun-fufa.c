// duanyun-fu.c 断云斧
// Modified by Venus Oct.1997

inherit SKILL;

mapping *action = ({
([  "action" : "$N蓦地腾空跃起，双手紧握$w，对准$n的头顶，自上而下地砍了下去，
只在半空中留下一团巨大的黑影",
	"damage":100,
    "damage_type" : "砍伤",
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
]),
([  "action" : "$N突然发一声喊，冲前两步，手中$w由下而上反撩$n下三路，$n见到
一道淡黄色的气影逼向自己，情知不妙，急忙招架",
	"damage":150,
    "damage_type" : "割伤",
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
]),
([  "action" : "$N忽然虎吼一声，闪身斜向左前方冲出一步，身体微晃，手中$w在空
中划出一道淡影，急速横扫$n的右肩，气势迫人",
	"damage":200,
    "damage_type" : "砍伤",
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
]),
([  "action" : "$N突然抽身向右滚倒，随即跳起，就在跳起的一瞬间，已单臂握着$w
砸向$n的左肋，出手既快且狠",
	"damage":250,
    "damage_type" : "砸伤",
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
]),
([  "action" : "$N双手横举$w，平扫$n前胸，招式未使老就已打住猝然变招，斧尖直
撞$n的小腹，",
	"damage":300,
	"damage_type":"内伤",
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
]),
([  "action" : "$N不急不缓地转身微蹲，$n见$N露出破绽，急忙抢攻，却突然发现$N
的身体已转过来，手中$w正迅猛地扫向自己的下盘",
	"damage":400,
    "damage_type" : "割伤",
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
]),
([  "action" : "$N身形微动，就在同一时间自上中下左右砍出五斧，$n见五把$w从不
同的方位砍向自己，一时间竟不知该如何招架",
	"damage":500,
    "damage_type" : "砍伤",
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
]),
([  "action" : "$N前脚猛地往地上一顿，大地也微微一震，接着举起斧头在头顶急转
数圈，$w就隐含风云之声平直而沉稳地袭向$n，$n无论向何处闪躲，
总看见斧尖离自己不到一尺，不由大惊失色",
    "damage": 600,
    "damage_type" : "砍伤",
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
])
});

int valid_enable(string usage) { return usage=="axe" ||  usage=="parry"; }      

int valid_learn(object me)
{
    if ((int)me->query_skill("force", 1) < 20)
   return notify_fail("你的内功心法火候不够，无法学断云斧。\n");
	if((int)me->query("max_force")<150)
   return notify_fail("你的内力太弱，无法练断云斧。\n");
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
    || (string)weapon->query("skill_type") != "axe")
	return notify_fail("你使用的武器不对。\n");
	if((int)me->query("kee")<50)
    return notify_fail("你的体力太低了。\n");
	if((int)me->query("force")<20)
   return notify_fail("你的内力不够练断云斧。\n");
	me->receive_damage("kee",35);
	me->add("force",-10);
return 1;
}
string perform_action_file(string action)
{
    return __DIR__"duanyun-fu/" + action;
}

