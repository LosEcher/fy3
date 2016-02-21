// lu_guanying.c
// str = ����, int = ����, cps = ����, con = ����, wis = �۸�, dex = ������
#include <ansi.h>

inherit NPC;
inherit F_MASTER;

int HAVE_BOOK=1;

int give_book();

void create()
{
		set_name("½��Ӣ", ({ "lu guanying", "lu","master" }) );
		set("title", "���Ϲ���ׯ��ׯ��");

		set("long","½��Ӣ����׳�꣬����������׳������������������λ����Ӣ�ۡ�\n");
		set("rank_info", "����ׯ��ׯ��");

		set("gender", "����");
		set("age", 24);
		set("attitude", "peaceful");
		set("class", "youxia");

		set("str", 37);
		set("int", 30);
		set("spi", 30);
		set("con", 30);
		set("cps", 30);
		set("cor", 20);

        set("max_force", 4000);
        set("force", 3000);
        set("force_factor", 3);


        set("combat_exp", 200000);
        set("score", 2000);

        set_skill("unarmed", 90);
        set_skill("parry", 90);
        set_skill("dodge", 90);
        set_skill("sword", 90);
        set_skill("force", 90);
        set_skill("literate", 100);
        set_skill("luoying-zhang", 90);
        set_skill("yingxian-steps", 90);
        set_skill("luoying-shenjian", 90);
        set_skill("bibo-shengong", 90);
        set_skill("tanzhi-shentong", 90);
        set_skill("yuxiao-jian", 90);
		create_family("�һ���", 3, "����");
	
		set("inquiry", ([
			"����" : (: give_book :),
		]) );	



        setup();
        carry_object("/obj/cloth")->wear();
		add_money("silver", 56);
}

void attempt_apprentice(object ob)
 {
//        if( ((int)ob->query("cor") < 20) 
//        ||      ((int)ob->query("cps") < 20)) {
//                return;
//        }
        command("smile");
        command("say " + RANK_D->query_respect(ob) + 
 "�������书�������Ҫ��ѧ������������һ��и��ѽ����\n");
        command("recruit " + ob->query("id") );
 }

 void recruit_apprentice(object ob)
 {
        if( ::recruit_apprentice(ob) )
                ob->set("class", "taohua");
 }
 



int give_book()
{
  object me,ob;

  me=this_player();
  if( me->over_encumbranced() ) return notify_fail("���Ѿ����ɹ����ˣ�\n");

  if(HAVE_BOOK==0)
    command("say �������ˣ����ɵľ�ת���Ѿ��������ˡ�");  
  else  
  {
  clone_object("/obj/jindan")->move(me);

    command("say �ðɣ�������ת������ȥ�ɡ�");  
    message_vision("½��Ӣ��$nһ����ת�𵤡�\n",this_object(),me);   
    
    HAVE_BOOK=0;   
  }

  return 1;
}
