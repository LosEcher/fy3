// Room: /u/oldsix/room2/tangkou.c

inherit ROOM;

void create()
{
	set("short", "�����ÿ�");
	set("long", @LONG
һ����ֱ�ĵ�·ֱͨ���ݸ����ã����ߵ��������ɳɳ���졣�������δ�
�����ձ��������ÿ����ࡣ
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
		"east" :__DIR__"datang",
		"west" :__DIR__"shiziru",
]));
	set("objects",([
]));
	    set("outdoors","room");
	setup();
	replace_program(ROOM);
}
