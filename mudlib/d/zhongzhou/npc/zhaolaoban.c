inherit KZZNPC;
#include <ansi.h>
inherit F_VENDOR;
string query_save_file() { return DATA_DIR + "npc/�Ե���"; }
void create()
{
#include <kzznpc.h>
set("area_name","�����ӻ���");
set("area_file","/d/zhongzhou/zahuopu");
set("vendor_goods", ([
	"����" : __DIR__"obj/beixin" ,
	"����"  : __DIR__"obj/changjian" ,
        "����":"/obj/std/food/jitui",
        "�ƺ�":"/d/yangzhou/npc/obj/jiuhu",
        "�ֵ�":"/obj/weapon/blade",
        "����":"/obj/std/weapon/pibian",
        "�����":"/d/suzhou/npc/obj/tulingfu",
                             ]));
	setup();
}
void init()
{       
        object ob;

        ::init();
	if(interactive (ob=this_player()) && !is_fighting() )
{
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
        add_action("do_vendor_list", "list");
 }



void greeting(object ob)
{

         if( !ob || environment(ob) != environment() ) 
		return;
             
         say("�Ե�����ǰ����"+ ob->query("name") +
"������������������ʵ���Żݣ���Ҫ���ʲô��\n");
 }
