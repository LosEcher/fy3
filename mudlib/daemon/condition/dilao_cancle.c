// snake_poison.c

#include <ansi.h>

int update_condition(object me)
{
	if((me->query("mud_age"))-(me->query("dilao_flag/time"))>=300)
 { 
	me->set("dilao_flag/lao",0);
message_vision("����ָ��ָ$N��:��!������!��ʲô��,���Գ�ȥ��,����!\n",me);
return 0;
	}
me->apply_condition("dilao_cancle");
	return 1;
}
