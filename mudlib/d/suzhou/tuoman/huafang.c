// Room: /d/suzhou/tuoman/huafang.c

inherit ROOM;

void create()
{
	set("short", "���ʷ�");
	set("long", @LONG
һ��ʯ�ݣ���������ڵ��������ϰ��Ÿ��ˣ���������ʲô��������������
�ģ�ȴ˵����������ֻ��һ��������������������������һ��ѩ���ĳ���������
һ����ˮ�����ֱðˮ����
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"east":__DIR__"ru2",
]));
	set("objects",([
		__DIR__"npc/yan":1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
