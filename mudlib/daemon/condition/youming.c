#include <ansi.h>
#include <condition.h>

inherit F_CLEAN_UP;

int update_condition(object me, int duration)
{
me->receive_damage("gin",10);
me->receive_wound("sen",10);

        me->apply_condition("youming", duration - 1);

        tell_object(me,RED"���е�[Ѫ��ӡ]�ƶ������ˣ�\n" NOR );
    message_vision("$N����һ�����,���罬��,�����ӹ�һ��"+RED+"��"+NOR+"��.\n",me);
        if( duration < 1 ) return 0;
        return CND_CONTINUE;
}
