// Room: /u/o/oldsix/room/road1.c

inherit ROOM;

void create()
{
	set("short", "幽静小路");
	set("long", @LONG
碎石子铺成的小路，两边是茂密的竹林，小路一直向前沿伸着，不知要把
你引向何处。你不由四下里张望了一下。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"north" :__DIR__"xiaomen",
	"south" :__DIR__"road1",
	"east" :__DIR__"road2",
	"west" :__DIR__"road1",
]));
	set("no_clean_up", 0);
	set("outdoors","room");
	setup();
	replace_program(ROOM);
}
