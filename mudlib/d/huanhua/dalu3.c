// Room: /d/new/huanhua/dalu3.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", @LONG
һ�����������Ĵ�·,��������,��������.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/person.c" : 2,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"dalu2",
  "east" : __DIR__"hxianting",
]));

	setup();
	replace_program(ROOM);
}
