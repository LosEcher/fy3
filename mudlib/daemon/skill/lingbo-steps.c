// lingbo-steps.c 
// written by xzz

inherit SKILL;

string *dodge_msg = ({
        "$n下身不动，上身轻侧已经藉一招「静若处子」轻轻闪过。\n",
        "$n你左足一退右足一分，一招「若有若无」已避了开去。\n",
        "$n一招「微尘不惊」，$N只觉眼前一花，不见了$n的身影。\n",
        "$n一招「动若脱兔」，身形微晃，以匪夷所思的角度避开了$N这一招。\n",
        "但是$n一招「瞻忽在后」使出竟然绕到$N身後！\n",     
        "却见$n一招「凌波仙子」，冲天而起，一波三折，端是美观。\n",        
        "可是$n使一招「姑射仙人」身子象轻纱一样飘了开去。\n",
});

int valid_enable(string usage) { return (usage == "dodge");}

int valid_learn(object me) { return 1; }
string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
        if( (int)me->query("kee")<40)
                return notify_fail("你的体力太差了，不能练凌波微步\n");
        me->receive_damage("kee",30);
        return 1;
}
int power_point()       {       return 2;       }
int hard_point()        {       return 3;       }

