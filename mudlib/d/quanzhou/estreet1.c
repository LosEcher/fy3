// Room: /d/quanzhou/estreet1.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
������Ȫ�ݸ������ֵ�һ���ֵ�.·�ϲ�ʱ�������Ż���ĳ�����
��,���ߵĵ��̲���,�ֵ�������һ���ߴ������,����Ȫ�ݸ���.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"nstreet3",
  "east" : __DIR__"estreet2",
  "north" : __DIR__"yamen",
]));
	set("outdoors", "/d/quanzhou");

	setup();
	replace_program(ROOM);
}
