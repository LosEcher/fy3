// Room: /d/suzhou/meizhuang/chuangongfang1.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
����Ǻڰ��ӵ��ӵ����������������ڷ������ܰڷ���Щ���С�����
֮�⣬�������ڿտյ������Զ���Ϊ���������㡣�����С������Ǻڰ�
�Ӿ�ס�ĵط��ˡ�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"west":__DIR__"heibaiziju",
	"east":__DIR__"heilang3",
]));
	set("objects",([
//	__DIR__"obj/bingqijia2":1,
		__DIR__"npc/chuangongdizi2":1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
