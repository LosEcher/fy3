// yaorong hangzhou's 
#include <ansi.h>

inherit ITEM;

void create()
{
        set_name(RED"��ºҶ"NOR, ({ "leaf","yezi"}) );
        set("long", "һ������ҩ�ġ�\n");
        set("unit", "��");
        set("weight", 100);
        set("value", 5000);
}

void init()
{
        add_action("do_eat", "eat");
}

int do_eat(string arg)
{
        object ob;
        if( !id(arg) ) return notify_fail("��Ҫ��ʲ�᣿\n");
if( living(this_player()) ==0 ) return 0;
        ob=this_player();
        ob->set("kee",(int)ob->query("max_kee"));
        ob->set("gin",(int)ob->query("max_gin"));
//	 ob->add("max_sen",5);
        ob->set("sen",(int)ob->query("max_sen"));

        ob->set("food",((int)ob->query("str")-10)*10+200);
        ob->set("water",((int)ob->query("str")-10)*10+200);

        write("[1;33m�����һ����Ҷ������Ϊ֮һ��\n[0;37m");

        message("vision", HIY + ob->name() + 
"����һ����Ҷ������Ϊ֮һ��\n"+NOR,
                environment(ob), ob);
        destruct(this_object());
        return 1;
}
