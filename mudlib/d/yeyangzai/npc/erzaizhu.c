#include <ansi.h>
inherit NPC;

void create()
{
	set_name("Ҧ����",({"yao boyi","yao"}));
	set("nickname","�ȷ�ն");
	set("area","Ұ��կ");
	set("age",50);
        set("shen_type",-1);
	set_skill("dodge",120);
	set_skill("unarmed",120);
	set_skill("parry",120);
	set_skill("blade",120);
	set("max_force",1000);set("force",1000);
	set("combat_exp",500000);
        setup();
	carry_object(__DIR__"obj/xingfengdao")->wield();
	add_money("gold",2);
	carry_object(__DIR__"obj/gangjia")->wear();
}
	
void init()
{
        object ob,area;
        area=new("/obj/area");
        area->create(query("area"));
        set("banghui",(string)area->query("banghui"));
        destruct(area);
	::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
}

void greeting(object ob)
{
	string banghui;
        if( !ob || environment(ob) != environment() ) return;
	banghui=(string) ob->query("banghui");
        if(! banghui || query("banghui")!=banghui)   {
		command("say ��Ȼ����Ұ��կ�������ų�ȥ�ɣ�\n");
                command("guard north");
                kill_ob(ob);
                ob->fight_ob(this_object());
                return;
        }
}


