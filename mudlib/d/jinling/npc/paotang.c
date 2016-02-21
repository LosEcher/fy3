// music   yangzhou's ��С��

inherit NPC;
inherit F_VENDOR;
#include <ansi.h>

void create()
{
        set_name("����",({"pao tang","pao","tang"}));
        set("gender", "����" );
        set("age",22);
        set("long",
                "����¥�������ģ��������ͷ�����ġ�\n");
        set("combat_exp",150);
        set("attitude", "friendly");
        set("rank_info/respect","С�ֵ�");
        set("vendor_goods", ([
                "���ڴ�" :__DIR__"obj/jiuhu",
                "�����Ź�" :__DIR__"obj/paigu",
                "�����з" :__DIR__"obj/pangxie",
                "���㻨����" :__DIR__"obj/huasheng",
        ]));
        setup();
}

void init()
{       
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
        add_action("do_vendor_list", "list");
}

void greeting(object ob)
{

        if( !ob || environment(ob) != environment() ) return;
        switch( random(2) ) {
                case 0:
                message_vision("�����Ŀ첽��ǰ������λ"+
                RANK_D->query_respect(ob)+"���Щʲô��\n",ob);
                        break;
                case 1:
                message_vision("������������$N������$N��ˡ�\n",ob);
                        break;
                           }
}
