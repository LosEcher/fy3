// Room: /d/suzhou/bingqipu.c

inherit ROOM;

void create()
{
	set("short", "兵器铺");
	set("long", @LONG
迎面的墙壁上挂着一把长剑，隐隐射出淡淡的光芒。据说此剑是当年独孤大
侠出道时的利刃。但见剑身黝黑微泛红色，不知它饮干了多少豪杰的热血。剑下
一位青衣老者，想是本铺的主人。
LONG
	);
	set("objects",([
		__DIR__"npc/huang" :1,
	]));
	set("exits", ([ /* sizeof() == 1 */
		"east":__DIR__"chengbeijie3",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
