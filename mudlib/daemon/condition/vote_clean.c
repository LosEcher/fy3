// rose_poison.c

#include <ansi.h>

int update_condition(object me, int duration)
{
	if (duration < 1) {
		if (duration > -5)
		{
		message("channel:chat",HIC"�����ġ���Ϊ��Ӧ���˲��࣬��"+
		me->query("name")+"��ͶƱȡ���ˡ�\n"NOR,users());
		me->delete("open_chat");
		me->delete("close_chat");
		}
		return 0;
	}
	
	me->apply_condition("vote_clean", duration - 1);
	return 1;
}
