inherit NPC;
void create()
{
  set_name("������",({"zhao qixian","zhao"}));
  set("gender","����");
  set("nickname","��ǰ����");
  set("age",34);
  set("combat_exp",200000);
  set("force",300);
  set("force_factor",24);
  set("chat_chance",3);
  set("chat_msg",({
  "�����͵�:�����в���̫ƽ,�Һ��Ҷ��ڱ�����.\n",
  "�����͵�:�̿��й���ƽ����������,����С�Ӻô�.\n",
  "�����͵�:���˹𹫹�,���ٷ��Ʋ��ó�.\n",
  }));
  
  set_skill("dodge",50);
  set_skill("parry",50);
  set_skill("blade",50);
  set_skill("unarmed",50);
  set_skill("wuhu-duanmendao",50);
  set_skill("huashan-quanfa",50);
  map_skill("blade","wuhu-duanmendao");
  map_skill("parry","huashan-quanfa");
  map_skill("unarmed","huashan-quanfa");
  setup();
  carry_object("/obj/std/armor/pijia")->wear();
  carry_object("/obj/weapon/blade")->wield();
  add_money("silver",50);
 }
#include "shiwei.h"
