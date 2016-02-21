// thd:in_road3.c

inherit ROOM;

void create()
{
      set("short", "林间小路");
	set("long", @LONG
这是条林间小路。有几所小屋点缀在桃花丛中，似乎更加增添了桃花
的风采。你西面的小屋特别的静，什么声音都没有，进进出出的人也都放
轻了脚步，似乎是怕吵醒什么人。到是北边的小屋时不时的有点吸气之声
，好象是什么人在做深呼吸。
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "桃花影弱飞神剑，碧海潮生按玉箫。\n",
//    ]));

      set("exits", ([ /* sizeof() == 3 */
	    "north" : __DIR__"practise_room",
	    "east" : __DIR__"square",
	    "west" : __DIR__"sleeproom",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

