// Room: /d/huanggon/gardon.c

inherit ROOM;

void create()
{
	set("short", "王府花园");
	set("long", @LONG
在满眼的奇花异木中,一座小巧的凉亭在几株芭蕉间挑起,朱红的栏杆
间白玉石的桌椅特别抢眼.康亲王喜欢在此饮酒赏花,再让两个戏子在旁唱
些小曲,是他最大的爱好.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/wangfuyahuan.c" : 1,
]));
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"tingyuan",
]));
	set("outdoors", "/d/huanggon");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
