// Room: /d/suzhou/qingshiru2.c

inherit ROOM;

void create()
{
	set("short", "��ʯ·");
	set("long", @LONG
һ����ʯ���̳ɵ�·���ȽϿ�֡���·�����ֵĶ��Ǵ�������΢�紵��ɳɳ
���졣��������������ݽ��⣬�������˽���ϡ�١�������ȥ����Լ�ɼ�����Ӱ��
��ʯ·�ϱ����죬�ϱ߾������ݳǡ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"south" :__DIR__"qingshiru1",
		"west" :__DIR__"xiaolu1",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
