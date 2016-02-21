// Room: /u/oldsix/room1/taihu4.c
#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "太湖");
	set("long", @LONG
如此曲曲折折的划了两个多时辰，遥遥望见远处绿柳丛中，露出一角飞檐。
阿碧接过木桨，将船直向柳荫中划去。到得邻近，只见一座松树枝架成的木梯，
垂下来通向水面。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"up" :__DIR__"qinyun",
]));
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
}
int init()
{
	object me;
	me=this_player();
	call_out("greeting",1,me);
}
void greeting(object me)
{
	if (me->query_temp("oldsix_flag/ab")==1) {
	me->set_temp("oldsix_flag/ab",0);
	write(CYN"阿碧说道：送君千里，终需一别。这位"+ RANK_D->query_respect(me)+ "请多保重。\n"NOR);
	write(CYN"说罢，阿碧划着小船渐渐远去。\n"NOR);
						}
}
