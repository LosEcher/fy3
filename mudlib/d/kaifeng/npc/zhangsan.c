inherit NPC;
void create()
{
	set_name("�������",({"zhang san"}));
   set("gender","����");
	set("mingwang",-100);
   set("combat_exp",9000);
   set("title","��������");
   
set("age",26);
   set("kee",800);
   set("max_kee",800);
set("food",250);
set("water",250);
   set("force",800);
   set("max_force",800);
   set("force_factor",10);

   set_skill("dodge",30);
   set_skill("force",30);
   set_skill("parry",30);
   set_skill("unarmed",30);
   set_skill("sword",30);

   setup();
   add_money("coin",80);
carry_object("/obj/cloth")->wear();
}

