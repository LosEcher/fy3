// Room: /u/oldsix/room1/ru1.c

inherit ROOM;

void create()
{
	set("short", "С·");
	set("long", @LONG
����ʯ�̳ɵ�С������������һֱͨ��Զ����С������ɽʯ��ľ�������Ŀ�
������
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"south" : __DIR__"qinyun",
		"north" :__DIR__"ru2",
]));
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
	replace_program(ROOM);
}
