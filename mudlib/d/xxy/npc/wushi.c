inherit NPC;
void create()
{
      set_name("Ѳ԰��ʿ",({"wushi"}));
      set("gender","����");
      set("home",1);
      set("combat_exp",100000);
      set("age",20+random(40));
      set_skill("dodge",50);
      set_skill("parry",50);
      set_skill("sword",50);
      set_skill("force",50);
      set_skill("unarmed",50);
      set("chat_chance",30);
      set("chat_msg",({
            (:random_move:),
        }));
      setup();
  carry_object("/obj/cloth")->wear();
  carry_object("/d/obj/weapon/sword/changjian")->wield();
  carry_object("/d/xxy/obj/pai");
}
void init()
{
      object ob;
    ::init();
    if (interactive(ob=this_player())&&!is_fighting())
          {
               if (!present("pai",ob))
                   {
                          command("say �󵨵ļ�ϸ������������.\n");
                          kill_ob(ob);
                    }
         }
}