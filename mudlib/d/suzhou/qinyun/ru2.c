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
		"south":__DIR__"ru1",
		"north" :__DIR__"keting",
]));
	set("objects",([
		__DIR__"npc/gengfu":1,
]));
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
	replace_program(ROOM);
}
