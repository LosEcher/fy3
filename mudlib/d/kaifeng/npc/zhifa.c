inherit NPC;
void create()
{
   set_name("�Ƿ�����",({"zhifa zhanglao","zhanglao"}));
   set("gender","����");
   set("mingwang",30000);
   set("combat_exp",800000);
   
   set("gin",800);
   set("max_gin",800);
set("age",82);
   set("kee",1000);
   set("max_kee",1000);
   set("sen",500);
set("food",250);
set("water",250);
   set("max_sen",500);
   set("force",1000);
   set("max_force",1000);
   set("force_factor",60);

   set_skill("dodge",180);
   set_skill("force",180);
   set_skill("parry",180);
   set_skill("unarmed",180);

   setup();
   add_money("gold",2);
carry_object(__DIR__"obj/xuan-cloth")->wear();
}
