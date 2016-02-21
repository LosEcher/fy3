// Room: /u/xxy/room/milin1.c

inherit ROOM;

void create()
{
	set("short", "密林");
	set("long", @LONG
这是一片浓密的楠木林,枝柯交茅,绿云蔽日,据说,以前有个和尚名
叫寂完的,以'大乘经'字数为准,率领门徒广植树木,总有10.9万余株,不
过对你来说不是好事,说不定会迷路的.
LONG
	);
	set("no_clean_up", 0);
set("outdoors","/d/emei");
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"milin3",
  "east" : __DIR__"milin2",
  "southwest" : __DIR__"huaying",
  "west" : __DIR__"milin2",
]));

	setup();
	replace_program(ROOM);
}
