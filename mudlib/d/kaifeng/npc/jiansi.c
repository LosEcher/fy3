inherit NPC;
void create()
{
   set_name("����ɮ��",({"jiansi seng"}));
   set("gender","����");
   set("mingwang",6000);
   set("combat_exp",1700000);
   
set("age",54);
   set("kee",1000);
   set("max_kee",1000);
set("food",250);
set("water",250);
   set("force",800);
   set("max_force",800);
   set("force_factor",80);

   set_skill("dodge",200);
   set_skill("force",200);
   set_skill("parry",200);
   set_skill("unarmed",200);
   set_skill("literate",200);

   setup();
   add_money("silver",50);
carry_object(__DIR__"obj/cheng-cloth")->wear();
}

