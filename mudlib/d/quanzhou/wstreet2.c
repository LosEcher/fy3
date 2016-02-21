// Room: /d/quanzhou/wstreet2.c

inherit ROOM;

void create()
{
	set("short", "西街");
	set("long", @LONG
这里是泉州的西街,街道两边的房子都比较古老.大多是各类店铺,当
然也有不少民居,奇怪的是,有许多人胳膊下夹着包袱进出街北的一间铺子
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"wstreet1",
  "west" : __DIR__"wstreet3",
  "north" : __DIR__"dangpu",
]));
	set("outdoors", "/d/quanzhou");

	setup();
	replace_program(ROOM);
}
