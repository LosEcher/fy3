// Room: /d/suzhou/meizhuang/yuemen.c

inherit ROOM;

void create()
{
	set("short", "月门");
	set("long", @LONG
一个并不太大的月门，把梅庄分为东西两边。东面主要有梅庄弟子休
息、饮食、练功的场所。西边大都是庄主们的厢房。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"east":__DIR__"shibanlu1",
  "west" : __DIR__"zoulang",
]));
	set("objects",([
		__DIR__"npc/xiaoshidi":2,
]));
	set("no_clean_up", 0);
	set("outdoors", "meizhuang");

	setup();
	replace_program(ROOM);
}
