// Room: /d/huanggon/shufang.c

inherit ROOM;

void create()
{
	set("short", "书房");
	set("long", @LONG
这里是王府的书房,也是康亲王日常起草奏折的地方,靠南的大书桌
上堆了些奏章,一排古玩架子把屋子隔成两边,靠墙摆的都是些大部头的
书籍,看上去并没有翻动的痕迹.
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"kangneiting",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
