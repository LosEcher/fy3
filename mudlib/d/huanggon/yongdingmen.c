// Room: /d/huanggon/yongdingmen.c

inherit ROOM;

void create()
{
	set("short", "永定门");
	set("long", @LONG
永定门是京城的南大门,高大的城楼上'永定门'三字老远就能看到.
北边是条南北向的街道,南边尘土飞扬,是连接扬州和京城的要道,门口
的军士盘查甚严.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"road5",
  "north" : __DIR__"sdajie1",
]));
	set("outdoors", "/d/huanggon");
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/chengweibin.c" : 2,
]));

	setup();
	replace_program(ROOM);
}
