// xiake-shengong.c
inherit FORCE;

mapping *action = ({
        ([      "action":
"$N使出一招「天罗地网」，一股至刚真气击向$n的$l",
                "force":                300,
        "dodge" : 0,
                "damage_type":  "内伤"
        ]),
        ([      "action" :
 "$N侧身一晃，一式「金玉瓦砾」，左手拿向$n的肩头，右拳打向$n的胸口",
        "force" : 500,
        "dodge" : 10,
        "damage_type" : "瘀伤"
]),
         ([      "action" : 
"$N使一式「猴子捞月」，左拳上格，右手探底突出，抓向$n的裆部",
        "force" : 800,
        "dodge" : 30,
        "damage_type" : "瘀伤"
]),
         ([      "action" :
 "$N双手抱拳，一式「飞花式」，掌影翻飞，同时向$n施出九九八十一招",
        "force" : 880,
        "dodge" : 40,
        "damage_type" : "内伤"
]),
        ([      "action":               
"$N右拳中宫直进，一式「旭日东升」对准$n的$l猛击一拳",
                "dodge":                -20,
                "force":                560,
                "damage_type":  "瘀伤"
        ]),
        ([      "action":
"$N使出一招「幽谷游魂」，一股至柔真气击向$n的$l",
                "force":                500,
        "dodge" : -5,
                "damage_type":  "内伤"
        ]),
        ([      "action":
"$N使出一招「石破天惊」，双掌缓缓前推，一股强烈的至阴真气击向$n的$l",
                 "force":                700,
        "dodge" : -10,
        "damage_type" : "瘀伤"
        ]),
        ([      "action":
"$N使出一招「游龙戏凤」，左手遮面，右手朝天，化作强大的罡气扑向$n的$l",
                "force":                1200,
        "dodge" : -15,
        "damage_type" : "瘀伤"
        ]),
});
mixed hit_ob(object me, object victim, int damage_bonus, int factor)
{
/*
        mixed foo;
        int force;

        foo = ::hit_ob(me, victim, damage_bonus, factor);
        if( intp(foo) && (damage_bonus + foo > 0) ) {
              if( random(4*(me->query_skill("xiake-shengong"))) > (damage_bonus ))
                 {
                        victim->receive_wound("kee", (damage_bonus + foo));
                        victim->receive_wound("gin", (damage_bonus + foo));
                        force = victim->query("force");
                        victim->set("force", 100);
                        me->add("force",force-random(10)-1);
                        return
"$N的侠客神功摧毁了$n的真元！！！！\n";
                }
        }
        return foo;
}
*/
}

int valid_enable(string usage) 
{ 
return
        usage=="unarmed" ||
        usage=="parry"||
        usage=="force";
}


int valid_learn(object me)
{
        int lvl = (int)me->query_skill("xiake-shengong", 1);
                            
        if ((int)me->query_skill("force", 1) < 100)
                return notify_fail("你的基本内功火候还不够，无法领会侠客神功。\n");
            if ( me->query_skill("xiuluo-force",1) )
             return notify_fail("阴和阳相生相克,你不先散了修罗阴刹功，怎能学侠客神功？！\n");
        return 1;
//}

if ((int)me->query("max_force") < 1000)
                return notify_fail("你的内力不够。\n");
     if ((int)me->query("combat_exp") < 1000000)
                return notify_fail("你的能力还没达到学侠客神功的地步。 \n");
        return 1;
}
int practice_skill(object me)
{
        return 
notify_fail("侠客神功只能用学的，或是从运用(exert)中增加熟练度。\\n");

}

int effective_level() { return 21; }

string *absorb_msg = ({
        "$n身体虚转，双手微划，无孔不入的侠客神功笼罩全身。\n",
        "$n身型微展，侠客神功有如铜墙铁壁。\n",
});

string query_absorb_msg()
{
        return absorb_msg[random(sizeof(absorb_msg))];
}
mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}
string *unarmed_parry_msg = ({
        "$n衣衫澎湃，内力汩汩，$N根本不可近身。\n",
        "$n长袖一甩，一股大力将$N送出丈外。\n",
        "$n施展出「日月无辉」，轻描淡写的化解了$N的攻势。\n",
});
string *parry_msg = ({
        "$n衣衫澎湃，内力汩汩，$N根本不可近身。\n",
        "$n长袖一甩，一股大力将$N送出丈外。\n",
        "$n施展出「侠客神功」，轻描淡写的化解了$N的攻势。\n",
});
string query_parry_msg(object weapon)
{
        if( weapon )
                return parry_msg[random(sizeof(parry_msg))];
        else
                return unarmed_parry_msg[random(sizeof(unarmed_parry_msg))];
}
string exert_function_file(string func)
{
        return __DIR__"xiake-shengong/" + func;
}
string perform_action_file(string action)
{
        return __DIR__"xiake-shengong/" + action;
}
int bounce_ratio()
{
        return 40;
}

int learn_bonus()
{
        return -100;
}
int practice_bonus()
{
        return -500;
}
int black_white_ness()
{
        return 200;
}
