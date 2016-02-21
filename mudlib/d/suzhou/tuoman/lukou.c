// Room: /d/suzhou/tuoman/lukou.c

inherit ROOM;

void create()
{
	set("short", "·��");
	set("long", @LONG
·�����ż�����������ÿ����ڷ絲�ꡣ���ߵ�ɽ�趼����ǰû�м����ġ�
�����Ե�������ҵ���·�������ö�������������Ů��̾Ϣ֮����
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"west":__DIR__"hualin1",
		"east":__DIR__"huapu",
		"south":__DIR__"ru1",
		"north":__DIR__"ru3",
]));
	set("objects",([
		__DIR__"npc/beinu":2,
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
