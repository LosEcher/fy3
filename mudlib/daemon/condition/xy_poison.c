// xuanying_poison.c

#include <ansi.h>

int update_condition(object me, int duration)
{
	me->receive_wound("kee", 10);
	me->receive_damage("sen", 10);
	me->apply_condition("xy_poison", duration - 1);
    message_vision(BLU"$N�䲻�����˸���ս�����ݸ�����������������\n"NOR, this_player());
	tell_object(me, HIG "���е��������Ƶĺ��������ˣ�\n" NOR );
	if( duration < 1 ) return 0;
	return 1;
}
