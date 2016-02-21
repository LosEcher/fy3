// guanzho5.c
inherit NPC;

void create()
{
	set_name("������", ({ "wu" }));
	set("long", 
		"������ò���ʨ�����ڣ�һ����֪����������ʿ��\n");
	set("gender", "����");
	set("age", 32);
	set("attitude", "peaceful");
	set("shen_type", -1);
	set("str", 28);
	set("int", 20);
	set("con", 26);
	set("dex", 22);
	
	set("max_kee", 200);
	set("max_gin", 200);
	set("force", 200);
	set("max_force", 200);
	set("force_factor", 5);
	set("combat_exp", 20000);
	set("score", 30000);

	set_skill("dodge", 40);
	set_skill("unarmed", 50);
	set_skill("parry", 60);

	map_skill("dodge", "zhaixinggong");
	map_skill("unarmed", "xingxiu-duzhang");
  	map_skill("parry", "xingxiu-duzhang");

	setup();
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
			command("say ���쿴Ϸ���ɣ��������㳢����ү�Ҷ��Ƶ�������");
			ob->set_temp("warned", 1);
		}
		else if( ob->query_temp("stay") < 10 ) ob->add_temp("stay", 1);
		else {
			command("say ����������Ķ��ܣ�");
			remove_call_out("kill_ob");
			call_out("kill_ob", 1, ob); 
		}
	}       

}
