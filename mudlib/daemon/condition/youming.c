#include <ansi.h>
#include <condition.h>

inherit F_CLEAN_UP;

int update_condition(object me, int duration)
{
me->receive_damage("gin",10);
me->receive_wound("sen",10);

        me->apply_condition("youming", duration - 1);

        tell_object(me,RED"你中的[血手印]掌毒发作了！\n" NOR );
    message_vision("$N浑身一阵颤抖,汗如浆出,脸上掠过一道"+RED+"红"+NOR+"气.\n",me);
        if( duration < 1 ) return 0;
        return CND_CONTINUE;
}
