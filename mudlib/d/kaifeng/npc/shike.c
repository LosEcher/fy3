inherit NPC;
void create()
{
   set_name("ʳ��",({"shi ke"}));
   set("gender","����");
   set("mingwang",10);
   set("combat_exp",200);
   
set("age",23);
   set("kee",400);
   set("max_kee",400);
set("food",250);
set("water",250);
   set("force",100);
   set("max_force",100);
   set("force_factor",2);

   set_skill("dodge",4);
   set_skill("force",4);
   set_skill("parry",4);
   set_skill("unarmed",4);

   setup();
   add_money("coin",20);
carry_object("/obj/cloth")->wear();
}

