inherit NPC;
void create()
{
  set_name("ǰ��Ӫ��ʿ",({"junshi"}));
  set("gender","����");
  set("age",20+random(30));
  set("combat_exp",90000);
  set("force",700);
  set("max_force",700);
  set("force_factor",20);
  
  set_skill("unarmed",40);
  set_skill("dodge",40);
  set_skill("parry",40);
  set_skill("blade",40);
  
  setup();
  carry_object("/obj/weapon/blade")->wield();
  carry_object("/obj/std/armor/pijia")->wear();
  carry_object("/obj/std/armor/pikui")->wear();
  carry_object("/obj/std/armor/pixue")->wear();
  add_money("silver",10);
}
  