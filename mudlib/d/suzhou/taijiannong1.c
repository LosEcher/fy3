// Room: /d/suzhou/taijiannong1.c

inherit ROOM;

void create()
{
	set("short", "̫��Ū");
	set("long", @LONG
̫��Ū�ڸ��ֲ˹ݲ���ʮ���ң������ݳ��������ĳԺ�Ū����ν����ɷ̫��
Ū������������ʵд�ա����㷢�ֽ�����Ū�Ĳ������¹ڳ����ĸ��ҹ��Ӹ磬��
����Ū�л��б�����Ρ�
LONG
	);
	set("objects",([
		__DIR__"npc/gongzi" :1,
	]));
	set("exits", ([ /* sizeof() == 1 */
		"west" :__DIR__"chengnanjie1",
		"east" :__DIR__"taijiannong2",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
