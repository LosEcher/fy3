// Room: /d/jinling/changjie4.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�����Ǿ���ǵ���Ҫ�ֵ������ھ�����ϱ����������̣����Ծ��г�
��������������Ľֵ�����Ҳ�Ǿ����������ҵ�֡�������һ�Ҿ�¥��
�����ǳ��ׯ��
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/hangzhou/npc/man.c" : 2,
]));
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"changjie5.c",
  "south" : __DIR__"changjie3.c",
  "west" : __DIR__"chouduan.c",
  "east" : __DIR__"jiulou.c",
]));
	set("outdoors", "/d/jingling");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
