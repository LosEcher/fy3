// Room: /d/hangzhou/lu2.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", @LONG
һ����������Ĵ�·,�����Ǹ�����·��,���߾��Ǻ���.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"lu3",
  "east" : __DIR__"lu1",
]));

	setup();
	replace_program(ROOM);
}
