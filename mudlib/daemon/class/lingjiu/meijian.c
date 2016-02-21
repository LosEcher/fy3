// /NPC meijian.c
// By adx @ CuteRabbit 22:21 99-3-19

#include <ansi.h>

inherit NPC;
void create()
{
	set_name("÷��", ({ "mei jian", "mei"}));
	set("long",
	    "���Ǹ���ò毺õ�Ů��, ��������,\n"+
	    "�������, �������.\n"+
	    "���ܾ������ļ�����.\n");
	set("gender", "Ů��");
	set("per", 28);
	set("age", 18);
        set("shen_type",-1);
	set("attitude", "peaceful");

	set("per", 32);
	set("class", "officer");
	set("str", 25);
	set("int", 25);
	set("con", 25);
	set("dex", 25);

	set("kee", 1000);
	set("max_kee", 1000);
	set("gin", 500);
	set("max_gin", 500);
	set("force", 1200);
	set("max_force", 1200);
	set("force_factor", 40);

	set("combat_exp", 400000);
	set("score", 10000);
	set_skill("force", 100);
	set_skill("unarmed", 100);
	set_skill("dodge", 100);
	set_skill("parry", 100);
	set_skill("sword",100);

	set_skill("liuyang-zhang",100);
	set_skill("tianyu-qijian",100);
	set_skill("yueying-wubu",100);
	set_skill("duzun-gong", 100);

	map_skill("force", "duzun-gong");
	map_skill("dodge", "yueying-wubu");
	map_skill("unarmed", "liuyang-zhang");
	map_skill("parry", "liuyang-zhang");
	map_skill("sword", "tianyu-qijian");

	create_family("���չ�",3,"����");
	set("chat_chance_combat", 50);
	set("chat_msg_combat", ({
		(: perform_action, "strike.zhong" :),
		(: perform_action, "hand.duo" :),
		(: perform_action, "sword.san" :),
		(: command("unwield jian") :),
		(: command("wield jian") :),
		(: exert_function, "recover" :),
		(: exert_function, "recover" :),
		(: command("unwield jian") :),
		(: command("wield jian") :),
            }) );
	setup();
 	carry_object("/obj/weapon/sword")->wield();
	carry_object("/d/lingjiu/obj/qingyi")->wear();
        carry_object("/d/lingjiu/obj/doupeng")->wear();
	carry_object("/d/lingjiu/obj/jiudai");
	add_money("silver",15);
}
void init()
{
	object me, ob;
	mapping fam;

	::init();
	ob = this_player();
	me = this_object();
	
	if (interactive(ob) 
	&& !environment(ob)->query("no_fight")
	&& ((fam = ob->query("family")) && fam["family_name"] != "���չ�" ))
	{
		if( !ob->query_temp("warned") ) {
		command("say ����������˲��ý������չ��������뿪��");
			ob->set_temp("warned", 1);
	}
		else if( ob->query_temp("warned")<5 ) ob->add_temp("warned",1);
		else {
			command("say �󵨿�ͽ�������ô����չ�������\n");
			remove_call_out("kill_ob");
			call_out("kill_ob", 1, ob); 
		}
	}
}
