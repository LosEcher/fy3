inherit NPC;
void create()
{
  set_name("�ſ���",({"zhang kangnian","zhang"}));
  set("gender","����");
  set("nickname","��ǰ����");
  set("age",43);
  set("combat_exp",200000);
  set("force",300);
  set("force_factor",24);
  set("chat_chance",3);
  set("chat_msg",({
  "�ſ����:������������,�����̿Ϳ���һ��.\n",
  "�ſ����:�̿͵ĵ����϶���[����ɽ�����ܱ���]������.\n",
  "�ſ����:�𹫹��ڻ�����ǰ���Լ���,���Ǿͷ���.\n",
  }));
  
  set_skill("dodge",30);
  set_skill("parry",30);
  set_skill("blade",30);
  set_skill("unarmed",30);
  set_skill("wuhu-duanmendao",30);
  set_skill("huashan-quanfa",30);
  map_skill("blade","wuhu-duanmendao");
  map_skill("parry","huashan-quanfa");
  map_skill("unarmed","huashan-quanfa");
  setup();
  carry_object("/obj/std/armor/pijia")->wear();
  carry_object("/obj/weapon/blade")->wield();
  add_money("silver",30);
 }
#include "shiwei.h"
