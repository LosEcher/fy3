#include <ansi.h>

int update_condition(object me, int duration)
{
        me->receive_wound("kee", 25);
        me->receive_damage("sen", 25);
        me->receive_damage("gin",25);
        me->apply_condition("qx_snake_poison", duration - 1);
        message_vision(BLU"$N�����巢������ɫ�����⣬��������ʹ����,Ť��ɹ�������.\n"NOR, this_player());
        tell_object(me, HIR "���е������߶������ˣ�\n" NOR );
        if( duration < 1 ) return 0;
        return 1;
}

