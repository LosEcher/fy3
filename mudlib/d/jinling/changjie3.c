// Room: /d/jinling/changjie3.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�����Ǿ���ǵ���Ҫ�ֵ������ھ�����ϱ����������̣����Ծ��г�
��������������Ľֵ�����Ҳ�Ǿ����������ҵ�֡������������
�Ĺ㳡�ˡ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/jingling");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"shizhong.c",
  "north" : __DIR__"changjie4.c",
]));

	setup();
	replace_program(ROOM);
}
