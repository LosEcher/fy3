// Room: /d/jinling/changjie2.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�����Ǿ���ǵ���Ҫ�ֵ������ھ�����ϱ����������̣����Ծ��г�
��������������Ľֵ�����Ҳ�Ǿ����������ҵ�֣���������������ˣ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/jingling");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"changjie1.c",
  "north" : __DIR__"shizhong.c",
]));

	setup();
	replace_program(ROOM);
}
