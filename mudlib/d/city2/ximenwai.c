// Room: /d/city2/ximenwai.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
�����Ǳ������������⡣����������ɷ�����֡�
LONG );
	set("exits", ([ /* sizeof() == 2 */
		"east" : __DIR__"ximen",
//		"west":__DIR__;
	]));
	set("no_clean_up", 0);
	set("outdoors", "city2");
	setup();
	replace_program(ROOM);
}
