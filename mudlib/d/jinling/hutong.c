// Room: /d/jinling/hutong.c

inherit ROOM;

void create()
{
	set("short", "С��ͬ");
	set("long", @LONG
���߽���һ��������С��ͬ,��ǰ��ʱ�ι�һȺȺ��Ů�������е����Σ�
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/liumang.c" : 2,
]));
	set("outdoors", "/d/jingling");
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"changjie6.c",
  "west" : __DIR__"hutong1.c",
]));

	setup();
	replace_program(ROOM);
}
