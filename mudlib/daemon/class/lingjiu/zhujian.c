// /NPC zhujian.c
// By adx @ CuteRabbit 22:21 99-3-19

#include <ansi.h>

inherit NPC;
void create()
{
	set_name("��", ({ "zhu jian", "zhu"}));
	set("long",
	    "���Ǹ���ò毺õ�Ů��, ��������,\n"+
	    "�������, �������.\n"+
	    "���ܾ������ļ�����.\n");
	set("gender", "Ů��");
	set("per", 27);
	set("age", 18);
        set("shen_type",-1);
	set("attitude", "peaceful");

	set("per", 31);
	set("class", "officer");
	set("str", 25);
	set("int", 25);
	set("con", 25);
	set("dex", 25);
	set("shen_type",1);

	set("kee", 1000);
	set("max_kee", 1000);
	set("gin", 500);
	set("max_gin", 500);
	set("force", 1000);
	set("max_force", 1000);
	set("force_factor", 30);

	set("combat_exp", 500000);
	set("score", 10000);
	set_skill("force", 80);
	set_skill("unarmed", 80);
	set_skill("dodge", 80);
	set_skill("parry", 80);
	
	set_skill("sword",80);

	set_skill("liuyang-zhang",80);
	set_skill("tianyu-qijian",80);
	set_skill("yueying-wubu",80);
	set_skill("duzun-gong", 80);

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
