inherit NPC;
void create()
{
   set_name("½�ݺ�",({"lu yuhou"}));
   set("gender","����");
   set("mingwang",5000);
   set("combat_exp",200000);
   
set("age",43);
   set("kee",1000);
   set("max_kee",1000);
set("food",250);
set("water",250);
   set("force",1000);
   set("max_force",1000);
   set("force_factor",50);

   set_skill("dodge",100);
   set_skill("force",100);
   set_skill("parry",100);
   set_skill("unarmed",100);
   set_skill("sword",100);

   setup();
   add_money("silver",20);
carry_object("/obj/cloth")->wear();
carry_object("/obj/weapon/sword")->wield();
}

