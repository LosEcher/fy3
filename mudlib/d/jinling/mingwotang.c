// Room: /d/jinling/mingwotang.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
���ƿ��ſڵ��޲����ӣ��پ�һ��������������������
��������ζ��ζ��֬��ζ����Լ�����������ӵ��������ſ�����
��ǽ��һ�߸ߵĹ�̨�����ſ�������վ�ż������ʹ󺺡�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"hutong2.c",
  "north" : __DIR__"duchang.c",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/dashou1.c" : 4,
]));

	setup();
	replace_program(ROOM);
}
