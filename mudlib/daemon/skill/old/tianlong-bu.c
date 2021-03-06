inherit SKILL;

string *dodge_msg = ({
        "$n身随意转，倏地往一旁挪开了三尺，避过了这一招。\n",
        "$n展开轻功，如一溜烟般绕到了$N的身后不待回身，左一闪，右一趋，正
          传一圈，反转一圈，刷刷两招攻出。\n",
        "$n陡然间身形拔起，在空中急速盘旋，连转四个圈子，愈转愈高，
          又是一个转折，轻轻巧巧得落在数丈之外。 \n",
       "$n身子并未站直，竟不转身，便即反弹而出，犹如一溜轻烟，相隔十余丈间，                 便飘到了$N面前，$N被吓得抱头鼠窜。\n",
});

int valid_enable(string usage)
{
        return (usage == "dodge") || (usage == "move");
}

int valid_learn(object me) { return 1; }

string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
        if( (int)me->query("qi") < 40 )
                return notify_fail("你的体力太差了，不能练天龙步。\n");
        if (me->query_skill("tianlong-bu", 1) < 30)
                me->receive_damage("qi", 10);
        else if (me->query_skill("tianlong-bu", 1) < 60)
                me->receive_damage("qi", 20);
        else
                me->receive_damage("qi", 30);
        return 1;
}


//  98.6.7  chushuai
