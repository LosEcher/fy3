inherit NPC;
void create()
{
  set_name("������",({"guard"}));
  set("gender","����");
  set("age",20+random(30));
  set("long","���س��ŵ�ʿ��\n");
  set("combat_exp",10000);
  
  set_skill("unarmed",40);
  set_skill("dodge",40);
  set_skill("parry",40);
  set_skill("spear",40);
  
  setup();
  carry_object("/obj/weapon/tiespear")->wield();
  carry_object("/obj/std/armor/pijia")->wear();
  add_money("silver",4);
}
  