// lu_guanying.c
// str = ����, int = ����, cps = ����, con = ����, wis = �۸�, dex = ����
// 97.8.18 by Aug

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

		set("gender", "����");
		set("age", 24);
		set("attitude", "peaceful");
		set("class", "xiake");

		set("str", 37);
		set("int", 30);
		set("spi", 30);
		set("con", 30);
		set("cps", 30);
		set("cor", 20);

        set("max_force", 2000);
        set("force", 2000);
        set("force_factor", 3);

        set_skill("unarmed", 90);
        set_skill("parry", 60);
        set_skill("dodge", 60);
        set_skill("sword", 60);
        set_skill("force", 60);
        set_skill("literate", 60);


//add by musix
       set_skill("suiyu-force",60);
        set_skill("luoying-sword",60);
        set_skill("luoying-strike",60);
        set_skill("bagua-steps",60);
        set_skill("lanhua-finger",60);

                map_skill("dodge",  "bagua-steps");
                map_skill("unarmed","lanhua-finger");
                map_skill("parry",  "luoying-sword");
                map_skill("force",  "suiyu-force");
                map_skill("sword",  "luoying-sword");


        set("combat_exp", 50000);
        set("score", 5000);

		create_family("�һ���", 3, "����");
	
		set("inquiry", ([
            "�ؼ�" : (: give_book :),
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
	if(ob->query("family/generation")<=3)
	{
		command("?");
		command("say " + RANK_D->query_respect(ob) +  "���ǿ���ʲô��Ц����");
		return;		
	}

        command("smile");
        command("say " + RANK_D->query_respect(ob) + 
 "�������书�������Ҫ��ѧ������������һ��и��ѽ����\n");
        command("recruit " + ob->query("id") );
 }

 void recruit_apprentice(object ob)
 {
        if( ::recruit_apprentice(ob) )
                ob->set("class", "xiake");
 }
 
int accept_fight(object me)
{
	command("say ����Ҳ�ã����С���ˡ�\n");
	return 1;
}

int accept_kill()
{
	command("emote �е���Сү�ɲ����㣡��ѽ��\n");
}



int give_book()
{
  object me,ob;

  me=this_player();

  if(me->query("family/family_name")!="�һ���")
  {
	command("say ���ֲ������һ����ĵ��ӣ���ôҲ������Ҫ������");
	return 1;
  }

  if( me->over_encumbranced() ) return notify_fail("���Ѿ����ɹ����ˣ�\n");

  if(HAVE_BOOK==0)
    command("say �������ˣ����ɵ��Ṧͼ���Ѿ��������ˡ�");  
  else  
  {
  clone_object("/d/lu/obj/dodge_book")->move(me);

    command("say �ðɣ��Ȿ�Ṧͼ������ȥ�ɡ�");  
    message_vision("½��Ӣ��$nһ���Ṧͼ�⡣\n",this_object(),me);   
    
    HAVE_BOOK=0;   
  }

  return 1;
}
