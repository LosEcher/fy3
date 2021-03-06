// Room: /d/suzhou/wuxue.c

inherit ROOM;

void create()
{
	set("short", "无雪堂");
	set("long", @LONG
堂内布置很是典雅，一看就知主人是经过精心设计的。祭坛上挂着一幅古画，
只见画中一位英气逼人的中年书生，正遥视远方，眉宇之间透出淡淡哀愁，似乎
感叹时运不济。坛前香炉中冒出缕缕青烟，让你浮想连篇。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"west":__DIR__"qongxiang",
		"south":__DIR__"ru10",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
