// Room: /d/robber/trees2.c

inherit ROOM;

void create()
{
	set("short", "�ɰ���");
	set("long", @LONG
ϡ���һƬ�ɰ���,���³����������µ���Ҷ���˺���һ��,����ȥ
ϤϤ��������.�����׳������������ѵ�����,������һƬ�ž�.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/jiangnan");
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"trees",
]));

	setup();
	replace_program(ROOM);
}
