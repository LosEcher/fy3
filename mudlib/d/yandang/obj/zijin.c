inherit ITEM;
void create()
{
        set_name("�Ͻ���絤", ({ "zijindan","zijin","dan" }) );
        set("long", "���������ó�Ʒ�ĵ�ҩ,�л�Ѫͨ��֮Ч.\n");
        set("unit", "��");
        set("weight", 100);
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
if( living(this_player()) ==0 ) return 0;
        ob=this_player();
        ob->set("kee",(int)ob->query("max_kee"));
        ob->set("eff_kee",(int)ob->query("max_kee"));
        ob->set("force", (int)ob->query("max_force"));
tell_object(ob,"������һ���Ͻ���絤,������������.\n");
        destruct(this_object());
return 1;
}
