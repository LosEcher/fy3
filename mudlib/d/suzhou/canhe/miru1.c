// Room: /d/suzhou/canhe/miru1.c

#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "�ܵ�");
	set("long", @LONG
�ܵ��������쳣������ǽ�����͵�΢���Ĺ���������ֱ����ŵķ�����
���ڳ���ˮ��������ʣ�Լ��ĽŲ����ˡ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"southdown" :__DIR__"miru2",
		"up" :__DIR__"houting",
]));
	set("objects",([
		__DIR__"npc/shashou":1,
]));
	set("no_clean_up", 0);

	setup();
}
int valid_leave(object me,string dir)
{
	if(dir=="up"&&me->query("id")=="sha shou")  {
	tell_room("/d/suzhou/canhe/houting",RED"�ܵ��ڴ���ɱ�ֵ����������\n"NOR);
	return 0;
	}
	return 1;
}
