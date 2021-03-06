// thd:north.c
// 97.7.18 by Aug
#include <localtime.h>

inherit ROOM;

void create()
{
      mapping gt;
 	
      set("short", "外阵北");
	set("long", @LONG
现在，你所置身处是一个桃花的海洋。你整个人都已经被桃花所包围
。在没有尽头的桃花丛中，可以看到曲曲折折的很多条道路，使你不知到
底哪条才是正确的道路。你回身一看，你身后也出现了许多小路。糟糕！
你甚至已经分辨不清来路了。看来只有走一步算一步了，要是你实在走不
出来，那就只有喊(yell)要出来了，说不定会有人来救你。
LONG
	);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/jiading" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"bulletin" : "...\n",
//    ]));

      gt = NATURE_D->game_time(1);
      if((gt[LT_HOUR] <11 )&&(gt[LT_HOUR] >=8)) 
      {
	  set("exits", ([ /* sizeof() == 8 */
		"east" : __DIR__"east1",
		"west" : __DIR__"west1",
		"north": __DIR__"north1",
		"south": __DIR__"neizhen",
       	"northeast": __DIR__"nteast1",
            "northwest": __DIR__"ntwest1",
            "southeast": __DIR__"steast1",
            "southwest": __DIR__"stwest1",
	  ]));
      }
      else
      {
	  set("exits", ([ /* sizeof() == 8 */
		"east" : __DIR__"east1",
		"west" : __DIR__"west1",
		"north": __DIR__"north1",
		"south": __DIR__"south1",
       	"northeast": __DIR__"nteast1",
            "northwest": __DIR__"ntwest1",
            "southeast": __DIR__"steast1",
            "southwest": __DIR__"stwest1",
	  ]));
      }

	set("outdoors", "thd");

	setup();
//	replace_program(ROOM);
}

void init()
{
	add_action("do_yell", "yell");
}

int do_yell(string arg)
{
	object me;
	int i;

      if((arg!="out")&&(arg!="出去")) return 0;

	me=this_player();	
      message_vision(
"
$N看到一个哑仆走了过来，向$N打着手势，$N也不懂他到底是什么意思。
突然他转身向外走去，$N一下子明白了他是要带你出阵，赶紧跟了上去。

你跟随着这个哑仆在桃花树中穿来穿去，虽然$N很想记住路途，可几个
弯一打，$N是说什么都记不清路了。

你跟着哑仆走啊，走啊，路好象永远没有尽头。突然哑仆停下了脚步。
你定睛一看，已经到了桃花阵外。
好险啊！你花费了大半条命，终于出了桃花阵。

\n", me);

	me->move(__DIR__"wroad"); 

	i=me->query("max_kee");
	me->set("eff_kee", me->query("eff_kee")-(i/20)-random(i/5) ); 
	if(me->query("kee")>me->query("eff_kee")) 
		me->set("kee",me->query("eff_kee"));

	return 1;
}
