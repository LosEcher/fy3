// Room: /d/new/huanhua/dalu2.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", @LONG
һ�����������Ĵ�·,��������,��������.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"dalu3",
  "west" : __DIR__"dalu",
]));
	set("outdoors", "/d/new");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
