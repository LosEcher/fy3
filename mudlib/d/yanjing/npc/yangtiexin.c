inherit NPC;
void create()
{
	set_name("������",({"yang tiexin","yang"}));
   set("gender","����");
   set("mingwang",5000);
   set("combat_exp",60000);
   
set("age",45);
   set("kee",600);
   set("max_kee",600);
set("food",250);
set("water",250);
   set("force",500);
   set("max_force",500);
   set("force_factor",10);

   set_skill("dodge",40);
   set_skill("force",40);
   set_skill("parry",40);
   set_skill("unarmed",40);
   set_skill("spear",100);

   setup();
   add_money("silver",10);
carry_object("/obj/cloth")->wear();
carry_object(__DIR__"obj/tiespear")->wield();
}
