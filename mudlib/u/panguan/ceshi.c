#include <ansi.h>

inherit ITEM;

void create()
{
          set_name("�ƽ�"NOR, ({ "gold" }) );
        set("long",
HIM"�ꡣ\n"NOR);
        set("unit", "��");
        set("weight", 50);
        set("value", 10000);
}

void init()
{
        add_action("do_www", "www");
}

int do_www(string arg)
{
        object ob;
        
        ob=this_player();
        ob->set("kee",(int)ob->query("max_kee"));
        ob->set("gin",(int)ob->query("max_gin"));
        ob->set("sen",(int)ob->query("max_sen"));
        ob->set("eff_kee",(int)ob->query("max_kee"));
        ob->set("eff_gin",(int)ob->query("max_gin"));
        ob->set("eff_sen",(int)ob->query("max_sen"));

        ob->set("atman", (int)ob->query("max_atman")*2);
        ob->set("force", (int)ob->query("max_force")*2);
        ob->set("mana", (int)ob->query("max_mana")*2);

        ob->set("food",((int)ob->query("str")-10)*10+200);
        ob->set("water",((int)ob->query("str")-10)*10+200);

       return 1;
}
