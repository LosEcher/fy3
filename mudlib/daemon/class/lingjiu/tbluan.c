// /d/lingjiu/npc/tbluan.c ��첿 ������
// By adx @ CuteRabbit 22:21 99-3-19

#include <ansi.h>

inherit NPC;

void create()
{
	set_name("������", ({ "zhou popo", "zhou", "popo" }));
	set("long",
	    "����"+HIC"�����չ���"NOR+"����Ų�����첿������.\n"+
	    "������ͯ�Ѷ���, ��������,������˪.\n");
	set("title", HIC"��첿����"NOR);
	set("gender", "Ů��");
	set("age", 60);
        set("shen_type",-1);
	set("attitude", "peaceful");

	set("per", 21);
	set("class", "scholar");
	set("str", 20);
	set("int", 25);
	set("con", 30);
	set("dex", 30);

	set("kee", 1300);
	set("max_kee", 1300);
	set("gin", 500);
	set("max_gin", 500);
	set("force", 2000);
	set("max_force", 2000);
	set("force_factor", 80);

	set("combat_exp", 700000);
	set_skill("force", 100);
	set_skill("unarmed", 100);
	set_skill("dodge", 100);
	set_skill("parry", 100);
	
        set_skill("sword",100);

	set_skill("liuyang-zhang",80);
	set_skill("yueying-wubu",80);
        set_skill("duzun-gong", 70);
        set_skill("tianyu-qijian", 70);

	map_skill("force", "duzun-gong");

	map_skill("dodge", "yueying-wubu");
	map_skill("unarmed", "liuyang-zhang");
	map_skill("parry", "liuyang-zhang");
   	map_skill("sword", "tianyu-qijian");


	create_family("���չ�",4,"����");
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
        add_money("silver",25);
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
