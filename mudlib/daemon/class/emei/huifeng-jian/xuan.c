// xuan.c  ���־�

#include <ansi.h>

inherit SSERVER;
int perform(object me, object target)
{
        object weapon;
        int damage;
        string msg;

        if( !target ) target = offensive_target(me);

        if( !target || !target->is_character() || !me->is_fighting(target) )
                return notify_fail("�����־���ֻ�ܶ�ս���еĶ���ʹ�á�\n");

        if (!objectp(weapon = me->query_temp("weapon"))
        || (string)weapon->query("skill_type") != "sword")
                return notify_fail("��ʹ�õ��������ԡ�\n");
                
        if( (int)me->query_skill("huifeng-jian", 1) < 50 )
                return notify_fail("��Ļط��������������죬����ʹ�á����־�����\n");
                                
        if( (int)me->query_skill("emei-xinfa", 1) < 50 )
                return notify_fail("��Ķ�ü�ķ������ߣ��������������˵С�\n");
                        
        if( (int)me->query("force", 1) < 100 )
                return notify_fail("����������̫��������ʹ�á����־�����\n");
                        
        msg = CYN "$N΢΢һЦ������һ����,��ʹ������Ԧ����������$n��\n"NOR;
        if (random(me->query_skill("force")) > target->query_skill("force")/6 )
        {
                target->start_busy( (int)me->query_skill("huifeng-jian") / 30 + 1);
                
                damage = (int)me->query_skill("emei-xinfa", 1);
                damage = damage +  (int)me->query_skill("emei-xinfa", 1);
                damage = damage +  (int)me->query_skill("huifeng-jian", 1);
                target->receive_damage("kee", damage);
                target->receive_wound("kee", damage/2);
                me->add("force", -damage);
                msg += HIR"ֻ��$N���н����ڿն���,����$nԽ��Խ�죬Խ��ԽС,\nһ��ɷ��������Ϯ��$n,$n�ҽ�һ����ֻ���ظ���һȦ���ˣ���Ѫ���죡��\n"NOR;
                me->start_busy(1);
        } else 
        {
                msg += CYN"����$p�͵�����һ�ݣ�������$P�Ĺ�����Χ��\n"NOR;
                me->add("force", -100);
                me->start_busy(1);
        }
        message_vision(msg, me, target);

        return 1;
}


