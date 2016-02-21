#include <ansi.h>

inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/������"; }
void create()
{
#include <kzznpc.h>

	set("area_name","�ɶ����Ŷ�����");
	set("area_file","/d/chengdu/chenmapo.c");
	set("ziyuan","����");
	set("jizhi",10);
	set("kaifa",70);

	 set("vendor_goods",([
	  "���Ŷ���":__DIR__"obj/doufu",
	  ]));
set("inquiry", ([
"���Ŷ���" : "�������ǳɶ����ز������ݵú�Ŷ��\n",
]));
        setup();
	carry_object("/d/obj/cloth/skirt")->wear();
	add_money("coin",40);
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
                say("������Ц�����˵������λ" + RANK_D->query_respect(ob) +
                        "���������\n");
                break;
        case 1 :
                say("������˵����Ӵ����λ" + RANK_D->query_respect(ob) + 
                        "�����˰�����������Ŷ���Ӳ�ǰ��ݵúܣ�\n");
                break;
        }
}


#include <die.h>


