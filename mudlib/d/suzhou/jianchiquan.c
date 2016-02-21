// Room: /d/suzhou/jianchiquan.c

inherit ROOM;

void create()
{
	set("short", "剑池泉");
	set("long", @LONG
出现在你眼前的是个深两丈的长方形深池，池旁峭壁如削，壁上刻有“风壑
云泉”四字，笔法圆润。相传此池之下乃春秋吴国国君阖闾之墓，吴君爱剑，下
葬时以宝剑三千殉葬。秦始皇、东吴孙权曾遣人在此凿石求剑无成，故名此泉为
剑池泉。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"out" :__DIR__"yuanmen",
]));
	set("objects",([
	__DIR__"npc/youke" :1,
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
}
void init()
{
	add_action("do_climb","climb");
}
int do_climb()
{
	object me;
	me=this_player();
	message_vision("$N顺着峭壁小心翼翼的爬了下去。\n",me);
	tell_room(__DIR__"quanxia",me->query("name")+"从上面爬了下来。\n");
	me->move(__DIR__"quanxia");
	return 1;
}
