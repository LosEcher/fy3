inherit NPC;
void create()
{    
      set_name("����",({"xingshang","shangren"}));
      set("gender","����");
      set("age",random(40)+20);
      set("str",16);
      set("combat_exp",1000+random(3000));
      set_skill("unarmed",10+random(20));
      set_skill("dodge",10+random(20));
      setup();
      carry_object("/obj/cloth")->wear();
      add_money("silver",20);
}