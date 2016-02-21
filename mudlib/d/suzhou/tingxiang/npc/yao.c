// guard.c

#include <ansi.h>

inherit NPC;

void create()
{
	set_name("Ҧ����",({"yao bodang","yao","bodang"}));
	set("title","�ؼ�կկ��");
	set("gender", "����" );
	set("age",45);
	set("str",40);
	set("cor", 30);
	set("mingwang",-1);
	set("cps", 30);
	set("int",30);
	set("con",40);
	set("long",
		"�����ؼ�կ���廢���ŵ������ˡ�\n"
	);
	set("combat_exp",100000);
	set("attitude","hero");
	set_skill("parry",60);
	set_skill("dodge",60);
	set_skill("blade",60);
	setup();
	carry_object("obj/weapon/blade")->wield();
	carry_object("obj/cloth")->wear();
}
void init()
{
	object ob;
	::init();
	        if( interactive(ob = this_player()) && !is_fighting() ) {
                call_out("greeting", 1, ob);
        }
}
void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;
	if(ob->query("family/family_name")!="����Ľ��")	{
		message_vision(CYN"Ҧ������$NЦ������λ"+RANK_D->query_respect(ob)+"Ҳ����Ѱ����Ľ�ݻ����İɣ������ǿ���־ͬ���ϡ�\n"NOR,ob);
		return;
	}
	if(ob->query("combat_exp")<5000)	{
		message_vision(CYN"Ҧ������$Nŭ������ȥ��Ľ�ݸ����ҽ��������Ϸ��ѵ��һ�£�\n"NOR,ob);
	return;
	}
	if(ob->query("combat_exp")>=30000)	{
		message_vision(RED"Ҧ������$Nŭ������Ҳ���Ľ�ݸ����������ȿ����ɣ�\n"NOR,ob);
	kill_ob(ob);
	ob->fight_ob(this_object());
	}
}
