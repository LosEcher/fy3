#include <ansi.h>

inherit SSERVER;

int perform(object me, object target)
{
        string msg;

        if( !target ) target = offensive_target(me);
        if( !target
        ||      !target->is_character()
        ||      !me->is_fighting(target) )
                return notify_fail("���⼼��ֻ�ܶ�ս���еĶ���ʹ�á�\n");

        if( target->is_busy() )
                return notify_fail(target->name() + "��û�дӾ�����������\n");

        if(me->query_skill("wave_steps") < 45 && me->query("force")<80){
                return notify_fail("��Ȼ����书��򲻹�!\n");}
        if( (int)me->query("gin") < 50 )
                return notify_fail("��ľ����ܼ��У��Ҳ�׼��λ��\n");
        msg = HIW "$Nʹ���ˡ�����仨�꡹,��̤���ŷ�λ������ת���ټ�ƮȻ������������ĥ.\n";
        me->add("force",-80);
        me->start_busy(1);
        if( random(me->query("combat_exp")) > random(target->query("combat_exp")) ) {
                msg += "$p��ȻʧȴĿ�겻�����, $P�����Ƶ�$p�����\n" NOR;
                
                target->start_busy( (int)me->query_skill("tianfeng-xuan",1) / 100);
        } else {
                msg += "$p΢΢һ���������򾲹�����һ��������$P׷Ϯ��ȥ.\n" NOR;
                target->start_busy(1);
        }
        message_vision(msg, me, target);

        return 1;
}

