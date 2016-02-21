inherit KZZNPC;
#include <ansi.h>
inherit F_VENDOR;
string query_save_file() { return DATA_DIR + "npc/��ҩũ"; }
void create()
{
#include <kzznpc.h>
set("area_name","����ҩ��");
set("area_file","/d/zhongzhou/yaopu");
set("vendor_goods", ([
	"sanqing" : "/d/yangzhou/npc/obj/sanqing" ,
	"jinchuang"  : "/d/yangzhou/npc/obj/jinchuang" ,
        "nianhua":"/d/yangzhou/npc/obj/nianhua",
        "liushen":"/d/yangzhou/npc/obj/liushen",
        "�˲�":"/d/yangzhou/npc/obj/renshen",
                             ]));
	setup();
carry_object("/obj/cloth")->wear();
}
void init()
{       
        ::init();
        add_action("do_vendor_list", "list");
 }
