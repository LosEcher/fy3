inherit NPC;
int do_tune();
void create()
{
    set_name("��",({"qiu bo"}));
    set("gender","����");
    set("combat_exp",8000);
    set("attitude","friendly");
    set("title","����");
    set("age",65);
    set("long","��ͷ�׷�������");
    set("chat_chance",10);
       set("chat_msg",({
           "����,����,���������ſ�������.\n",
           "��,������˶����ϰ׸ɾ�����,���ǲ�����.\n",
           "�Ҽҷ��˶������Ƕ�����ɽ,����ξͰ������ȥ��.\n",
          }));
    set("inquiry",([
           "������":(:do_tune:),
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
    command("say ��,��,��,��,֪���ҵĵ�ϸ���˶�����,��Ҳ��������.\n");
    set_name("������",({"xin huqiu","xin"}));
    set("title","������");
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
      set_name("��",({"qiu bo"}));
    set("combat_exp",8000);
    set("attitude","friendly");
    set("title","����");
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
     command("say ��,����,��·��������,���Ͼ�����С�϶���!\n");
      return 0;
}