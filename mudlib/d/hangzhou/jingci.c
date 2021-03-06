// Room: /d/hangzhou/jingci.c

inherit ROOM;

void create()
{
	set("short", "净慈寺");
	set("long", @LONG
净慈禅院年代久远,历数百年而不坠.在佛界有很高声誉.寺靠青山,风
景奇丽.寺前的一口大钟格外引人注目.有诗赞道[柳昏花暝暮云在,隐隐初
传一两声。禅榻屡惊僧入定，旅窗偏逗客含情。……] 
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/daoji.c" : 1,
]));
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"nanping",
]));
	set("outdoors", "/d/hangzhou");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
