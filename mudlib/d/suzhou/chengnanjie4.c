// Room: /d/suzhou/chengnanjie4.c

inherit ROOM;

void create()
{
	set("short", "���Ͻ�");
	set("long", @LONG
���������ݸ�ѧ���ֳơ����������ݳ��ڲ���������ʿ�����ڴ���ʫ���ԡ�
�ֶ�һ����ˮ��԰���������������ȸ�������⵹Ӱ������·�˴�����һ�£���԰
��Ϊ����ͤ���ֵ��ϱ����죬�����ѿ��������š�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
		"south" :__DIR__"panmen",
		"north" :__DIR__"chengnanjie3",
		"west" :__DIR__"wenmiao",
		"east" :__DIR__"canglangting",
]));
	set("objects",([
		"/npc/man1":2,
	]));
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
