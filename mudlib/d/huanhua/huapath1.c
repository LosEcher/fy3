// Room: /d/new/huanhua/huapath1.c

inherit ROOM;

void create()
{
	set("short", "花径");
	set("long", @LONG
一条细小石子铺就的小路,虽然并不宽阔,但打扫得十分干净,给人
小巧玲珑的感觉,向北有一座大厅.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/binu.c" : 2,
]));
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"huapath2",
  "south" : __DIR__"huapath",
  "west" : __DIR__"7qulang",
]));
	set("outdoors", "/d/new");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
