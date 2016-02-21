#include <ansi.h>

inherit ITEM;

void create()
{
	set_name("灵神散",({"lingshen san","san"}));
	set("unit","包");
	set("value",100);
	set("long","可以恢复少量神的药品。\n");
   setup();
}

int init()
{
   add_action("do_eat", "eat");
}

int do_eat(string arg)
{
   object me = this_player();
      if( living(this_player()) ==0 ) return 0;
   if(!id(arg))
       return notify_fail("你要吃什么？\n");
if ((int)time()-me->query("oldsix_flag/eat_yao")<60)
return notify_fail("你刚吃过补药,连续吃身体受不了.\n");
	me->receive_curing("sen",10);
	me->receive_heal("sen",10);
me->set("oldsix_flag/eat_yao",time());
	message_vision("$N吃下了一包灵神散，神色似乎有所恢复。\n",me);
	destruct(this_object());
	return 1;

}
