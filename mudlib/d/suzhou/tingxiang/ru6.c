// Room: /u/oldsix/room1/ru1.c

inherit ROOM;

void create()
{
	set("short", "С·");
	set("long", @LONG
ֻ��ǰ�����Ҵ�������������������ֱ��ĺ�������ϴӿ����д���������
�Ƚ���ߺ�ȣ�����Χ�������ŵ����ľʵ�Ǵ�󲻳ơ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"east":__DIR__"ru5",
		"north":__DIR__"keting2",
]));
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
	replace_program(ROOM);
}
