// Room: /d/suzhou/meizhuang/nuzaotang.c

inherit ROOM;

void create()
{
	set("short", "女澡堂");
	set("long", @LONG
澡堂不是很大，几个大木桶整齐的分散在屋内。女弟子们叽叽喳喳噪
的头都大了，还是自已找个没人的木桶好好的享受一下洗澡的乐趣吧。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"zaotangguodao",
]));
	set("no_clean_up", 0);
	set("bath_room",1);
	set("bath_equipment","大木桶");
	setup();
	replace_program(ROOM);
}
