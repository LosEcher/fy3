// mianju.c ��Ƥ��� 
#include <ansi.h>
inherit ITEM;

void create()
{
        set_name(GRN"��Ƥ���"NOR, ({ "renpi mianju", "mianju" }) );
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", GRN"��Ϸ�õ���Ƥ��ߡ���������װ��(zhuangban)��\n");
		set("value" , 100000);
  
        }
        setup();
}

void init()
{
        add_action("do_zhuang", "zhuangban");
}

int do_zhuang(string arg)
{
    object me,ob,who,*all;
        int i;

    me=this_player();
    seteuid(geteuid(me));

        all = users();

        if (!arg)
                return notify_fail("�����װ˭��\n");
        if (arg == "none" || arg == "cancel") {
                this_player()->delete_temp("apply/name");
                this_player()->delete_temp("apply/id");
                this_player()->delete_temp("apply/short");
                this_player()->delete_temp("apply/long");
                message_vision("$N������ȡ����һ����Ƥ��ߡ�\n", this_player());
                return 1;
        }

        for(i=0; i<sizeof(all); i++)
        {
                if( arg == all[i]->query("name",1) || arg == geteuid(all[i]) )
                        ob = all[i];
        }

        if( !ob )
                return notify_fail("��Ҫװ��������ڲ�����Ϸ�У�\n");

        if (ob->is_ghost())
                return notify_fail("��Ҫ�����ˣ�̫�����˰ɣ�\n");

        if(objectp(who = present(arg, environment(this_player()))) )
                return notify_fail("����װ����������˼ң���̫������Ү��\n");
        write("�㿪ʼװ��" + ob->name() + "��\n");
        message_vision("$N������һ�ž��Ƶ���Ƥ��ߡ�\n", this_player());
        this_player()->set_temp("apply/name", ({ob->name()}));
        this_player()->set_temp("apply/id", ({ob->id()}));
        this_player()->set_temp("apply/short", ({ob->short()}));
        this_player()->set_temp("apply/long", ({ob->long()}));
        return 1;
}

