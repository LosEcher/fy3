// Room: /u/oldsix/room1/qingyun.c

inherit ROOM;

void create()
{
	set("short", "����С��");
	set("long", @LONG
���������������������ᣬ������һ����֪��С�����ǰ뵺֮�ϡ�����С��
���磬��Ϊ���š�С���Ҷ���д�š����ϡ����֣�������Ϊ������
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"north" :__DIR__"ru1",
		"down":__DIR__"huan_2",
]));
	set("objects",([
		__DIR__"npc/nantong":1,
		__DIR__"npc/nutong":1,
]));
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
	replace_program(ROOM);
}
