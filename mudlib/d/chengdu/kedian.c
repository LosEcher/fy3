// by enter

#include <ansi.h>

inherit ROOM;

void create()
{
        set("short", "假日客店");
        set("long", 
"这里是一家老字号的客栈，崭新的桌椅排得整齐齐，隔着一\n"
"层屏风隐隐传来一阵阵锅铲的声音，大概是客栈的厨房，靠南边\n"
"的墙壁边上有一道通往二楼的楼梯，门口一个烫金的大牌匾上写\n"
"着四个大字“假日客栈”。"HIG"里面还有个后院，备有马车，可以直\n"
"接回扬州去。(goyangzhou)"NOR"墙上还有个牌子。(paizi)\n"
        );

        set("valid_startroom", 1);
        set("no_sleep_room",1);

        set("item_desc", ([
                "paizi" : "假日客店，全国驰名，安全舒适，宾至如归。\n",
        ]));

        set("objects", ([
                __DIR__"npc/qiuwa" : 1,
        ]));

        set("exits", ([
                "south" : __DIR__"dongjie1",
                "up" : __DIR__"kedian2",
        ]));

        setup();
}

int valid_leave(object me,string dir)
{
   object ob;

   ob=present("qiu wa",this_object());
   if (dir=="up" && ob && !me->query_temp("rent_paid"))
        return notify_fail("秋娃道：住店的话要给我(give)二两纹银，同帮弟兄只要一半吧。\n");
   if ( dir=="south" && me->query_temp("rent_paid"))     me->delete_temp("rent_paid");
   return ::valid_leave(me,dir);
}

void init()
{
	add_action("to_yangzhou","goyangzhou");
}

int to_yangzhou()
{
	object npc,me=this_player();
	string bh;

	npc=present("qiu wa",this_object());
	if( !objectp(npc))	return notify_fail("秋娃不在这儿，呆会再说吧。\n");
	if( !living(npc))	return notify_fail("你得先把秋娃弄醒。\n");
	bh=(string)npc->query("banghui");
	if( bh && bh==(string)me->query("banghui"))	{
		tell_object(me,"秋娃说：正好后院有车到扬州，带你一程吧.\n");
		say(me->query("name")+"跟着秋娃到后院了。\n");
		me->move(__DIR__"houyuan");
	}
	else 	tell_object(me,"秋娃道：俺正忙着呢，下次一定带你去扬州。\n");
	return 1;
}

