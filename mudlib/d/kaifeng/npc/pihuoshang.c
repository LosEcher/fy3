inherit NPC;
void create()
{
   set_name("Ƥ����",({"pihuo shang"}));
   set("gender","����");
   set("mingwang",200);
   set("combat_exp",20000);
   
set("age",43);
   set("kee",1000);
   set("max_kee",1000);
set("food",250);
set("water",250);
   set("force",1000);
   set("max_force",1000);
   set("force_factor",10);

   set_skill("dodge",40);
   set_skill("force",40);
   set_skill("parry",40);
   set_skill("unarmed",40);
   set_skill("sword",40);

   setup();
   add_money("silver",20);
carry_object("/obj/cloth")->wear();

}

