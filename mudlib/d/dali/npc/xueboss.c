inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/ѦĽ��"; }
void create()
{
#include <kzznpc.h>

	 set("vendor_goods", ([
                "�廨СЬ":__DIR__"obj/shoes",
                "����":__DIR__"obj/doupeng",
             "���ƹ���": __DIR__"obj/guazi",
                "խ�̰�":__DIR__"obj/kenao",
	"��ɴ�������ȹ":__DIR__"obj/qun",
        ]) );

       set("area_name","����Ѧ�ǳ�����");
       set("area_file","/d/dali/garments.c");
        setup();
carry_object("/d/obj/cloth/choupao")->wear();
add_money("silver",5);
}
void init()
{
::init();
 add_action("do_vendor_list","list");
}



