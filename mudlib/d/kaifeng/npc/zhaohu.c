inherit NPC;
void create()
{
set_name("����",({"wang chao"}));
   set("gender","����");
   set("mingwang",10000);
   set("combat_exp",1000000);
   set("title","��ͷ");
   
set("age",25);
   set("kee",1000);
   set("max_kee",1000);
set("food",250);
set("water",250);
   set("force",800);
   set("max_force",800);
   set("force_factor",80);

   set_skill("dodge",150);
   set_skill("force",150);
   set_skill("parry",150);
   set_skill("unarmed",150);
   set_skill("literate",150);
   set_skill("blade",150);
   setup();
   add_money("silver",50);
carry_object("/obj/cloth")->wear();
carry_object("/obj/weapon/blade")->wield();
}

