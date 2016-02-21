// Room: /d/baituo/xia.c

inherit ROOM;

void create()
{
	set("short", "悬崖下");
	set("long", @LONG
这里是悬崖下边，附近长满了野花野草。
LONG
	);
 set("objects",([
      __DIR__"npc/snake" : 2,
      ]));
	set("no_clean_up", 0);

	setup();
}

void init()
{
        add_action("do_bo","bo");
}
int do_bo(string arg)
{
        object me,ob,sn;
        me = this_player();
        if (arg != "野草") return 0;
        if (me->query("str") < 10)
                return notify_fail("你使劲拨了拨半人高的野草，累的要死，什么都没发现。\n");
        if (me->query_temp("mark/zhang"))
                return notify_fail("你拨了拨野草，啥都没发现。\n");
        if (me->query("gin") < 30 || me->query("kee") < 150 || me->query("sen") < 50)
                return notify_fail("你试着拨了拨野草，可是没什么力气了。\n");
        message_vision("$N使劲拨开了半人高的野草，发现了一根蓝色的钢杖。\n",me);
        me->set_temp("mark/zhang",1);
        me->add("gin",-30);
        me->add("kee",-150);
        me->add("sen",-100);
        ob=new(__DIR__"obj/tianmozhang");
        ob->move(me);
        return 1;
        }

