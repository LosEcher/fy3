// Room: /d/huanggon/edajie1.c

inherit ROOM;

void create()
{
	set("short", "东大街");
	set("long", @LONG
这是条东西向的街道,向西穿过天安门广场.街道两边招牌林立,吆喝
声不断,因为是京城,治安很好,所以生意人挺多.此地向北拐,就是有名的
王府井,吃喝穿用样样有.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/taishan/npc/seng-ren.c" : 1,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"edajie",
  "north" : __DIR__"wangfujing",
]));

	setup();
	replace_program(ROOM);
}
