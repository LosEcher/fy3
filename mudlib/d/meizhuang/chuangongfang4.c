// Room: /d/suzhou/meizhuang/chuangongfang1.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
����ǻ��ӹ����ӵ����������������ڷ������ܰڷ���Щ���С�����
֮�⣬�������ڿտյ������Զ���Ϊ���������㡣��������ʯ�ݱ��ǻ���
����ס�ĵط��ˡ�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"north":__DIR__"huangzhonggongju",
	"south":__DIR__"huajing",
]));
	set("objects",([
//	__DIR__"obj/bingqijia1":1,
		__DIR__"npc/chuangongdizi1":1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
