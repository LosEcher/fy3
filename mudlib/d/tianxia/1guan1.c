// Room: /d/new/tianxia/1guan1.c

inherit ROOM;

void create()
{
	set("short", "石板路");
	set("long", @LONG
一条平整的大道，用琢磨成一般大小的四方麻石铺就。两边的山壁
如扇，陡立雄峙，道路两边三步一岗，五步一哨，十分森严。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"1guan2",
  "west" : __DIR__"rollgate",
]));

	setup();
	replace_program(ROOM);
}
