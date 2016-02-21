// Room: /d/xxy/yongdao1.c

inherit ROOM;

void create()
{
	set("short", "甬道");
	set("long", @LONG
一条长长的甬道,在甬道的南北两面是两间小房间,两边的房间门上都
挂了牌子,南面是[武级考场],而北面是[我级考场].
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"yongdao",
  "south" : __DIR__"wuwu",
  "north" : __DIR__"wowu",
]));

	setup();
	replace_program(ROOM);
}
