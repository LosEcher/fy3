// Room: /d/suzhou/chengbeijie2.c

inherit ROOM;

void create()
{
	set("short", "�Ǳ���");
	set("long", @LONG
�ֶ�һ��լԺ��ǽ������Ŀ�ġ������ָ��������Ǹ����̡������¥������
�����֡��ش��á����ľ���������������ҽ�����ﲻ�����ɼ�����ҽ����������
���ϱ����죬�������˲��ϡ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"south" :__DIR__"chengbeijie1",
		"west" :__DIR__"yaopu",
		"north" :__DIR__"chengbeijie3",
		"east" :__DIR__"dangpu",
]));
	set("outdoors","suzhou");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
