// guanzho1.c
#include <ansi.h>

inherit NPC;

void create()
{
	set_name("���ڼ�", ({
		"jia"
	}));
	set("long",
		"����һλʮ�ְ����Ĺ��ڣ����������ȴ�����������\n"+
                "�����۴�׳��������Բ���ֱֳ��У��ƺ���һ�����ա�\n"
	);

	set("gender", "����");
	set("attitude", "peaceful");
	set("class", "bonze");

	set("age", 40);
	set("shen_type", 1);
	set("str", 25);
	set("int", 20);
	set("con", 20);
	set("dex", 25);
	set("max_kee", 500);
	set("max_gin", 300);
	set("force", 500);
	set("max_force", 500);
	set("force_factor", 50);
	set("combat_exp", 10000);
	set("score", 1);

	set_skill("force", 50);
	set_skill("hunyuan-yiqi", 50);
	set_skill("dodge", 50);
	set_skill("shaolin-shenfa", 50);
	set_skill("unarmed", 50);
	set_skill("parry", 50);
	set_skill("blade", 50);

	map_skill("force", "hunyuan-yiqi");
	map_skill("dodge", "shaolin-shenfa");
	map_skill("unarmed", "banruo-zhang");
	map_skill("parry", "cibei-dao");
	map_skill("blade", "cibei-dao");

	setup();

carry_object("/obj/weapon/gangdao")->wield();
carry_object("/obj/cloth")->wear();
}

void init()
{
	object me, ob;

	::init();

	ob = this_player();
	me = this_object();
	
	if (interactive(ob) 
	&& !environment(ob)->query("no_fight"))
	{
		if( !ob->query_temp("warned") ) {
			command("say ����˭����Ȼ����������ң���������ǲ��ǣ���");
			command("say ����ҹ�Զ������������ٿ����㣬��Ȼ����һ�ξͿ���һ�Σ�");
		}
		else if( ob->query_temp("stay") < 10 ) ob->add_temp("stay", 1);
		else {
			command("say �󵨿�ͽ�������ӣ���\n");
			remove_call_out("kill_ob");
			call_out("kill_ob", 1, ob); 
		}
	}       

}
