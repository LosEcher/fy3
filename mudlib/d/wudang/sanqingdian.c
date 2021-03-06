// Room: /u/xizhen/room/sanqingdian.c

inherit ROOM;

void create()
{
	set("short", "三清殿");
	set("long", @LONG
	这里是凌霄宫的三清殿，是武当派会客的地点。供着元始天尊、太上道
君和天上老君的神像，香案上香烟缭绕。靠墙放着几张太师椅，地上放着几个蒲
团。东西两侧是走廊，南边是练武的广场，北边是后院。
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/song" : 1,
  __DIR__"npc/guxu" : 1,
]));
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"xiuxishi",
  "east" : __DIR__"chufang",
  "south" : __DIR__"guangchang",
]));
	set("valid_startroom", 1);

	setup();
"/obj/board/wudangboard"->foo();
}

int valid_leave(object me,string dir)
{
	string fam;

	fam=(string)me->query("family/family_name");
	if( fam !="武当派" && (dir=="east" || dir=="west"))
		return notify_fail("你不是武当弟子，不能进去。\n");
	return ::valid_leave(me,dir);
}
