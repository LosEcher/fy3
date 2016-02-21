// Room: /d/suzhou/chufang.c

inherit ROOM;

void create()
{
	set("short", "厨房");
	set("long", @LONG
屋内炊烟缭绕蒸气腾腾，一股香气扑面而来。对面的灶台上支着十来口大锅，
正冒着股股热气。大师傅们也各忙各的，根本就没有注意到有人进来。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"east" :__DIR__"lianwuchang",
]));
	set("objects",([
		__DIR__"npc/dashifu": 1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
