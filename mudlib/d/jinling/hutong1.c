// Room: /d/jinling/hutong1.c

inherit ROOM;

void create()
{
	set("short", "С��ͬ");
	set("long", @LONG
���߽���һ��������С��ͬ,��ǰ��ʱ�ι�һȺȺ��Ů�������е����Σ�
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/liumang.c" : 1,
  __DIR__"npc/gongzi.c" : 1,
]));
	set("outdoors", "/d/jingling");
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"hutong.c",
  "west" : __DIR__"hutong2.c",
]));

	setup();
	replace_program(ROOM);
}
