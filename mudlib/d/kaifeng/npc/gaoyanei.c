inherit NPC;
void create()
{
   set_name("������",({"gao yanei"}));
   set("gender","����");
	set("mingwang",-8000);
   set("combat_exp",800000);
   
set("age",23);
   set("kee",1500);
   set("max_kee",1500);
set("food",250);
set("water",250);
   set("force",1000);
   set("max_force",1000);
   set("force_factor",50);

   set_skill("dodge",180);
   set_skill("force",180);
   set_skill("parry",180);
   set_skill("unarmed",180);
   set_skill("sword",180);

   setup();
   add_money("gold",2);
carry_object("/obj/cloth")->wear();
carry_object("/obj/weapon/sword")->wield();
}

