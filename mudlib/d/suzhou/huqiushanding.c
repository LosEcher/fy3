// Room: /d/suzhou/huqiushanding.c

inherit ROOM;

void create()
{
	set("short", "����ɽ��");
	set("long", @LONG
��վ��ɽ����΢�����ò����ˡ�����ǰ�����µ������������֮�С�ɽ
�紵���ƺ��µ�Ҳ������������������µ��Զ��һ��������Ȼ������������
�����������С������΢΢�ĳ��������׺���ɫ����ͼ������������
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"southdown" :__DIR__"huqiushanyao",
		"north" :__DIR__"guanyindian",
]));
	set("objects",([
	__DIR__"npc/yunyouseng":1,
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
