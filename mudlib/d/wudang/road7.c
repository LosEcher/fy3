// Room: /d/wudang/road7.c

inherit ROOM;

void create()
{
	set("short", "石路");
	set("long", @LONG
这是条碎石铺成的小路。南边直通海滩，你似乎已感到阵阵海风的气息
。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/wudang");
	set("exits", ([ /* sizeof() == 2 */
  "south" : "/d/hainan/tohaitan",
  "north" : __DIR__"road5",
]));

	setup();
	replace_program(ROOM);
}
