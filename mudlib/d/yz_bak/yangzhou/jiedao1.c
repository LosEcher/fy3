// Room: /d/yangzhou/jiedao1.c

inherit ROOM;

void create()
{
	set("short", "街道");
	set("long", @LONG
	你走在扬州城的一条小街上，因地临荒郊，所以很少有人
来往，商店和人家也稀稀落落。偶尔有人经过，也是行色匆匆。向
北就到扬州的西北城郊了。西边丁丁当当是家打铁铺。

LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/yangzhou");
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"yz-x1",
  "west" : __DIR__"datiepu",
  "south" : __DIR__"jiedao2",
  "east" : __DIR__"gongyuan",
]));
	set("objects", ([ ]));

	setup();
	replace_program(ROOM);
}
