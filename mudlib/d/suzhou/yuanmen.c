// Room: /d/suzhou/yuanmen.c

inherit ROOM;

void create()
{
	set("short", "԰��");
	set("long", @LONG
������԰��ǰ�������ж��족�ĸ���ӳ������������ּ������۾������ǳ�
������֮�֡�԰����������ͦ�λ��ݽ��ޣ��ľ�������Ҳ��֪��ʲôԭ����ʱ
���ƺ��о����������йɵ��������㣬�����ɵ�һ��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"east" :__DIR__"huqiushanyao",
		"enter" :__DIR__"jianchiquan",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
