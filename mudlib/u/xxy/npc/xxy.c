inherit NPC;
int do_tell();
void create()
{
   set_name("����ɮ��",({"seng ren"}));
   set("gender","����");
   set("mingwang",300);
   set("combat_exp",80000);
   
set("age",32);
   set("kee",1000);
   set("max_kee",1000);
set("food",250);
set("water",250);
   set("force",1000);
   set("max_force",1000);
   set("force_factor",20);

   set_skill("dodge",100);
   set_skill("force",100);
   set_skill("parry",100);
   set_skill("unarmed",100);
   set("inquiry",([
   ?:(:do_tell:),
   ]));
   setup();
   add_money("silver",2);
carry_object(__DIR__"obj/xuan-cloth")->wear();
}
int do_tell()
{
  message_vision("$N����",this_object());
  return 1;
}
