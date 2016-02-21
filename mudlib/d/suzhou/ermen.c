// Room: /u/o/oldsix/room/bigdoor2.c

inherit ROOM;

void create()
{
	set("short","二门");
	set("long", @LONG
这里是出入苏州府的必经之路。两边空空荡荡，只在门旁放着两盆“铁树
”，门上四个大字“衙深似海”。东面通往苏州府大堂，向西可离开苏州府。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"west" :__DIR__"damen",
	"east" :__DIR__"shiziru",
]));
	set("no_clean_up", 0);
	set("outdoors","room");
	setup();
	replace_program(ROOM);
}
