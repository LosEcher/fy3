// Room: /d/new/huanhua/river_room.c

inherit ROOM;

void create()
{
	set("short", "��������");
	set("long", @LONG
�����������Խ�֮��,һ����ȥ,ǽ�Ϲ����˸��೤�̲�һ�Ľ�,����
֮��,���пտյ���,���ڳ�������.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/tangfang.c" : 1,
  __DIR__"npc/xqiushui.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"xiaolu1",
  "east" : __DIR__"hhxi",
]));

	setup();
	replace_program(ROOM);
}
