// Room: /u/oldsix/room1/ru1.c

inherit ROOM;

void create()
{
	set("short", "С·");
	set("long", @LONG
������������һ����ʯ�ݣ�����ʯ����ϡ�������֡����ʷ��������д�����
���ĥ��֮�������Եù�����ɭ���㲻��ͷƤ���飬��֪�ò��ý�ȥ������
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"east":__DIR__"ru1",
		"west":__DIR__"huafang",
]));
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
	replace_program(ROOM);
}
