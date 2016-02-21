// Room: /d/huashan/sheshen.c

inherit ROOM;

void create()
{
	set("short", "舍身崖");
	set("long", @LONG
这是一段极窄极险的山崖，四周云雾飞绕，下面渊深无底。如不小心
，一失足掉下去，只怕连骨头都找不到。边上有个小山洞(dong)。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xx");
	set("objects", ([ /* sizeof() == 1 */
//		__DIR__"npc/referee" : 1,
]));
	set("item_desc", ([ /* sizeof() == 1 */
  "dong" : "紧靠飞崖下石壁的小洞，黑呼呼的不知有多深。
",
]));
	set("exits", ([ /* sizeof() == 1 */
  "eastdown" : __DIR__"canglong",
]));

	setup();
	replace_program(ROOM);
}
