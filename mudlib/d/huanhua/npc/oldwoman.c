inherit NPC;
void create()
{
    set_name("����",({"zhang ma"}));
        set("shen_type",1);
    set("gender","Ů��");
    set("combat_exp",8000);
    set("attitude","friendly");
    set("title","Ů��");
    set("age",65);
    set("long","ʮ�־н�������������������ʮ�ָߣ���Ȼ�������Ѻ�
���ִֽţ��������ƣ��������������ɣ���ޡ�.\n");
    set_skill("unarmed",30);
    setup();
add_money("silver",1);
carry_object("/obj/cloth")->wear();
}
int accept_fight(object me)
{
    command("say ���Ϸ���ǰ��˲���,��������ѵ��!\n");
    message_vision("$N����һͦ,���Ǳ�������ޱ�!\n",this_object());
    set_name("������",({"zhang","zhang lingyi"}));
    set("gender","����");
    set("combat_exp",150000);
    set("sword",120);
    set("title","��������");
 if (!objectp(present("yinyang-sword",this_object())))
         new(__DIR__"obj/yinyang-sword")->move(this_object());
   command("wield sword");
remove_call_out("turn_off");
call_out("turn_off",300,this_object());
   return 1;
}
void turn_off()
{
    object ob;
    set_name("����",({"zhang ma"}));
    set("gender","Ů��");
    set("combat_exp",8000);
      set("title","Ů��");
ob=present("yinyang-sword",this_object());
 if (ob) destruct(ob);
   return;
}   
