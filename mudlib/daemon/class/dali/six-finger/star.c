//
// star.c  
// 十指流星剑
// 小岛编写(islet@wx.jsinfo.net)
// 1999年10月31日
//

#include <ansi.h>

inherit SSERVER;
int perform(object me, object target)
{
        object weapon;
        int damage;
        string msg;

        string classname;
        classname = me->query("family/family_name");
        if(classname!="大理段家")
                return notify_fail("你不是大理段家的弟子，怎么能使用六脉神剑。\n");

        if( !target ) target = offensive_target(me);

        if( !target || !target->is_character() || !me->is_fighting(target) )
                return notify_fail("「十指流星剑」只能对战斗中的对手使用。\n");

        if (me->query_temp("weapon")||me->query_temp("second_weapon"))
                return notify_fail("空手才能使用[十指流星剑].\n");
                
        if( (int)me->query_skill("six-finger", 1) < 100 )
                return notify_fail("你的六脉神剑不够娴熟，不会使用「十指流星剑」。\n");
                                
        if( (int)me->query_skill("yiyang-zhi", 1) < 100 )
                return notify_fail("你的一阳指不够娴熟，不会使用「十指流星剑」。\n");
                        
        if( (int)me->query("force", 1) < 500 )
                return notify_fail("你现在内力太弱，不能使用「十指流星剑」。\n");
                        
        msg = CYN"只见$N双手十指纷弹，六脉神剑六路剑法回转运使,\n此去彼来，凛冽的无形气剑如流星雨泻向$n。\n"NOR;

        if(random(me->query_skill("force")) >target->query_skill("force")/5)
        {
                target->start_busy((int)me->query_skill("six_finger")/40 +1);
                
                damage = 100+(int)me->query_skill("kurong-changong", 1);
                damage = damage +  (int)me->query_skill("yiyang-zhi", 1);
                damage = damage +  (int)me->query_skill("six-finger", 1);
                target->receive_damage("kee", damage);
                target->receive_wound("kee", damage/2);
                me->add("force", -500);
                msg += RED"一瞬间，几个血洞自$n身上出现，鲜血从中喷涌而出！！\n"NOR;
                me->start_busy(1);

        } else 
        {
                target->start_busy(1+random(2));
                msg += CYN"$n顿时手忙脚乱，狼狈不堪。\n"NOR;
                me->add("force", -500);
                me->start_busy(1);
        }
        message_vision(msg, me, target);

        return 1;
}

