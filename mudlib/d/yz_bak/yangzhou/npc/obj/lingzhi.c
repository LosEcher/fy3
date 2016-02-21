//music yangzhou's 灵芝

#include <ansi.h>

inherit ITEM;

void create()
{
	set_name("灵芝",({"ling zhi","ling","zhi"}));
	set("long","一种名贵药材，可以让你的身体达到最佳状态。\n");
        set("unit", "支");
        set("weight", 50);
	set("value",10000);
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

	ob->set("gin",(int)ob->query("max_gin"));
	ob->set("eff_gin",(int)ob->query("max_gin"));
	ob->set("kee",(int)ob->query("max_kee"));
	ob->set("eff_kee",(int)ob->query("max_kee"));
	ob->set("sen",(int)ob->query("max_sen"));
	ob->set("eff_sen",(int)ob->query("max_sen"));
	ob->set("atman",(int)ob->query("max_atman"));
	ob->set("force",(int)ob->query("max_force"));
	ob->set("mana",(int)ob->query("max_mana"));
ob->set("oldsix_flag/eat_yao",time());
	message_vision("$N吃了一支灵芝，感觉爽极了。\n",ob);
        destruct(this_object());
        return 1;
}
