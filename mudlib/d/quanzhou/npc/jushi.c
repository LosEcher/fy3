inherit NPC;

void create()
{
  set_name("��Դ��ʿ", ({"jushi","qingwuan","man"}));
  set("gender", "����");
  set("long","����Դɽ���������ľ�ʿ.");
  set("combat_exp",5000+random(50000) );
  set("age", 30+random(50));
  set("per", 28);
  set("attitude", "friendly");
  set("shen_type", 1);
  set_skill("unarmed", 50);
  
  setup();
  carry_object("/d/quanzhou/obj/changpao")->wear();
  add_money("silver",10);
}

