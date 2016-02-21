// Room: /d/suzhou/meizhuang/midao1.c
#include <ansi.h>
inherit ROOM;
string status();
void create()
{
	set("short", "�ܵ�");
	set("long", @LONG
�ܵ��������쳣��ֻ��ǽ���ϵ���һյ�͵ƣ���������ɫ��â������
������б��ֻ��������صװ������ࡣ�����ƺ��е����š�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"up":__DIR__"midao3",
]));
	set("no_clean_up", 0);
	set("item_desc",([
		"����":	(: status :),
		"tiemen":	(: status :),
]));
	setup();
}
void init()
{
	add_action("do_yong","shiyong");
}
int do_yong(string str)
{
	object me,room;
	me=this_player();
	room=load_object(__DIR__"midao5.c");
	if(!str)
	return notify_fail("��Ҫʹ��ʲô��\n");
	if(!present(str,me))
	return notify_fail("������û������������\n");
	if(str!="yaoshi")
	return notify_fail("�������ֻ��ʹ��Կ�ס�\n");
	if(query("exits/north"))
	return notify_fail("�������ѱ����ˡ�\n");
	message_vision(CYN"$N�ͳ�Կ�ײ���Կ�׿���ת�˼��¡�\nֻ���á���̢��һ�����죬���ű����ˣ�\n"NOR,me);
	tell_object(room,CYN"��֪˭�Ӷ���������š�\n"NOR);
	set("exits/north",__DIR__"midao5");
	room->set("exits/south",__DIR__"midao4");
	return 1;
}
string status()
{
	if(query("exits/north"))	{
		return "һ�����ţ��ѱ����ˡ�\n";
	}
	 return "�����и�Կ�׿ף������ӵ�ʹ�ã�shiyong��Կ�׿��ˡ�\n";
}
int valid_leave(object me,string dir)
{
	object room;
	room=load_object(__DIR__"midao5.c");
	if(query("exits/north"))	{
	tell_object(this_object(),CYN"�������������Ų�֪��ô�������ˣ�\n"NOR);
	delete("exits/north");
	tell_object(room,CYN"�����������������󣬲�֪˭�������أ����ű������ˣ�\n"NOR);
	room->delete("exits/south");
	}
	return ::valid_leave(me,dir);
}
