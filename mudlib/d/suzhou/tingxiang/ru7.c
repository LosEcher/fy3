// Room: /u/oldsix/room1/ru3.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
���Ǹ����ں��ϵ����ȣ���������һֱͨ��Զ����������ȥ�������̲�����
��΢�����죬����ˮ������
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"east":__DIR__"keting2",
		"north":__DIR__"ru8",
]));
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
	replace_program(ROOM);
}
