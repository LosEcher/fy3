#include <ansi.h>
#include <condition.h>

inherit F_CLEAN_UP;

int update_condition(object me, int duration)
{
me->receive_damage("gin",10);
me->receive_wound("kee",13);
me->receive_wound("sen",12);

        me->apply_condition("shengsifu_poison", duration - 1);

    message_vision(HIW"$N������������Ť��������Ȼ�������������ˡ�\n"NOR,me);

        if( duration < 1 ) return 0;
        return CND_CONTINUE;
}
