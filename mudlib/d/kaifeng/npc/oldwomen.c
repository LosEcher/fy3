inherit NPC;
void create()
{
   set_name("������̫",({"old woman"}));
   set("gender","Ů��");
   set("long","�����������̫̫!\n");
   set("mingwang",100);
   set("combat_exp",5000);
   
set("age",64);
   set("kee",500);
   set("max_kee",500);
set("food",250);
set("water",250);
   set("force",400);
   set("max_force",400);
   set("force_factor",10);

   set_skill("dodge",20);
   set_skill("force",20);
   set_skill("parry",20);
   set_skill("unarmed",20);
   set_skill("sword",20);

   set("chat_chance",6);
   set("chat_msg",({
   	(:random_move:),
    }));
   setup();
   add_money("silver",2);
carry_object("/obj/cloth")->wear();

}
void init()
{
  object ob;
  ::init();
  if (interactive(ob=this_player())&&!is_fighting())  {
  	remove_call_out("greeting");
  	call_out("greeting",1,ob);
      }
 }
void greeting(object ob)
{object ob1;
 ob1=present("xiang",environment());
 if (ob1)   {
  message_vision("$N��������$n��,���������д�!\n",this_object(),ob1);
    return;
   }
  tell_object(ob,"������̫�����:������Ҫ����,Ҫ���ع���!\n");
  return;
} 	