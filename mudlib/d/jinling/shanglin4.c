// Room: /d/jinling/shanglin4.c

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
  "west" : __DIR__"shanglin5.c",
  "east" : __DIR__"chengmen3.c",
]));

	setup();
	replace_program(ROOM);
}
