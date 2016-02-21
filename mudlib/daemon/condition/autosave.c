// autosave.c

#include <condition.h>
#include <ansi.h>

int update_condition(object me, int duration)
{
	if (duration == 1)
	{
		tell_object(me, HIG"【存盘】您的档案已经自动存盘。\n"NOR);
//		tell_object(me, HIR"【系统】今天十一月三日，随时可能停电。请谅解。\n"NOR);
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
