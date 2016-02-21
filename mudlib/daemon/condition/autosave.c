// autosave.c

#include <condition.h>
#include <ansi.h>

int update_condition(object me, int duration)
{
	if (duration == 1)
	{
		tell_object(me, HIG"�����̡����ĵ����Ѿ��Զ����̡�\n"NOR);
//		tell_object(me, HIR"��ϵͳ������ʮһ�����գ���ʱ����ͣ�硣���½⡣\n"NOR);
		me->save();
		me->apply_condition("autosave", duration + 1);
	}
	else
	{
		if (duration == 20)  me->apply_condition("autosave", 1);
		else me->apply_condition("autosave", duration + 1);
	}
	return CND_CONTINUE;
}
