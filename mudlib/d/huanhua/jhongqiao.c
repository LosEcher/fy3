// Room: /d/new/huanhua/jhongqiao.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
����ʺ�,���������,������ˮ����,Զ����ɽ����,����
һ��¥����ܹ���,���Ȳ���.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"jhongqiao1",
  "southup" : __DIR__"jxiulou",
]));

	setup();
	replace_program(ROOM);
}
