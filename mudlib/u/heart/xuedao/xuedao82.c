// Room: /u/uuui/xuedao/xuedao82.c

inherit ROOM;

void create()
{
	set("short", "灌木丛");
	set("long", @LONG
遍地都是密密麻麻的灌木从，几乎有半人高，枝条上
布满了尖利的小刺，经常勾坏过路人的衣服。小心翼翼
的走过去，前面似乎就开阔了。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 2 */
  "southwest" : __DIR__"xuedao81",
  "east" : __DIR__"xuedao84",
]));

	setup();
	replace_program(ROOM);
}
