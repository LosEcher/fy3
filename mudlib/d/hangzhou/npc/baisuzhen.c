inherit NPC;
int about_weapon();
void create()
{
       set_name("������",({"bai suzhen","suzhen","girl"}));
       set("shen_type",1);
       set("gender","Ů��");
       set("age",21);
       set("combat_exp",1200000);
       set("str",25);
       set("per",50);
       set("spi",20);
       set("kar",20);
       set("max_gin",500);
       set("gin",500);
       set("max_kee",1000);
       set("kee",1000);
       set("max_sen",800);
       set("sen",800);
       set("max_force",2000);
       set("force",2000);
       set("force_factor",50);
       set("score",1000);
       set_skill("dodge",150);
       set_skill("unarmed",150);
       set_skill("parry",150);
       set_skill("hammer",150);
       set_skill("force",150);
       set("chat_chance",2);
       set("chat_msg",({
                 (:about_weapon:),
                }));
       setup();
       carry_object(__DIR__"obj/changqun")->wear();
       carry_object(__DIR__"obj/baisan")->wield();
       add_money("silver",80);
}
int about_weapon()
{   
    object ob,ob1;
      ob=this_object();
      if (present("baichou san",ob))
       {   if ((ob1=ob->query_temp("weapon"))&&(ob1->query("id")=="baichou san"))
                   command("unwield san");
                else command("wield san");
                 return 1;
       }
      return notify_fail("");
}
void init()
{
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
}

void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;
	command("guard xu xian");
}

