// Room: /d/suzhou/huqiushanyao.c

inherit ROOM;

void create()
{
	set("short", "����ɽ��");
	set("long", @LONG
������վ�ڻ���ɽ�İ�ɽ���ϣ��������˲��ϡ�ɽ���Ļ������������ɼ���
�������������ܲ�����ͻȻ������������һ�����ܣ���գ��֮��ȴ���ټ����ޡ�
����ν�������������ɽ�����вء���������һ԰�ţ���֪��ʲôȥ����
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"southdown" :__DIR__"huqiushanxia",
		"west" :__DIR__"yuanmen",
		"northup" :__DIR__"huqiushanding",
]));
	set("objects",([
	__DIR__"npc/jinxiangke":1,
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
