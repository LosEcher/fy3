// music yangzhou's ѩ��
#include <ansi.h>

inherit ITEM;

void create()
{
        set_name(HIC"������Ѫ��"NOR, ({ "yu","biyu","qinglong" }) );
        set("long", "һ�����,������Ȼ�γ�һ��ѩ��ķ�����\n");
        set("unit", "��");
        set("weight", 100);
        set("value", 10000000);
        set("money_id",1);
}

void init()
{
        add_action("do_use", "use");
}

int do_use(string arg)
{
        object ob;
        if( !id(arg) ) return notify_fail("��Ҫ��ʲ�᣿\n");
if( living(this_player()) ==0 ) return 0;
        ob=this_player();
        ob->set("kee",(int)ob->query("max_kee"));
        ob->set("gin",(int)ob->query("max_gin"));
        ob->set("sen",(int)ob->query("max_sen"));
        ob->set("eff_kee",(int)ob->query("max_kee"));
        ob->set("eff_gin",(int)ob->query("max_gin"));
        ob->set("eff_sen",(int)ob->query("max_sen"));

        ob->set("force", (int)ob->query("max_force"));
        ob->set("food",((int)ob->query("str")-10)*10+200);
        ob->set("water",((int)ob->query("str")-10)*10+200);
        ob->set_temp("windnod",1);
        write("[1;33m�����еı��񷢳�ѩ��Ĺ�ã��\n[0;37m");
        message("vision", HIY + ob->name() + 
"���еı��񷢳�ѩ��Ĺ�,һ��������\n"+NOR,
                environment(ob), ob);
        return 1;
}
