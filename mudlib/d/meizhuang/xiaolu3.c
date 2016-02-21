// Room: /d/meizhuang/xiaolu3.c

inherit ROOM;

void create()
{
	set("short", "小路");
	set("long", @LONG
你走在一条幽静的小路上，路旁花草茂盛红绿相间。抬头望去，但见
西方雾气包绕，树影绰绰，似乎是个树林。
LONG
	);
	set("outdoors", "meizhuang");
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yetu" : 2,
]));
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"xiaolu2",
  "west" : __DIR__"xiaolu4",
]));

	setup();
	replace_program(ROOM);
}
