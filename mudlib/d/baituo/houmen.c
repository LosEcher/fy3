// Room: /d/baituo/houmen.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
���Ǹ�ɽׯ�ĺ���,һ��û��ʲô����
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "baituo");
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/menwei2" : 1,
]));
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"tuyuan",
]));

	setup();
	replace_program(ROOM);
}
