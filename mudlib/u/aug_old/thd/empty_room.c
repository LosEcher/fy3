// thd:empty_room.c
// 97.7.14 by Aug

inherit ROOM;

void create()
{
      set("short", "�շ���");
	set("long", @LONG
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

//      set("exits", ([ /* sizeof() == 1 */
//          "west" : __DIR__"jiulong_hole",
//	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

