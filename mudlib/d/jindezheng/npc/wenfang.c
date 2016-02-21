#include <ansi.h>

inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/�·���"; }
void create()
{
string OBJ_DIR;
#include <kzznpc.h>

        OBJ_DIR="/d/jindezheng/obj";
	set("area_name","�������¼��ϵ�");
	set("area_file","/d/jindezheng/china-shop.c");
	set("ziyuan","����");
	set("jizhi",80);
	set("kaifa",20);

 set("vendor_goods",([
"guanyin":OBJ_DIR+"/guanyin",
"shuijinpin":OBJ_DIR+"/shuijinpin",
"erping":OBJ_DIR+"/erping",
"haierzheng":OBJ_DIR+"/haierzheng",
"qiankunhu":OBJ_DIR+"/qiankunhu",
  ]));
	setup();
 carry_object(__DIR__"obj/fucloth")->wear();
 carry_object("/obj/weapon/sword")->wield();
}
void init()
{
  object ob;
 ::init();
 if (interactive(ob=this_player())&&!is_fighting()) {
   remove_call_out("greeting");
   call_out("greeting",1,ob);
    }
 add_action("do_vendor_list","list");
}
void greeting(object ob)
{
  if (!ob||environment(ob)!=environment()) return;
  switch(random(3))    {
   case 0:
       command("say �������ٱ��ꡣ");
       break;
   case 1:
       command("say ��λ"+RANK_D->query_respect(ob)+",����Ĵ����ھ���������һָ.\n");
       break;
   case 2:
       command("say �⼸��������������,���ô�Ҥ����Щ����!\n");
       break;
       }
  return;
}

#include <die.h>