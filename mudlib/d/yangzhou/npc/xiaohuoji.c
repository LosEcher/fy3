inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/�������"; }
void create()
{
#include <kzznpc.h>
 set("long","���䲻�󣬵��ܴ�׳��С���\n");
set("skills_lv",10);
set("exp_lv",10);
        setup();
carry_object("/obj/cloth")->wear();
add_money("coin",30);
}
void init()
{       
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
add_action("do_vendor_list","list");
}

void greeting(object ob)
{
 if( !wizardp(ob) )
    {
        if( !ob || environment(ob) != environment() ) return;
        switch( random(2) ) {
                case 0:
                        say( "С���Ц������λ" + RANK_D->query_respect(ob)+ 
"�������þưɣ�\n");
                        break;
                case 1:
                        say( "С��Ʒ��¾ƺ���˵������λ" + RANK_D->query_respect(ob)
                                + "������������\n");
                        break;
                           }
   }
else{
 say("С���������Ц��: ��" + 
ob->query("name")+RANK_D->query_respect(ob) + "�����������յ��ĺþưɡ�\n");
say("С��Ƶݸ���һ���þơ�\n");
clone_object("/d/yangzhou/npc/obj/jiuhu")->move(ob);
    }
}

