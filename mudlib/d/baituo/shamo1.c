//gebi
#include <ansi.h>
inherit ROOM;

void create()
{
	set("short","ɳĮ");
	set("long",@LONG
һ���޼ʵĴ�ɳĮ�����˹�������ĺ����ƺ�Ҫð���ˡ�
LONG
	);
	set("outdoors", "baituo");
	set("exits", ([
		"west":__DIR__"gebi",
		"east":__DIR__"lvzhou",
	]));
	setup();
}

int valid_leave(object me,string dir)
{
	int max;
	max=10-me->query_skill("dodge",1)/10;
	if(max<=0)	max=1;
	if((int)me->query_temp("have_gone")>=max)	{
		write(HIC"�㾫ƣ���ߣ������߳���ɳĮ��\n"NOR);
		me->delete_temp("have_gone");
		return ::valid_leave(me,dir);
	}
	if(! intp(me->query_temp("have_gone")))
		me->set_temp("have_gone",1);
	me->add_temp("have_gone",1);
	me->add("water",-40);
	if(me->query("water")<0)	me->set("water",0);
	me->add("food",-20);
	if(me->query("food")<0)		me->set("food",0);
	return notify_fail(HIR"��ɤ��������ʹ���ƺ�Ҫ�������ˣ�\n"NOR);
}
