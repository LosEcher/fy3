#include <ansi.h>

//inherit SSERVER;

int conjure(object me, object target)
{
        if( !target || !target->is_character() )
                return notify_fail("��Ҫ��˭ʹ�ã�\n");
        if( target->is_corpse() )
                return notify_fail("�������ˣ�ֻ�л��˲��ܾ��ѡ�\n");
       if( living(target) ) 
              return notify_fail(target->name() + "û�л赹�\n");
        if( (int)me->query("gin") < 50 ) return notify_fail("��ľ���������\n");
        me->add("gin", -50);
        me->receive_damage("gin", 30);
        message_vision( MAG "$Nһ�ַ���$n��������ϣ�һ������$n�����ģ������۾��������� ...\n" NOR,
                me, target );
        if( random(me->query("max_gin")) > 100 )
                target->revive();
        else
                me->unconcious();
        if( me->is_fighting() )
                me->start_busy(3);
        return 1;
}
