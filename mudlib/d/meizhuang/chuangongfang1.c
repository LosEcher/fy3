// Room: /d/suzhou/meizhuang/chuangongfang1.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
����ǵ��������ӵ����������������ڷ������ܰڷ���Щ���С�����
֮�⣬�������ڿտյ������Զ���Ϊ���������㡣�������ʺ�����ǵ���
����ס�ĵط��ˡ�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"danqingju",
  "east" : __DIR__"heilang2",
]));
	set("objects",([
//	 __DIR__"obj/bingqijia4":1,
		__DIR__"npc/chuangongdizi4":1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
