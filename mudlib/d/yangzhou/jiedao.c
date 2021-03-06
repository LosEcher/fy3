// Room: /u/swordman/yangzhou/jiedao.c

inherit ROOM;

void create()
{
	set("short", "街道");
	set("long", @LONG
你走在扬州城北的一条小街上，因离城市中心较远，格外的清静优雅。
向南通往城区，向北是瘦西湖山庄。一路绿荫垂柳，鸟语花香，令人心旷
神移。不远处的一条碧绿的小湖就是闻名天下的瘦西湖了。

LONG
	);
	set("no_clean_up", 0);
	set("light_up", 1);
	set("outdoors", "/u/swordman");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"jiedao1",
  "south" : __DIR__"xijie2",
]));

	setup();
	replace_program(ROOM);
}
