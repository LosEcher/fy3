// snake_poison.c

#include <ansi.h>

int update_condition(object me)
{
	if(me->query("oldsix_flag/tongji")==0)	return 0;
	if(me->query("mud_age")-me->query("oldsix_flag/time2")>=1800)	{
	me->set("oldsix_flag/tongji",0);
	message("channel:rumor", YEL +"��ҥ�ԡ�"+ "ĳ�ˣ����ݹٸ�ȡ���˶�"+me->query("name")+"��ͨ����\n"NOR,users());
		return 0;
	}
	me->apply_condition("tongji_cancle");
	return 1;
}
