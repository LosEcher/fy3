inherit NPC;

void create()
{
  set_name("����ɮ", ({"seng","heshang"}));
  set("gender", "����");
  set("long","��ɽ��ɽ,����ݷ�,�������е�ɮ��.\n");
  set("combat_exp",5000+random(50000) );
  set("age", 30+random(50));
  set("per", 32);
  set("attitude", "friendly");
  set("shen_type", 1);
  set_skill("unarmed", 50+random(20));
  set_skill("parry",40+random(30));
    set_skill("dodge",40+random(20));
  
  setup();
  carry_object("/d/quanzhou/obj/jiasha")->wear();
  carry_object("/d/quanzhou/obj/muyu")->wield();
  add_money("silver",10);
}

