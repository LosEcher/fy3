// chen.c �½���

#include <ansi.h>

inherit KZZNPC;
inherit F_MASTER;
string ask_me();
int do_join();
void create()
{
	set_name("�½���", ({ "chen jin nan", "chen","nan" }));
	set("nickname", HIC "Ӣ���޵�" NOR);
	set("long", 
		"\n����һ����ʿ����������������ɫ�Ͱ���\n"
		"������������������ػ��ܶ����½���,\n"
		"��˵ʮ�˰����գ�������ͨ��\n"
		"ż������߿��������پ���Ŀ����磬Ӣ�����ˡ�\n");
	set("gender", "����");
	set("age", 45);
	set("attitude", "friendly");
	set("shen_type", 1);
	set("str", 30);
	set("int", 30);
	set("con", 30);
	set("dex", 30);
	
	set("max_kee", 5000);
	set("max_gin", 2000);
	set("force", 5000);
	set("max_force", 5000);
	set("force_factor", 100);
	set("combat_exp", 2000000);
	set("score", 500000);

	set_skill("literate", 100);
	set_skill("force", 200);
	set_skill("dodge", 200);
	set_skill("unarmed", 200);
	set_skill("parry", 200);
	set_skill("whip", 200);
	set_skill("blade", 200);
	set_skill("sword", 200);
	set_skill("houquan", 150);
	set_skill("yunlong-xinfa", 200);
	set_skill("yunlong-shengong", 200);
	set_skill("wuhu-duanmendao", 150);
	set_skill("yunlong-jian", 200);

	set_skill("yunlong-shenfa", 150);
	set_skill("yunlong-bian", 150);
	set_skill("yunlong-shou", 150);
	set_skill("ningxue-zhua", 150);

	map_skill("dodge", "yunlong-shenfa");
	map_skill("force", "yunlong-shengong");
	map_skill("unarmed", "ningxue-zhua");
	map_skill("blade", "wuhu-duanmendao");
	map_skill("parry", "yunlong-shou");
	map_skill("sword", "yunlong-jian");
	map_skill("whip", "yunlong-bian");

	create_family("������",1, "��ɽ��ʦ");
	set("class", "yunlong-xinfa");
	set("book_count", 1);
        set("inquiry", ([
		"��ػ�" :  "\nֻҪ��Ӣ�ۺú���������������ػ�(join tiandihui)��\n",
		"���" :(:do_join:),
                "���帴��" : "ȥ�ײĵ�ͻش�����ϸ���ưɣ�\n",
                "����" : "�����£�\n",
                "�п�" : "�����£�\n",
		"��������" : (: ask_me :),
       ]) );
	set("env/wimpy", 60);
	set("chat_chance_combat", 70);  
	set("chat_msg_combat", ({
		"\n�½���ҡͷ̾�����۵��������������������������Ǻο���?\n",
		(: command("smile") :),
		(: command("poem") :),
		(: command("nomatch") :),
		(: command("haha") :),
		(: command("chat ��λ" + RANK_D->query_respect(this_player())+",������ԩ�޳𣬺α����?\n") :),
                (: perform_action, "sword.xian" :),
                (: exert_function, "recover" :),
                (: exert_function, "recover" :),
                      }) );
 	setup();
	carry_object("/d/city2/obj/jinduan")->wear();
	carry_object(__DIR__"leftsword")->wield();
	carry_object("/d/city2/obj/hlbian")->wield();
carry_object("/obj/weapon/gangdao")->wield();
}

string ask_me()
{
        mapping fam; 
        object ob;

        if (!(fam = this_player()->query("family")) 
	    || fam["family_name"] != "������")
                return RANK_D->query_respect(this_player()) + 
                "�뱾��������������֪�˻��Ӻ�̸��";
        if (query("book_count") < 1)
                return "�������ˣ����ɵ������澭���ڴ˴���";
        add("book_count", -1);
        ob = new("/d/city2/obj/yljianpu");
        ob->move(this_player());
        return "�ðɣ��Ȿ���������ס����û�ȥ�ú����С�";
}


void attempt_apprentice(object ob)
{
	if ((int)ob->query_skill("yunlong-shengong", 1) < 50) {
		command("say �����������ڼ��书���������ڹ��ķ���"); 
		command("say " + RANK_D->query_respect(ob) + 
			"�Ƿ�Ӧ�����������϶��µ㹦��");
		return;
	}
	if ((int)ob->query("score") <600) {
		command("say ���������书�����޵У��������ţ�\n�ش����������������壬Ϊ���²���ı������\n"); 
		command("say " + RANK_D->query_respect(ob) + 
			"�Ƿ�Ӧ���ȳ�ȥ��һ�������������춯�صĴ��£�");
	return ;
	}
	if ((int)ob->query("score") < 500) {
		command("say ѧ��֮�ˣ�����Ϊ�ȣ�����ĸߵ͵�������Σ�δ���䣬Ҫ��ѧ���ˡ�");
		command("say �ڵ��з��棬" + RANK_D->query_respect(ob) +
			"�Ƿ����ò�����");
	return ;
	}
	if(ob->query("score")<80)
	{
	if((int)ob->query("mingwang")<0) command("say "+ RANK_D->query_respect(ob) +"��Ȼ��а�����ˣ���Ҳ������Щ���¡�\n");
	command("chat ����ػ�������Ϊ����һ����ǰ����δ��֮�¡�\n");
	command("chat ���¿������ң��������ţ������Ȼ���ֺ����ۣ�\n");
	command("chat �����������ɣ���\n");
	command("chat �벻����һ������ҵ�������������˴��ˣ�����������������\n");
	}
	command("recruit " + ob->query("id"));
	if((!(string)ob->query("class")) || ((string)ob->query("class") != "fighter"))
		ob->set("class","fighter");
}
