//Mr.music yangzhou ŷ����

inherit NPC;
inherit F_MASTER;

void create()
{
        set_name("ŷ����", ({ "ouyangxiu", "ouyang xiu","ouyang" }) );
        set("gender", "����" );
        set("age", 54);
        set("str", 90);
        set("cor", 90);
        set("cps", 90);
        set("int", 90);

        set("max_force", 4000);
        set("force", 3000);
        set("force_factor", 3);

        set("rank_info/respect", "����");

        set("long","��λ��������֪��ŷ�����\n");

        create_family("����ѧ��", 1, "�糤");
        set("title","����֪��");
        set("combat_exp", 100000);
        set("score", 2000);

        set_skill("unarmed", 90);
        set_skill("parry", 90);
        set_skill("dodge", 90);
        set_skill("sword", 90);
        set_skill("force", 90);
        set_skill("literate", 300);

        setup();
        carry_object("/obj/cloth")->wear();
}

void attempt_apprentice(object ob)
 {
        if( ((int)ob->query_skill("literate") <60 ) 
                return;
        
        command("smile");
        command("say " + RANK_D->query_respect(ob) + 
 "��˼���ݣ����ⲻ�������ӿɽ̡�\n");
        command("recruit " + ob->query("id") );
 }

 void recruit_apprentice(object ob)
 {
        if( ::recruit_apprentice(ob) )
                ob->set("class", "shusheng");
 }
 

void init()
{
        ::init();
        add_action("do_chat", "chat");
}


int do_chat()
{
  object ob;
   ob=this_player(1);
  
   say("֪����ɫһ�����ȵ�������֮�ϣ�����������\n");
   say("�������۳���ǰ�������ɷ�˵��һ������"+ob->query("name")+
           "Ƥ������,���˹�ȥ��\n");
   tell_object(ob,"֪����ɫһ�����ȵ�������֮�ϣ�����������\n");
   tell_object(ob,"�������۳���ǰ�������ɷ�˵��һ��������"
                  +"Ƥ������,���˹�ȥ��\n");
   ob->unconcious();
   return 1;
  }

