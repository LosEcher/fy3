// Room: /d/quanzhou/estreet2.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
������Ȫ�ݸ������ֵ�һ���ֵ�.·�ϲ�ʱ�������Ż���ĳ�����
��,���ߵĵ��̲���,������Ȫ������������.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"estreet1",
  "east" : __DIR__"dongmen",
  "south" : __DIR__"mazhu",
]));
	set("outdoors", "/d/quanzhou");

	setup();
	replace_program(ROOM);
}
