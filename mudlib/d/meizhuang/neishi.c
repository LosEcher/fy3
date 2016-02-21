// Room: /d/suzhou/meizhuang/neishi.c
#include <ansi.h>
inherit ROOM;
string status();
void create()
{
	set("short", "����");
	set("long", @LONG
����һ��һ��������򵥣����Ϲ���ɴ�ʣ����ǳ¾��ѳʻ�ɫ������
����һ�Ŷ��٣�ͨ����ڣ��������ƣ�������������������ǧ�����ϵĹ�
�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"huangzhonggongju",
]));
	set("no_clean_up", 0);
	set("item_desc",([
		"��"	:	(: status :),
		"chuang":	(: status :),
]));
	setup();
}
void init()
{
	add_action("do_la","la");
	add_action("do_la","��");
}
int do_la()
{
	object me;
	me=this_player();
	if(query("exits/down"))
	return notify_fail("�ܵ����ѱ��˴��ˡ�\n");
	if(!me->query_temp("oldsix_flag/look"))
	return notify_fail("��Ҫ��ʲô��\n");
	me->delete_temp("oldsix_flag/look");
	message_vision(CYN"$NС������Ľ����ߵ���������һ�¡�\n����������󣬴���¶�����ܵ�����\n"NOR,me);
	set("exits/down",__DIR__"midao1");
	return 1;
}
string status()
{
	object me;
	me=this_player();
	me->set_temp("oldsix_flag/look",1);
	return "����ϸ�ڴ�����Ѳ��һ�飬���ִ��Ǵ��и�������\n";
}
int valid_leave(object me,string dir)
{
	if(query("exits/down"))	{
		message_vision(CYN"���ش�������������󣬴��ϵ��ܵ���ʧ�ˣ�\n"NOR,me);
		delete("exits/down");
	}
	if(me->query_temp("oldsix_flag/look"))
		me->delete_temp("oldsix_flag/look");
	return ::valid_leave(me,dir);
}

