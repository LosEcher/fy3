inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/���"; }
void create()
{
#include <kzznpc.h>
	setup();
	carry_object("/obj/cloth")->wear();
	carry_object("/obj/std/armor/pijia")->wear();
}
void init()
{
  object ob;
  ::init();
 	command("guard up");
if (interactive(ob=this_player())&&!is_fighting()) {
    remove_call_out("greeting");
    call_out("greeting",1,ob);
    }
 }
void greeting(object ob)
{
  if (!ob||environment(ob)!=environment()) return;
  switch(random(3))   {
   case 0:
     say("��ú���:��~��~��~��!\n");
     break;
   case 1:
     say("������ź�����,�Ժ���:��?...ɫ?...\n");
     break;
     }
  return;
}
    

