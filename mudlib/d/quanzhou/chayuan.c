// Room: /d/quanzhou/chayuan.c

inherit ROOM;

void create()
{
	set("short", "茶园");
	set("long", @LONG
清风拂面而过,送来一阵清香,你抬眼细看,这是一片茶园,如果你 
识货的话,会发现这就是有'绿叶红镶边,七泡有余香'之称的铁观音茶. 
远处隐隐露出一段蜿蜒的城墙. 
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/quanzhou");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"bei-door",
  "northwest" : __DIR__"bixiao-stone",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/chagirl.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
