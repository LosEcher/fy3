// Room: /d/huizhu/to_bj.c

inherit ROOM;

void create()
{
	set("short", "�ٵ�");
	set("long", @LONG
���������Ӿ���������صĹٵ�������ͨ�������أ����߲�Զ���Ǿ�
���ˡ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/huizhu");
	set("exits", ([ /* sizeof() == 2 */
  "east" : "/d/huanggon/xitiemen",
  "southwest" : __DIR__"guandao4",
]));

	setup();
	replace_program(ROOM);
}
