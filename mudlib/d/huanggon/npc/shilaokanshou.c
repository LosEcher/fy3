inherit NPC;
void create()
{
   set_name("ʯ�ο���",({"kan shou"}));
   set("gender","����");
   set("age",30);
   set("combat_exp",5000);
   set("force",200);
   set("max_force",200);
   set("force_factor",10);
   
   set_skill("unarmed",10);
   set_skill("parry",10);
   set_skill("dodge",10);
   set_skill("blade",15);
   setup();
   add_money("silver",1);
   carry_object("/obj/std/armor/pijia")->wear();
   carry_object("/obj/weapon/blade")->wield();
 }