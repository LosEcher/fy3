inherit NPC;
void create()
{
  set_name("�����õ���",({"dizi"}));
  set("age",34);
  set("combat_exp",50000);
  set_skill("unarmed",36);
  set_skill("dodge",50);
  set_skill("parry",50);
  setup();
 carry_object("/obj/cloth")->wear();
 add_money("silver",2);
}