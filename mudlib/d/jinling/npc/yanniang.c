// jingling ����

inherit NPC;
inherit F_VENDOR;
#include <ansi.h>

void create()
{
        set_name("����", ({"yan niang","yan"}));
        set("long",
             HIM"���²�ȹ��ȴ�ڸǲ�ס���ľ�����ò������һ��������\n
                 ����ʹ�����崺�磬����˿�����\n" NOR);
        set("title", HIC "������ʩ" NOR);
        set("gender", "Ů��");
        set("age", 22);
        set("rank_info/respect", "����");                     
        set("combat_exp",10000);
        set_temp("apply/defense",10);
        set("vendor_goods", ([
                "��ˮ����" : __DIR__"obj/qs-doufu",
                "ˮ������" : __DIR__"obj/sj-doufu",
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
if(!userp(ob)) return;
message_vision("$N��$n��ȻһЦ.\n",this_object(),ob );
if(ob->query("id")=="cyj")
{
          ob->set("qi",10000);
          ob->set("jing",10000);
          command("say �ޣ�"+ob->query("name")+"���ӻ����ˡ�");
}
else
{
if (ob->query("gender") == "����"||ob->query("gender") == "����")
       message_vision(
        HIM"$Nվ����̨ǰ��զһ���������ɵô��ˣ�����ֻ��\n
һ����ͷ�����侹�����Ů�ӣ��������ף������޲��ɷ��\n
�ĵ��������ˣ������ˣ�����������������Ů?\n" NOR,ob,this_object());
        command("say "+"��λ" + RANK_D->query_respect(ob)+"����ӭ���٣�����Ҫ��ʲô��");
        command("say "+"��λ" + RANK_D->query_respect(ob)+"������Ķ�����ˬ�ɿڣ������ԡ����Ǳ����ز�����Ŷ��");
}

}

