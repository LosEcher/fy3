inherit NPC;
void create()
{
  set_name("��¡",({"duo long"}));
  set("gender","����");
  set("age",43);
  set("nickname","�����ܹ�");
  set("combat_exp",800000);
  set("force",700);
  set("max_force",700);
  set("force_factor",40);
  
  set_skill("unarmed",100);
  set_skill("dodge",100);
  set_skill("parry",100);
  set_skill("blade",100);
  set_skill("wuhu-duanmendao",100);
  set_skill("anying-fuxiang",100);
  map_skill("blade","wuhu-duanmendao");
  map_skill("parry","wuhu-duanmendao");
  map_skill("dodge","anying-fuxiang");
  
  
  setup();
  carry_object("/obj/weapon/blade")->wield();
  carry_object("/obj/std/armor/tiejia")->wear();
  carry_object("/obj/std/armor/tiekui")->wear();
  carry_object("/obj/std/armor/tiexue")->wear();
  add_money("gold",1);
}
  