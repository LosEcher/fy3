// Room: /d/jinling/shanglin5.c

inherit ROOM;

void create()
{
	set("short", "���ֵ�");
	set("long", @LONG
�������Ǿ�����⣬������������������Է��
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/jingling");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"chalu.c",
  "east" : __DIR__"shanglin4.c",
]));

	setup();
	replace_program(ROOM);
}
