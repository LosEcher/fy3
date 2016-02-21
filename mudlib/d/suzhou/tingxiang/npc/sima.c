// guard.c

#include <ansi.h>

inherit NPC;
int do_func();

void create()
{
	object ob;
	set_name("˾����",({"sima lin","sima","lin"}));
	set("title","����ɵ���");
	set("gender", "����" );
	set("age",25);
	set("mingwang",-1);
	set("str",40);
	set("cor", 30);
	set("cps", 30);
	set("int",30);
	set("con",40);
	set("long",
		"���������˾����֮�ӡ�\n"+
		"ǰ��Ľ�ݼ��游����\n"
	);
	set("combat_exp",60000);
	set("attitude","hero");
	set_skill("parry",40);
	set_skill("dodge",40);
	set_skill("throwing",40);
	set_temp("apply/parry",50);
	set_temp("apply/dodge",50);
	set_temp("apply/blade",50);
	setup();
	        ob=carry_object(__DIR__"obj/leigonghong.c");
        ob->set_amount(50);
	ob->wield();
	carry_object("/obj/cloth")->wear();
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
	if(ob->query("family/family_name")!="����Ľ��") return;
	if(ob->query("combat_exp")>=10000&&ob->query("combat_exp")<20000)	{
		message_vision(RED"˾����ɱ�����ڵĶ�$N����������Ľ�ݸ�������ʬ�ɣ�\n"NOR,ob);
		kill_ob(ob);
		ob->fight_ob(this_object());
	}
}
