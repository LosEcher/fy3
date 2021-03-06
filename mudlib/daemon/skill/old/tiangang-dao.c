// tiangang-dao.c 天罡无敌刀
inherit SKILL;

mapping *action = ({
([      "action":"$N使出一招「一字平肩」，手中$w微微一振，幻出一道银光横扫$n的$l
",
        "force" : 150,
        "dodge" : -10,
        "damage": 30,
        "lvl" : 0,
        "skill_name" : "一字平肩",
        "damage_type":  "刺伤"
]),
([      "action":"$N一挺身跃至半空，一式「泰山压顶」，手中$w带着一溜光芒如流星般
射向$n的$l",
        "force" : 200,
        "dodge" : 10,
        "damage": 50,
        "lvl" : 27,
        "skill_name" : "泰山压顶",
        "damage_type":  "割伤"
]),
([      "action":"$N双腿一错，使出一式「直捣黄龙」，手中$w突然从左掖穿出，
如离弦之箭般射向$n的胸口",
        "force" : 300,
        "dodge" : 15,
        "damage": 80,
        "lvl" : 60,
        "skill_name" : "直捣黄龙",
        "damage_type":  "刺伤"
]),
([      "action":"$N双手一扬，一式「力劈华山」，手中$w带着一道光芒直向$n
的左肩斜劈下去",
        "force" : 400,
        "dodge" : 20,
        "damage": 100,
        "lvl" : 60,
        "skill_name" : "力劈华山",
        "damage_type":  "刺伤"
]),
([      "action":"$N双手一沉，一式「一柱擎天」，身体微仄，手中$w讯捷无比的
刺向$n小腹",
        "force" : 500,
        "dodge" : 20,
        "damage": 120,
        "lvl" : 60,
        "skill_name" : "一柱擎天",
        "damage_type":  "刺伤"
]),
});

int valid_enable(string usage) { return usage == "blade" || usage == "parry"; }

int valid_combine(string combo) { return combo=="xiuluo-dao"; }

int valid_learn(object me)
{
        if ((int)me->query("max_force") < 100)
                return notify_fail("你的内力不够。\n");
        if ((int)me->query_skill("haoran-force", 1) < 30)
                return notify_fail("你的浩然罡气火候太浅。\n");
        return 1;
}

string query_skill_name(int level)
{
        int i;
        for(i = sizeof(action)-1; i >= 0; i--)
                if(level >= action[i]["lvl"])
                        return action[i]["skill_name"];
}

mapping query_action(object me, object weapon)
{
        int i, level;
        level   = (int) me->query_skill("tiangang-dao",1);
        for(i = sizeof(action); i > 0; i--)
                if(level > action[i-1]["lvl"])
                        return action[random(sizeof(action))];
}

int practice_skill(object me)
{
        object weapon;

        if (!objectp(weapon = me->query_temp("weapon"))
        || (string)weapon->query("skill_type") != "blade")
                return notify_fail("你使用的武器不对。\n");
        if ((int)me->query("kee") < 50)
                return notify_fail("你的体力不够练天罡无敌刀。\n");
        me->receive_damage("kee", 10);
        return 1;
}
string perform_action_file(string action)
{
        return __DIR__"tiangang-dao/" + action;
}


