// Room: /d/new/huanhua/yxiangge.c

inherit ROOM;

void create()
{
	set("short", "聆香阁");
	set("long", @LONG
这里水间旁的桂树，有六百多株，却有上五百多年的历史，草亭如 
盖映清流水阁就建于桂湖之上,丹桂飘香. 
LONG
	);
	set("objects", ([ /* sizeof() == 3 */
  __DIR__"npc/3yue3.c" : 1,
  __DIR__"npc/3yue2.c" : 1,
  __DIR__"npc/3yue1.c" : 1,
]));
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"hqiuqiao1",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
