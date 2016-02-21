// Room: /d/jinling/hutong.c

inherit ROOM;

void create()
{
	set("short", "小胡同");
	set("long", @LONG
你走进了一条阴暗的小胡同,眼前不时晃过一群群男女。看来有点蹊跷？
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/liumang.c" : 2,
]));
	set("outdoors", "/d/jingling");
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"changjie6.c",
  "west" : __DIR__"hutong1.c",
]));

	setup();
	replace_program(ROOM);
}
