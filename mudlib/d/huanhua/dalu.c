// Room: /d/new/huanhua/dalu.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", @LONG
һ�����������Ĵ�·,��������,��������.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"dalu2",
  "south" : __DIR__"hbiting",
  "north" : __DIR__"dalu1",
]));

	setup();
	replace_program(ROOM);
}
