inherit KZZNPC;
#include <ansi.h>
inherit F_VENDOR;
string query_save_file() { return DATA_DIR + "npc/�ƾ�̫��"; }
void create()
{
#include <kzznpc.h>
  set("area_name","��������");
 set("area_file","/d/japan/tiejiangpu");
set("vendor_goods", ([
       "��ɣ��"  : __DIR__"obj/fusangjian" ,
       "��ɣ��"  : __DIR__"obj/fusangdao" ,
       "��ذ"  : __DIR__"obj/duanbi" ,
       "������"  : __DIR__"obj/hujia" ,
       "ͷ��"  : __DIR__"obj/toukui" ,
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
         if(random(10)>5)
        say(name()+"��ǰ����"+ ob->query("name") +
      "���Ҫ��Щʲô�ģ�\n");
 }
