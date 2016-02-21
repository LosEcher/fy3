#include <ansi.h>
inherit NPC;
string *dir=({
	"north",
	"south",
	"east",
	"west",
});

void create()
{
	set_name("Ұ��կ��ͷĿ",({"da toumu","da","toumu"}));
	set("nickname","�����Ѫ");
	set("area","Ұ��կ");
	set("age",35);
	set_skill("dodge",100);
	set_skill("unarmed",100);
	set_skill("parry",100);
	set_skill("blade",100);
	set("max_force",900);set("force",900);
        set("shen_type",-1);
	set("combat_exp",300000);
        setup();
	carry_object(__DIR__"obj/gangdao")->wield();
	add_money("gold",1);
	carry_object(__DIR__"obj/tiejia")->wear();
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
                command("say ����˽��Ұ��կ���ҿ����ǲ�����ˣ�\n");
		command("guard "+dir[random(sizeof(dir))]);
                kill_ob(ob);
                ob->fight_ob(this_object());
                return;
        }
}


