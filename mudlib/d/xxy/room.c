// Room: /d/xxy/room.c

inherit ROOM;

void create()
{
	set("short", "�շ���");
	set("long", @LONG
����һ��ʲô��û�еķ��䡣
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "up" : __DIR__"pomiao",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/xxy");

	setup();
	replace_program(ROOM);
}
