// Room: /d/robber/mudroad1.c

inherit ROOM;

void create()
{
	set("short", "����·");
	set("long", @LONG
һ���߹հ���Ļ���·,�ӿ����ݵĺܲ�����,ǰ�治Զ�и�С����,
������ϡ��Щ�ɰ���.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/jiangnan");
	set("exits", ([ /* sizeof() == 2 */
  "southwest" : __DIR__"mudroad",
  "northup" : __DIR__"hill",
]));

	setup();
	replace_program(ROOM);
}
