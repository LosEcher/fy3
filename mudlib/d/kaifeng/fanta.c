// Room: /d/kaifeng/fantai.c

inherit ROOM;

void create()
{
	set("short", "繁塔");
	set("long", @LONG
繁塔建于繁台之上,这是一座六角九层，80余米高的巨型佛塔，极为
壮观。有诗曰『台高地迥出半天,了望皇都十里春』,塔高31.8米，青砖砌成
每砖雕有精美的佛像，共有108种，7000余尊。塔内存有178块佛经碑刻.
LONG
	);
	set("outdoors", "/d/kaifeng");
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"zhulin",
  "west" : __DIR__"jiedao2",
]));
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  "/d/suzhou/npc/eba.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
