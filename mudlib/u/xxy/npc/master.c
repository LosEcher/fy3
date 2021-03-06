// lu_guanying.c
// str = 膂力, int = 悟性, cps = 定力, con = 根骨, wis = 慧根, dex = 机敏。
#include <ansi.h>

inherit NPC;
inherit F_MASTER;

int HAVE_BOOK=1;

int give_book();

void create()
{
		set_name("陆冠英", ({ "lu guanying", "lu","master" }) );
		set("title", "江南归云庄少庄主");

		set("long","陆冠英正当壮年，背厚膀宽，躯体壮健，气宇轩昂，真是位少年英雄。\n");
		set("rank_info", "归云庄少庄主");

		set("gender", "男性");
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


        set("combat_exp", 10000);
        set("score", 2000);

        set_skill("unarmed", 90);
        set_skill("parry", 90);
        set_skill("dodge", 90);
        set_skill("sword", 90);
        set_skill("force", 90);
        set_skill("literate", 100);
		create_family("桃花岛", 3, "弟子");
	
		set("inquiry", ([
			"宝贝" : (: give_book :),
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
 "，本门武功博大精深，你要勤学苦练，不可有一日懈怠呀！。\n");
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
  if( me->over_encumbranced() ) return notify_fail("你已经负荷过重了！\n");

  if(HAVE_BOOK==0)
    command("say 你来晚了，本派的九转金丹已经给别人了。");  
  else  
  {
  clone_object("/obj/jindan")->move(me);

    command("say 好吧，这粒九转金丹你拿去吧。");  
    message_vision("陆冠英给$n一粒九转金丹。\n",this_object(),me);   
    
    HAVE_BOOK=0;   
  }

  return 1;
}
