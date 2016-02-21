// guard.c

#include <ansi.h>

inherit NPC;
int do_func();
void create()
{
	set_name("������",({"yan mama","yan","mama"}));
	set("gender","Ů��");
	set("age",45);
	set("str",30);
	set("per",1);
	set("cor", 30);
	set("mingwang",-1);
	set("cps", 30);
	set("int",30);
	set("con",30);
	set("long",
		"Ŀ���о���ɷ������������Ȯ��¶�˳�����\n"+
		"����Ҫҧ��һ�ڣ����˾���˵�����Ķ������ܡ�\n"
	);
	set("combat_exp",8000);
	set("attitude","hero");
	set("inquiry", ([
		"����" : (:do_func:),
		"huafei" : (:do_func:),
	]) );
	set_skill("parry",40);
	set_skill("dodge",40);
	set_temp("apply/defense",20);
	set_temp("apply/attack",20);
	set_skill("blade",40);
	setup();
	carry_object("/obj/cloth")->wear();
	carry_object("/obj/weapon/blade")->wield();
	add_money("silver",10);
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
int do_func()
{
	object me;
	me=this_player();
	command("grin");
	message_vision(RED"���������$N��Ц��������Ƿ���Ҫ�Ļ��ʣ�"+
	"���ҾͲ������ˡ�\n"NOR,me);
	kill_ob(me);
	me->fight_ob(this_object());
	return 1;
}
void greeting(object ob)
{
 	if( !ob || environment(ob) != environment() ) return;
	switch(random(3))	{
	 case 0:message_vision(CYN"�������Ц������λ"+RANK_D->query_respect(ob)+
	"���������ʵİɡ�\n"NOR,ob);
			break;
	case 1: message_vision(CYN"������������������������ʲ��󹻣���֪��û��ʲô"+
	"��Ը�������ʡ�\n"NOR,ob);
			break;
	case 2:message_vision(CYN"����������һ˫С�ۣ�����ͷ������$N���������"+
	"���������ϺõĻ���ѽ��\n"NOR,ob);
			break;
				}
}
