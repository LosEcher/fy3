inherit NPC;
void create()
{
  set_name("�ʹ�����",({"shi wei"}));
  set("gender","����");
  set("age",20+random(30));
  set("combat_exp",200000);
  set_skill("dodge",60);
  set_skill("parry",60);
  set_skill("unarmed",60);
  set_skill("sword",60);
  
  setup();
  carry_object("/obj/std/armor/tongjia")->wear();
  carry_object("/obj/std/armor/tongkui")->wear();
  carry_object("/obj/std/armor/tongxue")->wear();
  carry_object("/obj/weapon/sword")->wield();
  add_money("silver",40);
 }