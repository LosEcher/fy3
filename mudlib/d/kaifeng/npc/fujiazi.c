inherit NPC;
void dorp_coin();
void create()
{
   set_name("���ҹ���",({"gong zi"}));
   set("gender","����");
   set("mingwang",200);
   set("combat_exp",120000);
   
   set("age",26);
   set("kee",1000);
   set("max_kee",1000);
   set("food",250);
   set("water",250);
   set("force",200);
   set("max_force",200);
   set("force_factor",10);

   set_skill("dodge",60);
   set_skill("force",60);
   set_skill("parry",60);
   set_skill("unarmed",60);
   set_skill("sword",60);
   
   set("chat_chance",10);
   set("chat_msg",({
      (:random_move:),
      (:random_move:),
      (:dorp_coin:),
    }));

   setup();
   add_money("coin",1000);
carry_object("/obj/cloth")->wear();
carry_object("/obj/weapon/sword")->wield();
}
void dorp_coin()
{
command("drop 10 coin");
  return;
}
