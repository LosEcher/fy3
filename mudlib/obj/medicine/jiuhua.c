// jiuhua.c �Ż���¶��
// 97.9.6  by Aug

#include <ansi.h>

inherit ITEM;

void create()
{
        set_name(HIM"�Ż���¶��"NOR, ({ "jiuhua","wan" }) );
        set("long",
HIM"�Ż���¶�����ԡ���а����ҩʦ���ط����ɼ��������ҩ�ģ���ʱ����
���ƶ��ɵ���ҩ���ܴ����Ļָ�����������\n"NOR);
        set("unit", "��");
        set("weight", 50);
        set("value", 10000);
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

        write(HIM+"���ó�һ���Ż���¶�裬������У�������ȥ����ʱ��һ��ƮƮ����
�ĸо������ϲ�ʹ��ƣ���ƺ�һ���Ӷ���ʧ�ˡ�\n"NOR);

        message("vision", HIM + ob->name() + 
"�ó�һ���Ż���¶�裬������У�������ȥ����ʱ��һ��ƮƮ����
�ĸо������ϲ�ʹ��ƣ���ƺ�һ���Ӷ���ʧ�ˡ�\n"+NOR,
                environment(ob), ob);
        destruct(this_object());
        return 1;
}
