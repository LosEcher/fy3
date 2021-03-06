// Room: /d/suzhou/meizhuang/shufang.c

inherit ROOM;

void create()
{
	set("short", "书房");
	set("long", @LONG
这儿就是孤山梅庄弟子的书房。庄主们在此留有不少梅庄武功的书籍，
以供弟子学习使用。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"shibanlu1",
]));
	set("objects",([
		__DIR__"npc/obj/dodge"+random(3):1,
		__DIR__"npc/obj/force"+random(3):1,
		__DIR__"npc/obj/unarmed"+random(3):1,
		__DIR__"npc/obj/blade"+random(3):1,
		__DIR__"npc/obj/staff"+random(3):1,
		__DIR__"npc/obj/throw"+random(3):1,
		__DIR__"npc/obj/sword"+random(3):1,
]));
	set("no_clean_up", 0);

	setup();
}
int valid_leave(object me,string dir)
{
	object b1,b2,b3,b4,b5,b6,b7;
	b1=present("bufa",me);
	b2=present("neigong",me);
	b3=present("quanfa",me);
	b4=present("daofa",me);
	b5=present("jianfa",me);
	b6=present("zhangfa",me);
	b7=present("shoufa",me);
	if(b1||b2||b3||b4||b5||b6||b7)
	return notify_fail("你不能把书带走！\n");
	return ::valid_leave(me,dir);
}
