// Room: /d/hangzhou/shilu.c

inherit ROOM;

void create()
{
	set("short", "ʯ��·");
	set("long", @LONG
һ�����ʯ���̾͵�С·,���Բʵ��׷�,���Ž���.͸��������ľ,һ
������������ǰ��Զ.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 2 */
  "eastdown" : __DIR__"nanping",
  "westup" : __DIR__"leifeng",
]));

	setup();
	replace_program(ROOM);
}
