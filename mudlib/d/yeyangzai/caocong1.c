// Room: /d/yeyangzai/caocong.c
#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "�ݴ�");
	set("long", @LONG
�����ǰ��˶�ߵ��Ӳݴԣ����������зֲ��嶫��������ֻ����������
�ˡ�
LONG
	);
	set("exits", ([ /* sizeof() == 4 */
	"east":__DIR__"nroad",
	"west":__DIR__"nroad",
	"south":__DIR__"nroad",
	"north":__DIR__"nroad",
]));
	set("outdoors", "Ұ��կ");
	set("no_clean_up", 0);

	setup();
}

int valid_leave(object me,string dir)
{
	if((int)me->query_temp("have_gone")>=6)	{
		write(HIC"�������߳����Ӳݴԣ�\n"NOR);
		me->delete_temp("have_gone");
		return 1;
	}
	if(! intp(me->query_temp("have_gone")))
		me->set_temp("have_gone",0);
	me->add_temp("have_gone",1);
	me->add("kee",-10);me->add("gin",-10);me->add("sen",-10);
	return notify_fail(HIR"�������ţ�ͻȻ��ʲô��������һ�£�\n"NOR);
}
