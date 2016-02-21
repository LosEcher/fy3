#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "戏台");
	set("long", @LONG
这里是戏台，虽然有些小，但是很干净。一块大红的幕帘挡住了
后台，一个戏子正在拿腔拿调的表演。你一踏上戏台，情不自禁地就唱
起歌来。
LONG );
	set("exits", ([
		"down" : __DIR__"xiyuan",
	        "southdown":__DIR__"houtai",
	]));
	set("objects", ([
		"/d/city2/npc/xizi": 1,
	]));
	setup();
}

int valid_leave(object me, string dir)
{
    int i;
if(dir=="down")
{
message_vision(
"\n$N一曲唱罢，一揖作礼，身子平飞，从台上跃出，双手兀自\n"+
"抱拳向观众行礼，姿态美妙，众人齐声喝采。\n",this_player());
i=this_player()->query("mingwang");
if(i<200) 
{
i=i+100;
this_player()->set("mingwang",i);
message_vision(HIC "\n$N的名望提高了。\n" NOR,this_player());
}
}
this_player()->delete_temp("hastryup");
return ::valid_leave(me, dir);
}
