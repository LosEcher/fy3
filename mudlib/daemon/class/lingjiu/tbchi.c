// /d/lingjiu/npc/tbhao.c ���첿 ������
// By adx @ CuteRabbit 22:21 99-3-19

#include <ansi.h>

inherit NPC;

string ask_me_1(string name);
string ask_me_2(string name);
void create()
{
	set_name("������", ({ "qiu popo", "qiu", "popo" }));
	set("long",
	    "����"+HIC"�����չ���"NOR+"����Ų��г��첿������.\n"+
	    "������ͯ�Ѷ���, ��������,������˪.\n");
	set("title", HIC"���첿����"NOR);
	set("gender", "Ů��");
	set("age", 60);
        set("shen_type",-1);
	set("attitude", "peaceful");

	set("per", 23);
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

	map_skill("force", "duzun-gong");
	map_skill("dodge", "yueying-wubu");
	map_skill("unarmed", "liuyang-zhang");
	map_skill("parry", "liuyang-zhang");
   	map_skill("sword", "tianyu-qijian");

        set("inquiry", ([
		"����" : (: ask_me_1, "towel" :),
		"ë��" : (: ask_me_1, "towel" :),
		"¹Ƥ�ƴ�" : (: ask_me_2, "lpjiudai" :),
		"�����ܵ���" : (: ask_me_2, "baiyunwan" :),
        ]));
	set("yaopin_count_1", 5);
	set("yaopin_count_2", 1);

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
string ask_me_1(string name)
{
	mapping fam; 
	object ob;
	
	if (!(fam = this_player()->query("family")) || fam["family_name"] != "���չ�")
		return RANK_D->query_respect(this_player()) + 
		"�뱾��������������֪�˻��Ӻ�̸��";

	if (  present(name, this_player()) )
		return RANK_D->query_respect(this_player()) + 
		"����������Ҫ�ˣ� ����̰�����У�";

	if (query("yaopin_count_1") < 1)
		return "��Ǹ�������ò���ʱ��";

	ob = new("/d/lingjiu/obj/" + name);
	ob->move(this_player());

	add("yaopin_count_1", -1);

	message_vision("�����Ÿ�$Nһ��" + ob->query("name") + "��\n", this_player());

	return "��ȥ�ɡ��Ͽ쵽�з����ԡ���ˡ�";
}
string ask_me_2(string name)
{
	mapping fam; 
	object ob;
	
	if (!(fam = this_player()->query("family")) || fam["family_name"] != "���չ�")
		return RANK_D->query_respect(this_player()) + 
		"�뱾��������������֪�˻��Ӻ�̸��";

	if (  present(name, this_player()) )
		return RANK_D->query_respect(this_player()) + 
		"���������ϲ���������������Ҫ�ˣ� ����̰�����У�";

	if (query("yaopin_count_2") < 1)
		return "��Ǹ�������ò���ʱ��";

	ob = new("/d/lingjiu/obj/" + name);
	ob->move(this_player());

	add("yaopin_count_2", -1);

	message_vision("�����Ÿ�$Nһ��" + ob->query("name") + "��\n", this_player());

	return "��ȥ�ɡ��ú��������������չ���";
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
