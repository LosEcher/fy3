// damo-jian.c 达摩剑

inherit SKILL;

mapping *action = ({
([	"action":"$N使一式「万事随缘往」，手中$w嗡嗡微振，幻成一条疾光刺向$n的$l",
	"damage":100,
	"damage_type":	"刺伤"
]),
([	"action":"$N错步上前，使出「来去若梦行」，剑意若有若无，$w淡淡地向$n的$l挥去",
	"damage":140,
	"damage_type":	"割伤"
]),
([	"action":"$N一式「浮世沧桑远」，纵身飘开数尺，运发剑气，手中$w遥摇指向$n的$l",
	"damage":180,
	"damage_type":	"割伤"
]),
([	"action":"$N纵身轻轻跃起，一式「轮回法舟轻」，剑光如轮疾转，霍霍斩向$n的$l",
	"damage":220,
	"damage_type":	"割伤"
]),
([	"action":"$N手中$w中宫直进，一式「水月通禅寂」，无声无息地对准$n的$l刺出一剑",
	"damage":260,
	"damage_type":	"刺伤"
]),
([	"action":"$N手中$w斜指苍天，剑芒吞吐，一式「鱼龙听梵音」，对准$n的$l斜斜击出",
	"damage":300,
	"damage_type":	"刺伤"
]),
([	"action":"$N左指凌空虚点，右手$w逼出丈许雪亮剑芒，一式「千里一苇去」刺向$n的$l",
	"damage":340,
	"damage_type":	"刺伤"
]),
([	"action":"$N合掌跌坐，一式「禅心顿自明」，$w自怀中跃出，如疾电般射向$n的胸口",
	"damage":380,
	"damage_type":	"刺伤"
]),
});

int valid_enable(string usage) { return usage == "sword" || usage == "parry"; }


int valid_learn(object me)
{
	if ((int)me->query("max_force") < 100)
		return notify_fail("你的内力不够。\n");
	if ((int)me->query_skill("hunyuan-yiqi", 1) < 20)
		return notify_fail("你的混元一气功火候太浅。\n");
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
	|| (string)weapon->query("skill_type") != "sword")
		return notify_fail("你使用的武器不对。\n");
	if ((int)me->query("kee") < 30)
		return notify_fail("你的体力不够练达摩剑。\n");
	me->receive_damage("kee", 10);
	return 1;
}
string perform_action_file(string action)
{
	return __DIR__"damo-jian/" + action;
}
