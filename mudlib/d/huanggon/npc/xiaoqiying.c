inherit NPC;
void create()
{
  set_name("����Ӫ��ʿ",({"junshi"}));
  set("gender","����");
  set("age",20+random(30));
  set("combat_exp",50000);
  set("force",700);
  set("max_force",700);
  set("force_factor",20);
  
  set_skill("unarmed",50);
  set_skill("dodge",50);
  set_skill("parry",50);
  set_skill("blade",50);
  
  setup();
  carry_object("/obj/weapon/tiespear")->wield();
  carry_object("/obj/std/armor/pijia")->wear();
  carry_object("/obj/std/armor/pikui")->wear();
  carry_object("/obj/std/armor/pixue")->wear();
  add_money("silver",10);
}
  