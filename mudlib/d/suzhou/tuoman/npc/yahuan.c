// guard.c

#include <ansi.h>

inherit NPC;

void create()
{
	set_name("�Ĳ�",({"you cao","you","cao"}));
	set("title","СѾ��");
	set("gender","Ů��");
	set("age",16);
	set("str",20);
	set("cor", 30);
	set("cps", 30);
	set("int",30);
	set("con",30);
	set("long",
		"����ɽׯ��СѾ������������һ�����ݡ�\n"+
		"��������ϲ�������㡣\n"
	);
	set("combat_exp",100);
	set("attitude","peace");
	set_skill("parry",10);
	set_skill("dodge",10);
	set_skill("unarmed",10);
	setup();
	carry_object("/obj/cloth")->wear();
}
void init()
{
object ob;
        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
		}
}
void greeting(object ob)
{
 	if( !ob || environment(ob) != environment() ) return;
	if(ob->query("gender")=="����")	{
		message_vision(CYN"�Ĳݶ���$N��ü����������޸������ˣ�"+RANK_D->query_respect(ob)+"���ǿ��߰ɣ�\n"NOR,ob);
		return;
	}
	message_vision(CYN"�Ĳݶ���$N΢΢һЦ��\n"+
		"˵������ӭ��λ"+RANK_D->query_respect(ob)+
		"ǰ������ɽׯ���͡�\n"NOR,ob);
}
