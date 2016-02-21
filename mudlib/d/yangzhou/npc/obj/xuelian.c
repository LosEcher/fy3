// music yangzhou's 雪莲
#include <ansi.h>

inherit ITEM;

void create()
{
	set_name("雪莲",({"xue lian","lian","xue"}));
	set("long","一种贵重的滋补药材，可以恢复道行、内力、佛法。\n");
        set("unit", "颗");
        set("weight", 100);
	set("value",7000);
}

void init()
{
        add_action("do_eat", "eat");
}

int do_eat(string arg)
{
        object ob;
	ob=this_player();
	if(!living(ob))	return 0;

        if( !id(arg) ) return notify_fail("你要吃什麽？\n");
if ((int)time()-ob->query("oldsix_flag/eat_yao")<60)
return notify_fail("你刚吃过补药,连续吃身体受不了.\n");
	ob->set("atman",(int)ob->query("max_atman"));
	ob->set("force",(int)ob->query("max_force"));
	ob->set("mana",(int)ob->query("max_mana"));
ob->set("oldsix_flag/eat_yao",time());
	message_vision("$N吃下一颗天山雪莲，感觉好极了！\n",ob);
        destruct(this_object());
        return 1;
}
