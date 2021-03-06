inherit SKILL;

mapping *action = ({
([	"action":"$N暴喝一声，眶龇欲裂，手中$w狂野挥出，正是一式[血战千里].",
	"damage":100,
	"damage_type":	"刺伤"
]),
([	"action":"$N脚下玄奥地连踏几步，使出[怒挥北斗]，手中$w横扫$n的$l",
	"damage":140,
	"damage_type":	"刺伤"
]),
([	"action":"$N双腿微蹲,使出一式「干戈刺天」，手中$w遥摇指向$n的头部",
	"damage":180,
	"damage_type":	"刺伤"
]),
([	"action":"$N纵身跃起，一式「尸横遍野」，手中$w带起一团啸声挥向$n",
	"damage":220,
	"damage_type":	"刺伤"
]),
([	"action":"$N手中$w中宫直进，一式「直捣黄龙」，对准$n的胸口刺出",
	"damage":260,
	"damage_type":	"刺伤"
]),
([	"action":"$N手中$w一式「拔山举鼎」，对准$n的$l自下而上猛挑。",
	"damage":300,
	"damage_type":	"刺伤"
]),
([	"action":"$N手中$w幻起一团白芒，一式「破釜沉舟」，脱手飞刺$n胸口。",
	"damage":340,
	"damage_type":	"刺伤"
]),
([	"action":"$N一式「玉石俱焚」，飞跃至$n身后，手中$w如疾电刺向自己胸口。",
	"damage":380,
	"damage_type":	"刺伤"
]),
});

int valid_enable(string usage) { return usage == "spear" || usage == "parry"; }


mapping query_action(object me, object weapon)
{
    return action[random(sizeof(action))];
}