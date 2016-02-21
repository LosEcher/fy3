// Room: /d/kaifeng/wroad1.c

inherit ROOM;

void create()
{
	set("short", "西大街");
	set("long", @LONG
开封府内西面的主要交通要道，街道两边店铺林立，行人车马如梭。
商贩的吆喝，市民与小贩的讨价还价，喧闹无比。此地向北不远就到
了延庆观的大门。
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/lisi.c" : 1,
]));
	set("outdoors", "/d/kaifeng");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"wroad2",
  "south" : __DIR__"wroad",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
