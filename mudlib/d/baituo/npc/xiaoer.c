inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/��С��"; }
void create()
{
#include <kzznpc.h>

	set("area_name","����ɽ�Ƶ�");
	set("area_file","/d/baituo/jiudian.c");
	set("vendor_goods", ([
                "����":"/d/baituo/obj/sherou",
        ]));
	setup();
}
void init()
{
        object ob;
        ob = this_player();

        ::init();
        if( interactive(ob) && !is_fighting() )
               {
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
                        say( "��С��Ц�����˵������λ" + RANK_D->query_respect(ob)
                                + "�������ȱ��ƣ�ЪЪ�Ȱɡ�\n");
                        break;
                case 1:
                        say( "��С���ò����ϵ�ë��Ĩ��Ĩ�֣�˵������λ" + RANK_D->query_respect(ob)
                                                        + "��������������������\n");
                        break;
        }

}