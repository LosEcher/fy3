// Room: /d/jinling/changjie5.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�����Ǿ���ǵ���Ҫ�ֵ������ھ�����ϱ����������̣����Ծ��г�
��������������Ľֵ�����Ҳ�Ǿ����������ҵ�֡��������Ǿ����
����Ӫ������ȴ��һ��С���̡�.

LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/jingling");
	set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"doufudian.c",
  "east" : __DIR__"bingyin.c",
  "south" : __DIR__"changjie4.c",
  "north" : __DIR__"changjie6.c",
]));

	setup();
	replace_program(ROOM);
}
