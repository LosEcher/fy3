inherit NPC;
void create()
{
   set_name("��������",({"kan shou"}));
   set("gender","����");
        set("shen_type",-1);
	set("combat_exp",500000);
   
   set("age",46);
   set("kee",580);
   set("max_kee",580);
   set("food",250);
   set("water",250);
   set("force",580);
   set("max_force",580);
   set("force_factor",20);

	set_skill("dodge",100);
	set_skill("force",100);
	set_skill("parry",100);
	set_skill("unarmed",100);
	set_skill("spear",100);
	set_skill("blade",100);
 
   setup();
   add_money("silver",2);
carry_object("/obj/std/armor/pijia")->wear();
carry_object("/obj/weapon/blade")->wield();
}
