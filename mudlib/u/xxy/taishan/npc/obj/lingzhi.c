//music yangzhou's ��֥

#include <ansi.h>

inherit ITEM;

void create()
{
        set_name("��֥", ({ "lingzhi","ling","zhi" }) );
        set("long", "һ�ֹ���ҩ�ġ�\n");
        set("unit", "֧");
        set("weight", 50);
        set("value", 1000);
}

void init()
{
        add_action("do_eat", "eat");
}

int do_eat(string arg)
{
        object ob;
        if( !id(arg) ) return notify_fail("��Ҫ��ʲ�᣿\n");

        ob=this_player();
        ob->add("max_gin",1);
        ob->set("gin",(int)ob->query("max_gin"));
        ob->set("eff_gin",(int)ob->query("max_gin"));
 
        ob->set("atman", (int)ob->query("max_atman"));
    
        write("[1;33m�����һ֧��֥���о������ö��ˡ�\n[0;37m");

        message("vision", HIY + ob->name() + 
"�����һ֧��֥������ȥ�о������ö��ˡ�\n"+NOR,
                environment(ob), ob);
        destruct(this_object());
        return 1;
}
