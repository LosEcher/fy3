// qinna-shou.c  
// 大擒拿手

inherit SKILL;

mapping *action = ({
        ([      "action":               "$N使出一招「铁扫帚」左手轻舒腕掌，运
足真力贯注中食两指，扣向$n的双眼。\n",
                "dodge":                20,
                "parry":                20,
                "force":                25,
                "damage_type":  "瘀伤"
        ]),
        ([      "action":               "$N一招「千缘手」，右掌似攻实守，左
掌一穿向$n的$l切下。\n",
                "dodge":                10,
                "parry":                30,
                "force":                30,
                "damage_type":  "瘀伤"
        ]),
        ([      "action":               "$N使出「仙人指路」，左手一扬$n的面
门，有手衔尾而出，往前$n的背后，一掌拍下。\n",
                "dodge":                50,
                "parry":                -20,                                
                "force":                30,
                "damage_type":  "瘀伤"
        ]),
        ([      "action":               "$N突然大喝一声，使出一招「迅雷砸地」
，双掌一分，右手横掌如刃，猝向$n的$l划下。\n",
                "dodge":                20,
                "parry":                20,
                "force":                25,
                "damage_type":  "瘀伤"
       ]),
        ([      "action":               "$N一招「大摔碑手」，双手齐搭$n手
腕，用力将$n摔了出去。\n",
                "dodge":                10,
                "parry":                30,
                "force":                30,
                "damage_type":  "瘀伤"
        ]),
        ([      "action":               "$N身似螺转，猛旋脚步，双手一合使出
「金针落地」，不顾一切的向$n的胸前撞来。\n",
                "dodge":                50,
                "parry":                -20,
                "force":                20,
                "damage_type":  "瘀伤"
        ]),
});

int valid_learn(object me)
{
        object ob;

                if( (int)me->query_skill("xiantian-force", 1) < 20 )
             return notify_fail("你的先天气功火候不足，无法练大擒拿手。\n");

        if( (int)me->query("max_force") < 30 )
                return notify_fail("你的内力不够，没有办法练大擒拿手。\n");

        if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
                return notify_fail("练大擒拿手必须空手。\n");
        return 1;
}

int valid_enable(string usage)
{
        return usage=="unarmed" || usage=="parry";
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

int practice_skill(object me)
{
        if( (int)me->query("kee") < 30
        ||      (int)me->query("force") < 3 )
                return
notify_fail("你的内力或气不够，没有办法练习大擒拿手。\n");
        me->receive_damage("kee", 30);
        me->add("force", -3);
        write("你按著所学练了一遍大擒拿手。\n");
        return 1;
}

