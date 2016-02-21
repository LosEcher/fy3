// guard.c

#include <ansi.h>

inherit NPC;
int do_func();

void create()
{
	set_name("կ��",({"zai ding","zai","ding"}));
	set("title","�ؼ�կ");
	set("gender", "����" );
	set("age",20);
	set("str",30);
	set("mingwang",-1);
	set("cor", 30);
	set("cps", 30);
	set("int",30);
	set("con",30);
	set("long",
		"��Ŀ���ı����󺺣���ɫ������\n"
	);
	set("combat_exp",40000);
	set("attitude","hero");
	set_skill("parry",30);
	set_skill("dodge",30);
	set_skill("blade",30);
	setup();
	carry_object("/obj/cloth")->wear();
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
        if( !ob || environment(ob) != environment() ) return;
	if(ob->query("family/family_name")!="����Ľ��")	return;
	if(ob->query("combat_exp")>=5000&&ob->query("combat_exp")<10000)	{
	message_vision(RED"կ����Ц����"+ob->query("name")+"��������������ļ��գ�\n"NOR,ob);
		kill_ob(ob);
		ob->fight_ob(this_object());
	}
}
