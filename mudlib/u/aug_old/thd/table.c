// thd:table.c

inherit ROOM;

void create()
{
      set("short", "啸天台");
	set("long", @LONG
这里是啸天台。此处海阔天空，你到了这里心胸也不由得开阔了起来
，似乎此时天地见再也没有什么烦恼了。在这里只有一块光亮如镜的巨石
，从那里你只能看到一个虚无缥缈的你。是啊，人生本就是虚无缥缈的，
我们又何必在乎那俗世见的一得一失呢？从这里向东可以见到一个瀑布。
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "桃花影弱飞神剑，碧海潮生按玉箫。\n",
//    ]));

      set("exits", ([ /* sizeof() == 3 */
          "southwest" : __DIR__"hill7",
          "northup" : __DIR__"hill8",
          "east" : __DIR__"fall",
  	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

