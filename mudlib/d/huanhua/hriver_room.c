// Room: /d/new/huanhua/hriver_room.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
һ��СС�ľ���,�ƿ��������ܿ������������,����һ�������ʵ�޻�, 
��ǽ�ϵļ�������ͼ�����ǹ���.ǽ�ǵĸ߼���һ�������ɢ��һ������. 
��������齵�ǽ�Ϲ���һ�Ѷ̽�,����ȥûʲô���. 
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/feidao-mo.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"changlang5",
]));

	setup();
	replace_program(ROOM);
}
