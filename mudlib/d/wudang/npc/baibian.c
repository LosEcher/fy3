// baibian.c

#include <ansi.h>

inherit NPC;

void create()
{
	seteuid(getuid());
	set_name("����", ({ "zhang san", "zhang", "san", "bai bian" }) );
	set("title", HIY "�ٱ����" NOR);
	set("gender", "����" );
	set("age", 50);
	set("long", "һλ�������ݵĵ�ʿ��\n");
	set("attitude", "heroism");
	set("class", "taoist");

	set("str", 21);
	set("con", 30);
	set("int", 27);
	set("dex", 23);

set("max_kee", 2200);
set("max_gin", 500);
set("force", 4000);
set("max_force", 2000);
	set("shen_type", -1);
set("force_factor", 60);
	set("env/wimpy", 70);

	set_temp("apply/attack",  10);
	set_temp("apply/defense", 20);

	set("combat_exp", 200000);

	set_skill("force", 80); 
	set_skill("unarmed", 90);
	set_skill("sword", 90);
	set_skill("dodge", 100);
	set_skill("parry", 100);
	set_skill("taiji-quan", 90); 
	set_skill("taiji-jian", 90); 
	set_skill("taiji-shengong", 80); 
	set_skill("tiyunzong", 90);

	map_skill("force", "taiji-shengong");
	map_skill("unarmed","taiji-quan");
	map_skill("parry", "taiji-quan");
	map_skill("sword", "taiji-jian");
	map_skill("dodge", "tiyunzong");

	create_family("�䵱��", 3, "����");

	set("chat_chance", 8);
	set("chat_msg", ({
		(: random_move :)
	}) );

	setup();

	carry_object("/obj/weapon/sword")->wield();
	carry_object(__DIR__"obj/greyrobe")->wear();
        
}

void init()
{	
	object ob, me;
	mapping skill_status, map_status, hp_status;
	string *sname, *mname;
	int i;

	me = this_object();
	ob = this_player();

	::init();

	if (me->is_fighting() || wizardp(ob)) return;

	remove_call_out("pretending");
	call_out("pretending", 10, ob);
	
	me->map_skill("unarmed");
	me->map_skill("dodge");
	me->map_skill("parry");

	if ( !(skill_status = ob->query_skills()) ) return;
	sname  = keys(skill_status);

	for(i=0; i<sizeof(skill_status); i++) {
		me->set_skill(sname[i], skill_status[sname[i]]);
	}

	if ( !(map_status = ob->query_skill_map()) ) return;
	mname  = keys(map_status);

	for(i=0; i<sizeof(map_status); i++) {
		me->map_skill(mname[i], map_status[mname[i]]);
	}
// Added by Hop, 1996.12.27
	hp_status = ob->query_entire_dbase();

	me->set("str", hp_status["str"]);
	me->set("int", hp_status["int"]);
	me->set("con", hp_status["con"]);
	me->set("dex", hp_status["dex"]);

	me->set("max_kee",    hp_status["max_kee"] * 2);
	me->set("eff_kee",    hp_status["eff_kee"] * 2);
	me->set("kee",        hp_status["eff_kee"] * 2);
	me->set("max_gin",  hp_status["max_gin"]);
	me->set("eff_gin",  hp_status["eff_gin"]);
	me->set("gin",      hp_status["eff_gin"]);
	me->set("max_force", hp_status["max_force"] * 2);
	me->set("force",     hp_status["max_force"] * 2);
	me->set("force_factor",     hp_status["force_factor"]);
	me->set("combat_exp",hp_status["combat_exp"] * 13 / 10);

}

void pretending(object ob)
{

	object me = this_object();
 
	if(!ob || !userp(ob) || environment(ob) != environment()) return;

	switch( random(3) ) {
		case 0:
                       command("grin " + ob->query("id"));
                       command("pretend " + ob->query("id"));
                       command("exert recover");
		       break;
		case 1:
                       command("hi " + ob->query("id"));
                       command("exert heal");
                       command("exert recover");
		       break; 
		case 2:
                       command("stare " + ob->query("id"));
		       me->fight_ob(ob);
		       ob->fight_ob(me);
		       break;
	}
}
