// Room: /d/hengshan/shanlu1.c

inherit ROOM;

void create()
{
	set("short", "山路");
	set("long", @LONG
一条山道小路。四周青山环抱，西面不远处便是恒山。东南
方通往开封。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"shanlu2",
  "west" : __DIR__"jinlongxia",
]));
	set("outdoors", "hengshan");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
