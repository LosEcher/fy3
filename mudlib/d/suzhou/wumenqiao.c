// Room: /d/suzhou/wumenqiao.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
�������������Ų��ϵ��˺�֮�ϣ���������Ρ��׳�������������ĵ���ʯ��
�š����Ž��ڱ�����䣬������ش�ˮ½Ҫ���������Ż�֮�⣬�ʶ�����Ϊ������
����̧�׵����Ŷ������ų�¥������Ŀ����������Ȼ�������˺�֮�а���������
һƬ��æ����
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"south" :__DIR__"dadao1",
		"northwest" :__DIR__"panmen",
		"down" :__DIR__"matou",
]));
	set("outdoors","suzhou");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
