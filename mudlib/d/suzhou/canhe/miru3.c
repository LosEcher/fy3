// Room: /d/suzhou/canhe/miru3.c

inherit ROOM;

void create()
{
	set("short", "�ܵ�");
	set("long", @LONG
���Ĵ�������һ�£������˴���ɽ��ˮ���˵��Ǹ��õط���ˮ�㡢�������
��һ����������ƺ�������һ�㡣��ߴߴ����������Ű������ص���ʵ֮�С�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"in" :__DIR__"miru2",
		"north" :__DIR__"pianfang",
		"east" :__DIR__"huanshi",
		"south" :__DIR__"huayuan",
]));
	set("outdoors","suzhou");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
