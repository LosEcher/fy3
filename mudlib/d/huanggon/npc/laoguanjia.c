inherit NPC;
void create()
{
   set_name("�Ϲܼ�",({"lao guanjia"}));
   set("gender","����");
   set("age",74);
   set("combat_exp",9000);
   set("force",600);
   set("max_force",600);
   set("force_factor",10);
   
   set_skill("unarmed",10);
   set_skill("parry",10);
   set_skill("dodge",10);
   setup();
   add_money("silver",1);
   carry_object("/obj/cloth")->wear();
 }
 