// Room: /d/jinling/chalu.c

inherit ROOM;

void create()
{
	set("short", "��·��");
	set("long", @LONG
����һ������·�ڣ���������������������Է�����������ǵ����ꡣ
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/jingling");
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"shanglin5.c",
  "northwest" : __DIR__"shanglin.c",
]));

	setup();
	replace_program(ROOM);
}
