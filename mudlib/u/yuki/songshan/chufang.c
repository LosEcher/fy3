// Room: /u/yuki/songshan/chufang.c

inherit ROOM;

void create()
{
	set("short", "厨房");
	set("long", @LONG
    左冷禅的夫人做得一手好菜，左冷禅也为此深感骄傲。平常无事
的时候，左冷禅的夫人就喜欢在这里自己试验些新的菜方。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"zoulang2",
  "north" : __DIR__"qingong",
]));

	setup();
	replace_program(ROOM);
}
