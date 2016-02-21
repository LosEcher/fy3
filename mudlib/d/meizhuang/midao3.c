// Room: /d/suzhou/meizhuang/midao1.c
#include <ansi.h>
inherit ROOM;
string status();
void create()
{
	set("short", "�ܵ�");
	set("long", @LONG
�ܵ��������쳣��ֻ��ǽ���ϵ���һյ�͵ƣ���������ɫ��â��Զ��
�����δ�δ��ˮ�����㲻�ɵĽ䱸����������һ��ʯ�š�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"down":__DIR__"midao4",
]));
	set("item_desc",([
	"ʯ��":	(: status :),
	"shimen":	(: status :),
]));
	set("no_clean_up", 0);

	setup();
}
void init()
{
	add_action("do_tui","tui");
}

int do_tui()
{
	object me,room;
	me=this_player();
	room=load_object(__DIR__"midao2.c");
	if(query("exits/west"))
	return notify_fail("ʯ�����ѱ��ƿ��ˡ�\n");
	if(me->query_str()<45)	{
		 message_vision(CYN"$Nʹ�����̵ľ�������ʯ�š�\n���ʯ����˿������\n"NOR,me);
		return 1;
	}
	message_vision(CYN"$N�������˫��һ�񻺻��Ľ�ʯ���ƿ���\n"NOR,me);
	tell_object(room,CYN"��֪��˭�ڶ����ʯ���ƿ��ˡ�\n"NOR);
	set("exits/west",__DIR__"midao2");
	room->set("exits/east",__FILE__);
	return 1;
}
string status()
{
	if(query("exits/west"))
	return "һ������ʯ�ţ��ѱ��ƿ���\n";
	return "һ������ʯ�ţ�������ֻ�����ƣ�tui�����ˡ�\n";
}
int valid_leave(object me,string dir)
{
	object room;
	room=load_object(__DIR__"midao2.c");
	if(query("exits/west"))
	{
	 tell_object(this_object(),CYN"ֻ���ü������죬ʯ�Żָ�ԭ״��\n"NOR);
	delete("exits/west");
	tell_object(room,CYN"��֪��˭�����˻��أ���������֮��ʯ�Żָ�ԭ״��\n"NOR);
	room->delete("exits/east");
	}
	return ::valid_leave(me,dir);
}
