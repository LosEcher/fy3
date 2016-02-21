// Room: /d/baituo/cave2.c

inherit ROOM;

void create()
{
	set("short", "洞顶");
	set("long", @LONG
这里是岩洞的顶部，空间很小，只有一点光亮。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"cave1",
]));
	setup();
}
void init()
{
        add_action("do_mo","mo");
        add_action("do_qiao","qiao");
        add_action("do_mo","search");
}
int do_mo()
{
        object me;
        me = this_player();
        if( me->is_busy() )
                return notify_fail("一共就这么大点地方，你还要往哪摸呀？\n");  
        message_vision("$N在黑暗中四处摸了摸。\n", me);
        me->add("kee",-30);
        me->start_busy(2);
        call_out("search",2, me);
        return 1;
}

int search()
{
        object me,ob;
        int kar;
        me = this_player();
        kar = (int)me->query("kar");
        if(random(200) < kar) 
        {
        tell_object(me, "你摸到洞内墙壁上有一整块石头有点松动，好象能撬开。\n");
        me->set("mark/find", 1);
        return 1;
        }
        tell_object(me, "你什么都没发现。 \n");
        return 1;
}

int do_qiao(string arg)
{
        object me,ob;
        me = this_player();
        if (me->query("mark/find"))
        {
        if (arg == "石壁")
                {
                if (me->query("kee")<200)return notify_fail("你使劲撬了撬石壁，但是没撬动，还是歇一会吧。\n");
         if (sizeof(children(__DIR__"obj/gshepi.c")) >1)
                return notify_fail("你用尽全身力气，大喝一声，撬开了那块松动的石壁，但是什么都没发生。\n");
        message_vision("$N用尽全身力气，大喝一声，撬开了那块松动的石壁，发现有张纸一样的东西掉了下来,你赶紧放在了怀里。\n",me);
        me->add("kee",-200);
        me->delete("mark/find");
       ob=new(__DIR__"obj/gshepi");
        ob->move(me);
return 1;
                }
        }
}

