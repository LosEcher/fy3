// guard.c

#include <ansi.h>

inherit NPC;
int do_func();

void create()
{
	object ob;
	set_name("���",({"zhu baokun","zhu","baokun"}));
	set("title","����ɵ���");
	set("gender", "����" );
	set("age",30);
	set("mingwang",-1);
	set("str",40);
	set("cor", 30);
	set("cps", 30);
	set("int",30);
	set("con",40);
	set("long",
		"���Ű��ۣ�ͷ�ϰײ���������������ɥ����\n"+
		"���������֮�¸��Ե�����ɭɭ��\n"
	);
	set("combat_exp",80000);
	set("attitude","hero");
	set_skill("parry",50);
	set_skill("dodge",50);
	set_skill("throwing",50);
	setup();
	carry_object("/obj/cloth")->wear();
	ob=carry_object(__DIR__"obj/leigonghong");
	ob->set_amount(50);
	ob->wield();
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
	if(ob->query("combat_exp")>=20000&&ob->query("combat_exp")<30000)	{
		message_vision(RED"�������$N�е��������ߣ�������������\n"NOR,ob);
		kill_ob(ob);
		ob->fight_ob(this_object());
	}
}
