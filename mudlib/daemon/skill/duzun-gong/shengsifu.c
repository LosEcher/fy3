#include <ansi.h>
inherit SSERVER;
int exert(object me, object target)
{
        string msg;       
        if (me->query("family/family_name")!="���չ�")
                return notify_fail("�㲻�����չ��ĵ��ӣ�����ʹ����������\n");
        if (!target)target=offensive_target(me);
        if (!target||!target->is_character() || !me->is_fighting(target))
                return notify_fail("����������ֻ�ܶ�ս���еĶ���ʹ�á�\n");
        if ((int)me->query_skill("duzun-gong",1) <80)
                return notify_fail("��[Ψ�Ҷ���]���򻹲����ң�ʹ����������������\n");
        if ((int)me->query("force")<200)
                return notify_fail("�������������\n"); 
        message_vision(HIR"$N���ư����ڹ�����ת������ʹ�˳���ң�ɵľ�ѧ������������$n�����������!\n" NOR,me,target);      
        me->start_busy(2);
        me->add("force",-200);                
        if (random(me->query("combat_exp"))>(int)target->query("combat_exp")/3*2 ) {                                   
                target->start_busy(1);                    
COMBAT_D->do_attack(me,target);
COMBAT_D->do_attack(me,target);
COMBAT_D->do_attack(me,target);
                message_vision(HIC"$nֻ������Ϯ��,�������޴��ɶ㣬��$N���Ʒ����!\n"NOR,me,target);             
                target->apply_condition("shengsifu_poison",1+random(20));
                tell_object(target,HIB"�͵������ͷ��С������������΢΢һ������������һƬѩ����\n"NOR); 
        } else {        
                message_vision(HIC"����$n������$N����ʽ,��������㿪������������Ҳ���ų�һ���亹��\n"NOR,me,target);
                me->start_busy(3);
        }
        
        return 1;
}
