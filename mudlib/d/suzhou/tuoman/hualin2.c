// Room: /d/suzhou/tuoman/hualin1.c
#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
���ڻ������Ų����У��������ֻ�ǲ軨�����˼���·�����ۼ�С·��һ
������һ������֪��һ��������·��Ҫ�ص�С��ͣ����ȴ�е�����ˡ�
LONG
	);
	set("outdoors","suzhou");
	setup();
}
void reset()
{
	::reset();
	set("exits",([
		"north" :__DIR__"hualin"+(random(6)+1),
		"south" :__DIR__"hualin"+(random(6)+1),
		"west"  :__DIR__"hualin"+(random(6)+1),
		"east"  :__DIR__"hua2",
	]));
}
int valid_leave(object me,string dir)
{
	write("�����ߵ�ͷ���ۻ����ֲ��嶫�������ˡ�\n");
	return 1;
}
void init()
{
	object ob;
	ob=this_player();
	remove_call_out("greeting");
                call_out("greeting", 1, ob);
}
void greeting(object ob)
{
	if(!ob||environment(ob)!=this_object()) return;
	write(HIC"��ͻȻ���ֶ����ƺ�����С·��\n"NOR);
	return;
}
