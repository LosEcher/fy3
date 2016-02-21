// Room: /d/suzhou/guandao4.c

inherit ROOM;

void create()
{
	set("short", "官道");
	set("long", @LONG
这是条连接中州与苏州的官道。由于此处远离城镇，所以路上行人渐稀。西
向是通往中州的叉路口，往东则是苏州方向。
LONG
	);
	set("outdoors", "suzhou");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : "/d/yeyangzai/chalu",
  "east" : __DIR__"guandao3",
]));

	setup();
	replace_program(ROOM);
}
