// �����±�
#include <ansi.h>

inherit ITEM;

void create()
{
        set_name("�±�", ({ "yuebing"}) );
        set("long", "����įӢ�ۡ�������͸���ҵ����\n");
        set("unit", "��");
        set("weight", 500);
        set("value", 0);
        set("no_give",1);
        set("no_get",1);
        set("no_sell",1);
        set("no_get_from",1);
}

void init()
{
        add_action("do_eat", "eat");
}

int do_eat(string arg)
{
        object ob;
        if( !id(arg) ) return 0 ;
        if( living(this_player()) ==0 ) return 0;
        ob=this_player();
		ob->set("potential", ob->query("potential")+2000);
			ob->set("combat_exp",ob->query("combat_exp")+50000);

        ob->set("kee",(int)ob->query("eff_kee"));
        ob->set("gin",(int)ob->query("eff_gin"));
        ob->set("sen",(int)ob->query("eff_sen"));

        ob->set("force", (int)ob->query("max_force"));

        ob->set("food",((int)ob->query("str")-10)*10+200);
        ob->set("water",((int)ob->query("str")-10)*10+200);
        destruct(this_object());
        return 1;
}
