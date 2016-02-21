// guard.c

#include <ansi.h>

inherit NPC;

void create()
{
	set_name("������",({"wang furen","wang","furen"}));
	set("title","����ɽׯׯ��");
	set("gender","Ů��");
	set("age",35);
	set("str",40);
	set("cor", 30);
	set("mingwang",-1);
	set("cps", 30);
	set("int",30);
	set("con",40);
	set("per",30);
	set("long",
		"����Ƴ������������з�˪���µĺۼ���\n"
	);
	set("combat_exp",100000);
	set("attitude","friendly");
	set_skill("parry",60);
	set_skill("dodge",60);
	set_skill("blade",70);
	set_temp("apply/dodge",60);
	set_temp("apply/parry",60);
	set_temp("apply/attack",60);
	setup();
	carry_object(__DIR__"obj/dress")->wear();
	carry_object("obj/weapon/blade")->wield();
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
	int count;
	        mapping my;
	if( !ob || environment(ob) != environment() ) return;
	my=ob->query_entire_dbase();
	if (this_object()->is_killing(my["id"])) {
//	message_vision(RED"�����˺ȵ���"+ob->query("name")+"�������ߣ�\n"NOR,ob);
	return ;
	}
	if(ob->query("gender")=="Ů��")	{
	message_vision(CYN"�������º͵Ķ�$N˵�����书����ʲô���ѣ�����ȥ�������̡�\n"NOR,ob);
		return;
	}
	count=ob->query("oldsix_flag/wangfuren");
	if(!count||count==0)	{
		message_vision(CYN"������üͷ΢�壬��$N˵��������������������ҷ�����ת�ܣ��´α������ټ����㡣\n"NOR,ob);
		count=0;
	}
	if(count<10&&count>0)	{
		message_vision(YEL"�����˺ȵ���"+ob->query("name")+"���ϴ���˵�Ļ��ѵ����˲��ɣ��´β����ٽ�����ݣ�\n"NOR,ob);
	}
	if(count>=10)	{
	message_vision(RED"������ŭ������ѵ���˵����ͬ��ƨ���ɣ���\n"NOR,ob);
	count=-1;
	kill_ob(ob);
	ob->fight_ob(this_object());
	}
	count=count+1;
	ob->set("oldsix_flag/wangfuren",count);
}
