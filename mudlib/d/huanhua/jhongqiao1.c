// Room: /d/new/huanhua/jhongqiao1.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
����ʺ�,���������,������ˮ����,Զ����ɽ����,����
һ��¥����ܹ���,���Ȳ���.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/qiu.c" : 1,
  __DIR__"npc/tie.c" : 1,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"hbiting",
  "south" : __DIR__"jhongqiao",
]));

	setup();
	replace_program(ROOM);
}
