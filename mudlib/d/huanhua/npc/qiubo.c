inherit NPC;
int do_tune();
void create()
{
    set_name("丘伯",({"qiu bo"}));
    set("gender","男性");
    set("combat_exp",8000);
    set("attitude","friendly");
    set("title","老仆");
    set("age",65);
    set("long","满头白发的老人");
    set("chat_chance",10);
       set("chat_msg",({
           "老啦,老啦,丘伯喃喃自语着咳了两声.\n",
           "唉,昨天喝了二两老白干就晕了,真是不行了.\n",
           "我家夫人对我真是恩重如山,我这次就把命豁出去了.\n",
          }));
    set("inquiry",([
           "绝灭神剑":(:do_tune:),
           ]));
    set_skill("unarmed",30);
    set_skill("sword",10);
       set_skill("parry",10);
       set_skill("dodge",10);
       set_skill("force",10);
    setup();
add_money("silver",1);
carry_object("/obj/cloth")->wear();
carry_object(__DIR__"obj/hanyangan")->wield();
}
int do_tune()
{
    object ob;
    command("say 你,你,你,哼,知道我的底细的人都死了,你也不能例外.\n");
    set_name("辛虎丘",({"xin huqiu","xin"}));
    set("title","绝灭神剑");
    set("combat_exp",100000);
    set_skill("sword",100);
    set_skill("parry",60);
    set_skill("dodge",60);
    set_skill("force",60);
    command("unwield hanyangan");
    ob=present("sword",this_object());
   if (!ob)
            ob=new(__DIR__"obj/bianzhu-jian")->move(this_object());
       command("wield sword");
   kill_ob(this_player());
  remove_call_out("do_back");
  call_out("do_back",300,this_object());
  return 1;
}
void do_back()
{
     object ob;
      set_name("丘伯",({"qiu bo"}));
    set("combat_exp",8000);
    set("attitude","friendly");
    set("title","老仆");
    set_skill("sword",10);
       set_skill("parry",10);
       set_skill("dodge",10);
       set_skill("force",10);
ob=present("sword",this_object());
  destruct(ob);
  return;
}
int accept_fight(object me)
{
     command("say 咳,老啦,走路都不行啦,你老就饶了小老儿吧!\n");
      return 0;
}