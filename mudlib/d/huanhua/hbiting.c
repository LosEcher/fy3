// Room: /d/new/huanhua/hbiting.c

inherit ROOM;

void create()
{
	set("short", "����ͤ");
	set("long", @LONG
һ��С�ɵ�ͤ��,���ڴ���Ա�,���ϵ���������һ��������һ��
������,����������������Ĵ��.
LONG
	);
	set("outdoors", "/d/new");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"dalu",
  "south" : __DIR__"jhongqiao1",
]));

	setup();
	replace_program(ROOM);
}
