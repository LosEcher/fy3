//tianyu-qijian
#include <ansi.h>
#include <combat.h>
inherit SSERVER;
int perform(object me, object target)
{
        string msg;
        int extra;
        object weapon;
        extra = me->query_skill("tianyu-qijian",1);
        if ( extra < 80) return notify_fail("��������潣���������죡\n");
        if( !target ) target = offensive_target(me);
        if( !target
        ||      !target->is_character()
        ||      !me->is_fighting(target) )
                return notify_fail("����������ֻ�ܶ�ս���еĶ���ʹ�á�\n");
        if ((int)me->query("force")<150)
                return notify_fail("�������������\n"); 
        me->add("force",-150);
        weapon = me->query_temp("weapon");
        message_vision(HIM"$Nʹ�������潣�еľ��У��������ݣ�һ���������������е�"+weapon->name()+"�������$n������һ����\n\n" NOR,me,target);        
        if (random(me->query("combat_exp"))>(int)target->query("combat_exp")/2 ) 
        {
        COMBAT_D->do_attack(me,target, weapon); 
        message_vision(HIY"�ڶ�����\n" NOR,me,target);
        COMBAT_D->do_attack(me,target, weapon);
        message_vision(HIY"��������\n" NOR,me,target);
        COMBAT_D->do_attack(me,target, weapon);
        message_vision(HIY"���Ľ���\n" NOR,me,target);
        COMBAT_D->do_attack(me,target, weapon);
        message_vision(HIY"���彣��\n" NOR,me,target);
        COMBAT_D->do_attack(me,target, weapon);
        message_vision(HIY"���һ����\n" NOR,me,target);
        COMBAT_D->do_attack(me,target, weapon);
        
        
        message_vision(WHT"$N�������������$n�����˸���æ���ң�\n" NOR,me,target);
        me->start_busy(3);
        } else { 
                message_vision(HIC"����$n������$N����ʽ,�û�����������\n" NOR,me,target);
                me->start_busy(2);
        }        
        return 1;
}
