inherit NPC;
void randommove();
void create()
{
   set_name("��ؤ",({"qi gai"}));
   set("gender","����");
   set("mingwang",100);
   set("combat_exp",10000);
   
set("age",25);
   set("kee",500);
   set("max_kee",500);
set("food",250);
set("water",250);
   set("force",800);
   set("max_force",800);
   set("force_factor",80);

   set_skill("dodge",50);
   set_skill("force",50);
   set_skill("parry",50);
   set_skill("unarmed",50);
   set_skill("xiaoyaoyou",50);
   set_skill("xianglong-zhang",50);
   set_skill("literate",50);
   set_skill("blade",50);
   
   map_skill("dodge","xiaoyaoyou");
   map_skill("unarmed","xianglong-zhang");
   
   set("chat_chance",20);
   set("chat_msg",({
      (:randommove:),
    }));
   setup();
   add_money("coin",50);
carry_object("/obj/cloth")->wear();
}
void randommove()
{
   mapping exits;
        string *dirs;

if( !mapp(exits = environment()->query("exits")) ) return;
dirs = keys(exits);
command("go " + dirs[random(sizeof(dirs))]);
command("get all");
command("put all in xiang");
return;
}