inherit NPC;
int play();

void create()
{
  set_name("������", ({"jiang xiuyin","girl"}));
        set("shen_type",1);
  set("gender", "Ů��");
  set("combat_exp", 20000);
  set("title","�ѽ�");
    set("long","�������͵ĵ���֮һ!\n");
  set("age", 18);
  set("per", 30);
  set("attitude", "friendly");
  set("shen_type", 1);
  set_skill("unarmed", 10);
  set_skill("sword",60);
    set_skill("dodge",80);
    set_skill("parry",20);
    set_skill("literate",100);

  setup();
  set("chat_chance", 5);
  set("chat_msg", ({ (: play :) }));
	carry_object(__DIR__"obj/duandi")->wield();
}
int play()
{
   if (present("duan di",this_object()))
          command("play duan di");
   else command("sigh");
   return 1;
}
int accept_fight(object me)
{
     object ob1,ob2;
    if (!present("sword",this_object()))
          new("/d/obj/weapon/sword/changjian")->move(this_object());
    command("wield sword");
    command("say ��������,����Ī��!\n");
 ob1=present("deng diaoliang",environment(this_object()));
  ob2=present("wen yanyang",environment(this_object()));
if (ob1)
   ob1->accept_fight(me);
if (ob2)
   ob2->accept_fight(me);
    return 1;
}


