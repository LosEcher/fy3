// Room: /d/baituo/xiaolu4.c

inherit ROOM;

void create()
{
	set("short", "С·");
	set("long", @LONG
������һ����ɽ��С·�����ֳ�һ�������������ɽ�������ѡ�
LONG
	);
	set("outdoors", "baituo");
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/shanzei2" : 1,
]));
	set("exits", ([ /* sizeof() == 3 */
  "northup" : __DIR__"shan",
  "southwest" : __DIR__"xiaolu3",
  "north" : __DIR__"dongkou",
]));

	setup();
	replace_program(ROOM);
}
