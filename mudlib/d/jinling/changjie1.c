// Room: /d/jinling/changjie1.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�����Ǿ���ǵ���Ҫ�ֵ������ھ�����ϱ����������̣����Ծ��г�
��������������Ľֵ�����Ҳ�Ǿ����������ҵ�֡�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/yanjing/npc/person.c" : 2,
]));
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"changjie2.c",
  "south" : __DIR__"changjie.c",
]));
	set("outdoors", "/d/jingling");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
