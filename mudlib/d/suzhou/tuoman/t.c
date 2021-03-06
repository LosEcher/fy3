// Room: /d/suzhou/tuoman/tuoman.c

inherit ROOM;

void create()
{
	set("short", "曼陀山庄");
	set("long", @LONG
一眼望将出去，都是红白缤纷的茶花，不见房屋。山茶花以云南所产者最
为有名，世间称之为“滇茶”。山茶花又名玉茗，另有个名字叫作曼陀罗花。
此庄以曼陀为名，想必有不少精品。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"down":__DIR__"huan",
		"north":__DIR__"hua1",
]));
	set("objects",([
		__DIR__"npc/yahuan":1,
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
