// music yangzhou's �˲�

#include <ansi.h>

inherit ITEM;

void create()
{
        set_name("�˲�", ({ "renshen","shen" }) );
        set("long","һ�ֹ��ص��̲�ҩ�ġ�\n");
        set("unit", "��");
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
        ob->add("max_kee",1);
        ob->set("kee",(int)ob->query("max_kee"));
        ob->set("eff_kee",(int)ob->query("max_kee"));

        ob->set("force", (int)ob->query("max_force"));

        write("[1;33m�������һ���˲Ρ�\n[0;37m");

        message("vision", HIY + ob->name() + 
"���³�����һ���˲Σ�������һ�������о��ö��ˡ�\n"+NOR,
                environment(ob), ob);
        destruct(this_object());
        return 1;
}
