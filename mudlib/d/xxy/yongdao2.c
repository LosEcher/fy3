// Room: /d/xxy/yongdao2.c

inherit ROOM;

void create()
{
	set("short", "��");
	set("long", @LONG
һ���̵ܶ���,��Լ����,�ڶ��˵�ǽ����,����һյ��,ͨ������
������󳨷�.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"datang",
  "south" : __DIR__"changfang",
  "north" : __DIR__"changfang1",
]));

	setup();
	replace_program(ROOM);
}
