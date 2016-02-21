// Room: /d/dali/todali.c

inherit ROOM;

void create()
{
	set("short", "官道");
	set("long", @LONG
这是条官道，青石铺成。西南直通大理，往北可到峨嵋山，东边
通往中原，西北则是白驼山。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "northwest":"/d/baituo/guandao2",
  "east":"/d/wudang/road6",
  "north":__DIR__"toemei",
  "southwest" : __DIR__"road1",
]));
set("outdoors","/d/dali");
	set("no_clean_up", 0);

	set("objects",([
		"/npc/man3":2,
	]));
	setup();
	replace_program(ROOM);
}
