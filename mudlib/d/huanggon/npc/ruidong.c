inherit NPC;
void create()
{
   set_name("��",({"rui dong"}));
   set("gender","����");
   set("age",36);
   set("nickname","�������ܹ�");
	set("shen_type",-1);
   set("combat_exp",500000);
   set("force",600);
   set("max_force",600);
   set("force_factor",20);
   
   set_skill("unarmed",40);
   set_skill("parry",40);
   set_skill("dodge",40);
   set_skill("huashan-quanfa",50);
   set_skill("anying-fuxiang",40);
   map_skill("parry","huashan-quanfa");
   map_skill("unarmed","huashan-quanfa");
   map_skill("dodge","anying-fuxiang");
   set("inquiry",([
   "��ʮ���¾�":"�������Ͼ���һ��,����?\n",
   "̫��":"��ҪΪ̫��������,Ҳ������ϧ.\n",
   "ΤС��":"��Ҳ��������С��.\n",
   ]));
  set("chat_chance",5);
  set("chat_msg",({
  "�𶰵�:�ⲿ[��ʮ���¾�]��̫��Ը�Ҫ��,�ɲ��ܶ���.\n",
  "�𶰵�:�������ִ̿�,��˵���˺ü�������.\n",
  "�𶰵�:���ϴ�,����̫���?�ǵ�Ȼ��̫�����.\n",
  }));
   
   setup();
   add_money("silver",10);
   carry_object(__DIR__"obj/42book1.c");
   carry_object("/obj/std/armor/tiejia")->wear();
   carry_object("/obj/std/armor/tiexue")->wear();
   carry_object("/obj/std/armor/tiekui")->wear();
}
#include "shiwei.h"
