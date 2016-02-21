inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/���в�"; }
void create()
{
#include <kzznpc.h>

	set("area_name","��������԰");
	set("area_file","/d/yangzhou/tingxiaoyuan.c");

 set("long","���䲻�󣬵�����Ǯ�Ƶ������ˡ�\n");
        setup();
carry_object("/obj/cloth")->wear();
add_money("gold",1);
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
                        say( "���в�Ц������λ" + RANK_D->query_respect(ob)+ 
"�������þưɣ�\n");
                        break;
                case 1:
                        say( "���вƷ��¾ƺ���˵������λ" + RANK_D->query_respect(ob)
                                + "������������\n");
                        break;
                           }
   }
else{
 say("���в�������Ц��: ��" + 
ob->query("name")+RANK_D->query_respect(ob) + "�����������յ��ĺþưɡ�\n");
say("���вƵݸ���һ���þơ�\n");
clone_object("/d/yangzhou/npc/obj/jiuhu")->move(ob);
    }
}

