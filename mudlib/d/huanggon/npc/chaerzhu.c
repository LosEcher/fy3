inherit NPC;
void create()
{
  set_name("�����",({"chaer zhu"}));
  set("gender","����");
  set("age",49);
  set("nickname","��ͳ");
  set("combat_exp",300000);
  set("force",700);
  set("max_force",700);
  set("force_factor",40);
  
  set_skill("unarmed",40);
  set_skill("dodge",40);
  set_skill("parry",40);
  set_skill("blade",40);
  set_skill("wuhu-duanmendao",40);
  set_skill("anying-fuxiang",40);
  map_skill("blade","wuhu-duanmendao");
  map_skill("parry","wuhu-duanmendao");
  map_skill("dodge","anying-fuxiang");
  
  set("chat_chance",4);
  set("chat_msg",({
  "������:���ŵ�Ǯ��¡�������ǹ����.\n",
  "������:��ػ᲻��,���ǿ�������̫ƽ.\n",
  "������:ֻ��̫����ɻ����ټ����ܽ����ʹ�.\n",
  }));
  setup();
  carry_object("/obj/weapon/blade")->wield();
  carry_object("/obj/std/armor/tiejia")->wear();
  carry_object("/obj/std/armor/tiekui")->wear();
  carry_object("/obj/std/armor/tiexue")->wear();
  add_money("silver",50);
}
  