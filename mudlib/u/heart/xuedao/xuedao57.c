// Room: /u/uuui/xuedao/xuedao57.c

inherit ROOM;

void create()
{
	set("short", "朱漆大门");
	set("long", @LONG
 两扇红色的厚重的大门敞开着，里面是一片空地。
 大门的颜色看起来很刺眼，好象干涸了的血迹。你真希
 望是自己的错觉。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/2");
	set("exits", ([ /* sizeof() == 2 */
  "gate" : __DIR__"xuedao58",
  "east" : __DIR__"xuedao53",
]));

	setup();
	replace_program(ROOM);
}
