// Room: bianj037.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "������");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 2 */
            "northeast"  : __DIR__"bianj031",
            "west"  : __DIR__"bianj038",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
