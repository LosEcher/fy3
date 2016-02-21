//Mr.music yangzhou ������ס��

inherit NPC;
inherit F_MASTER;

void create()
{
        set_name("��ͨ", ({ "zhuchi", "zhu chi","huitong" }) );
        set("gender", "����" );
        set("age", 54);
        set("str", 30);
        set("cor", 30);
        set("cps", 30);
        set("int", 30);
        set("mingwang",1);
        set("max_force", 4000);
        set("force", 3000);
        set("force_factor", 3);

        set("rank_info/respect", "ʥɮ");

        set("long","��λ���Ǵ����µ�ס��\n");

        create_family("������", 9, "ס��");

        set("combat_exp", 10000);
        set("score", 2000);

        set_skill("unarmed", 90);
        set_skill("parry", 90);
        set_skill("dodge", 90);
        set_skill("sword", 90);
        set_skill("force", 90);
        set_skill("literate", 100);
        set_skill("throwing",150);
        set_skill("qiankunyizhi",150);

        map_skill("throwing","qiankunyizhi");

        setup();
        carry_object("/obj/cloth")->wear();
        carry_object(__DIR__"obj/zhuye")->wield();
}

void attempt_apprentice(object ob)
 {
        command("say " + RANK_D->query_respect(ob) + 
 "�����徲����Դ�ó������Ƿ���֮�ҡ�\n");
        command("recruit " + ob->query("id") );
 }

 void recruit_apprentice(object ob)
 {
        if( ::recruit_apprentice(ob) )
                ob->set("class", "heshang");
 }
 

void init()
{
        ::init();
        add_action("do_ketou", "ketou");
}


int do_ketou()
{
  object ob;
  ob=this_player(1);

  if((ob->query("family/master_name"))=="��ͨ")
   {
    message_vision("\n$N�������������ͨ���˸���ͷ���е�����ʦ��������\n", 
this_player(1));

      if(ob->query("kee")<50)  ob->add("kee",1);
      if(ob->query("gin")<30)  ob->add("gin",1);
      if(ob->query("sen")<30)  ob->add("sen",1);
      if(ob->query("atman")<30)  ob->add("atman",1);

      if(ob->query("food")<50)  ob->add("food",((int)ob->query("str")-10)*5);
     if(ob->query("water")<90)  ob->add("water",((int)ob->query("str")-10)*5);

    return 1;
   }
   message_vision("\n$N������������ס�ֿ��˸�ͷ��\n", this_player(1));
   return 1;
  }

