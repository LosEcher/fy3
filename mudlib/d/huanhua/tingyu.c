// Room: /d/new/huanhua/tingyu.c

inherit ROOM;

void create()
{
	set("short", "����¥");
	set("long", @LONG
����¥��һ������Сľ¥,ͨ����ɵ���ɫ,��ӳ����԰�Ž�,����֮
��,��¥����ĳ������ڰ���,�Ľǵ������ڷ�������ҡ��.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"houyuan",
  "northwest" : __DIR__"changlang5",
  "up" : __DIR__"tingyulou",
]));

	setup();
	replace_program(ROOM);
}
