//chenglouup
inherit ROOM;
void create()
{
  set ("short", "城楼二层");
  set ("long", @LONG
一登上城楼，城外西面的一大片的开阔地尽收眼底，要是在这里布上弩兵，要是有
谁想攻进城来简直比登天还难。
LONG);

set("outdoors","/d/zhongzhou");

  set("exits", ([  
    "down" : __DIR__"chenglou",
 
]));
	set("objects",([
		"/npc/man6":2,
	]));
	 setup();
        replace_program(ROOM);
}
