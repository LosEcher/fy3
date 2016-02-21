inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/�ܸ���"; }
void create()
{
#include <kzznpc.h>

        set("long",
                "���������Ц�ݣ�������ͷȴ���ѵúܡ�\n"+
                "��Ϊ��ݵ��ϰ壬�����һ��û�¸ɵ����ļһ����һ��\n"+
                "��Ϣ������ͨ��\n");
	set("inquiry", ([
                "�¼�" : "�¼��ǳɶ��Ĵ󻧣�����ȴ�����Ǩ���ģ�\n"+
                         "��˵�Ǽ������ڽ����д����������Ϊ�˱ܳ𵽳ɶ��ġ�\n",
        ]));
	set("vendor_goods", ([
                "������":__DIR__"obj/longhucui",
        ]));
	set("area_name","�ɶ�������");
	set("area_file","/d/chengdu/cdchaguan.c");
	setup();
carry_object("/obj/cloth")->wear();
add_money("silver",4);
}
void init()
{
        object ob;
        
        ::init();
        if (interactive(ob = this_player()) && !is_fighting()) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
        add_action("do_vendor_list", "list");
}

void greeting(object ob)
{
        if (!ob || environment(ob) != environment())
                return;
        switch(random(2)) {
        case 0 :
                say("�ܸ���Ц���е�˵������λ" + RANK_D->query_respect(ob) +
                        "����������ȱ��Ȳ衣\n");
                break;
        case 1 :
                say("�ܸ���˵����Ӵ����λ" + RANK_D->query_respect(ob) + 
                        "�����˰��������и�ը�õ����㻨�����ۡ�\n");
                break;
        }
}



