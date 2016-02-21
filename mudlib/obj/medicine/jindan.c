// jindan.c ��
#include <ansi.h>

inherit ITEM;

void create()
{
        set_name("��", ({ "jindan","dan" }) );
        set("long", "һ���õ������ƵĽ𵤡�\n");
        set("unit", "��");
        set("weight", 90);
        set("value", 500);
}

void init()
{
        add_action("do_eat", "eat");
        add_action("do_eat", "chi");
        add_action("do_eat", "tun");
}

int do_eat(string arg)
{
        object ob;
        if( !id(arg) ) return 0;
        
        ob=this_player();
        if( living(this_player()) ==0 ) return 0;
        ob->set("kee",(int)ob->query("eff_kee"));
        ob->set("gin",(int)ob->query("eff_gin"));
        ob->set("sen",(int)ob->query("eff_sen"));

//        ob->set("atman", (int)ob->query("max_atman"));
//        ob->set("force", (int)ob->query("max_force"));
//        ob->set("mana", (int)ob->query("max_mana"));

        ob->set("food",((int)ob->query("str")-10)*10+200);
        ob->set("water",((int)ob->query("str")-10)*10+200);

        write("[1;33m�����½𵤣����ü�������һɨ���գ�\n[0;37m");

        message("vision", HIY + ob->name() + 
"���½�,����һˬ.\n"+NOR,
                environment(ob), ob);
        destruct(this_object());
        return 1;
}
