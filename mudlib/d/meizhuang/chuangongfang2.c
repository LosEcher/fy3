// Room: /d/suzhou/meizhuang/chuangongfang1.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
�����ͺ���̵��ӵ����������������ڷ������ܰڷ���Щ���С�����
֮�⣬�������ڿտյ������Զ���Ϊ���������㡣�����и����ұ���ͺ��
�̾�ס�ĵط��ˡ�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"west":__DIR__"heilang5",
	"east":__DIR__"tubiwengju",
]));
	set("objects",([
	//	 __DIR__"obj/bingqijia3":1,\
		__DIR__"npc/chuangongdizi3":1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
