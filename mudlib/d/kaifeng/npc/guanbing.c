inherit NPC;
void create()
{
   set_name("�ٱ�",({"guan bing"}));
   set("gender","����");
   set("mingwang",500);
   set("combat_exp",32000);
   
set("age",26);
   set("kee",800);
   set("max_kee",800);
set("food",250);
set("water",250);
   set("force",800);
   set("max_force",800);
   set("force_factor",10);

   set_skill("dodge",60);
   set_skill("force",60);
   set_skill("parry",60);
   set_skill("unarmed",60);
   set_skill("blade",60);

   setup();
   add_money("silver",15);
carry_object("/obj/cloth")->wear();
carry_object("/obj/weapon/blade")->wield();
}

