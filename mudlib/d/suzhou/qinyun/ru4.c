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
		"east" :__DIR__"ru3",
		"north" :__DIR__"tingyu",
]));
	set("objects",([
		__DIR__"npc/huyuan":2,
]));
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
	replace_program(ROOM);
}
