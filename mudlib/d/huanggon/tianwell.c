// Room: /d/huanggon/tianwell.c

inherit ROOM;

void create()
{
	set("short", "甜水井胡同");
	set("long", @LONG
京城中的一条小胡同,七拐八绕的,也不知有多长,胡同口子边挺了幅
馄饨担子,那是个两头的挑子,一端是个小火炉,上边是口锅和一些调料.另
一端摆了碗筷,和水桶.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/lilishi.c" : 1,
]));
	set("outdoors", "/d/huanggon");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"echangan",
  "north" : __DIR__"qingmutang",
]));

	setup();
}

int valid_leave(object me,string dir)
{
	string bh;
	object npc;

	bh=(string)me->query("banghui");
	npc=present("li lishi",this_object());
	if(( !bh || bh!="天地会")&& dir=="north" && objectp(npc))
	return notify_fail("李力世冲你一瞪眼道：干什么的！\n");
	return ::valid_leave(me,dir);
}

