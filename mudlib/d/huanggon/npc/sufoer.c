inherit KZZNPC;
inherit F_VENDOR;
string query_save_file() { return DATA_DIR+"npc/�շ��";}
void create()
{
#include <kzznpc.h>
set("area_name","������ջ");
set("area_file","/d/huanggon/jingdukezhan.c");
set("vendor_goods",([
"����":     "/d/yangzhou/npc/obj/baozi",
"�ƺ�":     "/d/yangzhou/npc/obj/jiuhu",
"����":     "/obj/std/food/jitui",
"��ˮ��" :  "/d/yangzhou/npc/obj/yanshuie",
"������" :  "/d/yangzhou/npc/obj/huashengmi",
]));
set("chat_chance",3);
set("chat_msg",({
"�շ����:��˵�����������������빬��̫��.\n",
"�շ����:���г���̫��,ֻ���ɻ����ټ����ܽ�.\n",
"�շ����:��˵���ݱ�ץ������������.\n",
})); 
	setup();
carry_object("/obj/armor/guardsuit")->wear();
add_money("silver",5);
}
void init()
{
  add_action("do_vendor_list","list");
}
int accept_object(object ob,object item)
{
  if (item->query("money_id")&&item->value()>=200) {
ob->set_temp("rent_paid",1);
  message_vision("$Nһ���ֵ�:������.\n",this_object());
  return 1;
}
 command("say ��������,��Ķ�����ү�ҿ�����.\n");
 return notify_fail("");
 }         
