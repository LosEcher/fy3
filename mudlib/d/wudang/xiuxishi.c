// Room: /u/xizhen/room/xiuxishi.c

inherit ROOM;

void create()
{
	set("short","休息室");
	set("long", @LONG
这儿是专供武当弟子睡觉的房间。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"sanqingdian",
]));
	set("sleep_room",1);
	set("no_fight",1);

	setup();
	replace_program(ROOM);
}
