// Room: /city/zuixianlou.c
// xiao chi dian in wudang
// YZC 1995/12/04 
// arnzh 97/1/24
inherit ROOM;

void create()
{
	set("short", "С�Ե�");
	set("long", @LONG
	���С�Ե겼�ü��ף���ֱ����һ������͸��������Ҳ�ܽ�С�Եꡣ
�˿Ͷ��ǴҴҵ����ˣ������ӡ����ȡ��׾ƾ͸�·ȥ�ˡ�
LONG
	);

	set("exits", ([
		"southdown":__DIR__"xuanwumen",
		"east" : __DIR__"xiaolu4",
		"northup" : __DIR__"shijie5",
	]));

	set("objects", ([
		__DIR__"npc/xiaoer3" : 1,
	]));

	setup();
	replace_program(ROOM);
}

