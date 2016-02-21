// thd:songshu.c
// 97.7.14 by Aug

inherit ROOM;

void create()
{
      set("short", "松树");
	set("long", @LONG
这是棵长在悬崖峭壁上的松树。某年某月某日某时某刻，一阵风把弹
指峰上的那棵大松树的一颗种子吹到了这里。它在这里发芽，生长，终于
长成了一颗大松树。它在空中横卧着，好象是只大手，它还真的救过不少
轻身者的性命呢。你抬头向上看，这里距离忘情崖还很远，还好你在松树
旁看到一棵爬山虎直通崖顶，只是不知道它是不是够结实。松树的东边你
隐隐约约的能看到一个山洞。
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "桃花影弱飞神剑，碧海潮生按玉箫。\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
          "up" : __DIR__"chiff",
          "east" : __DIR__"music_hole",
	]));
      
	set("outdoors", "thd");

	setup();
//	replace_program(ROOM);
}

int valid_leave(object me, string dir)
{
	object room,ob;
	int i;

	if(dir!="up")  return ::valid_leave(me, dir);  

	room=load_object(__DIR__"chiff");

	i=0;
/*	foreach(ob in all_inventory(environment(room)) ) 
      {
	  if( ob==this_object()
	    ||!ob->is_character()) continue;
	  i=1;
	}
*/

	write("你顺这爬山虎爬了上去，你爬啊爬啊终于爬到了忘情崖。\n");

	if(i==1)
	    return notify_fail(
"你往崖上一看，看到有人在上面。
你想：就这样爬上去不大好吧，别人还当我是贼呢！
于是你又顺着原路爬了下来。\n");
	else
		return ::valid_leave(me, dir);  
}

