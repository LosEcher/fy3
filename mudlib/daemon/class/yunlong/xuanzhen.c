// xuanzhen.c 

#include <ansi.h>
inherit NPC;

string ask_me();
void create()
{
	set_name("�������", ({ "xuan zhen", "xuan", "zhen" }));
	set("gender", "����");
	set("long", "\n��λ��Ĭ���Եĵ��ˣ�������ػ���ľ�û�����\n"+
		"������ľ����һ�����ĺ��֣�һ������ʹ�ó����뻯��\n");
	set("age", 55);
	set("banghui","��ػ�");
	set("bh_rank","��ľ�û���");

	set("int", 30);
	
	set("kee", 2000);
	set("max_kee", 2000);
	set("gin", 500);
	set("max_gin", 500);
	set("mingwang",600);
	set("max_force",1500);
	set("force",1500);
	set("force_factor",100);

	set("combat_exp", 1000000);
	set("attitude", "friendly");

	set_skill("force", 150);
	set_skill("unarmed", 150);
	set_skill("parry", 150);
	set_skill("dodge", 150);
	set_skill("sword", 150);
	set_skill("whip", 150);

	set_skill("yunlong-shenfa", 150);
	set_skill("yunlong-xinfa", 150);
	set_skill("yunlong-shou", 150);
	set_skill("yunlong-jianfa",150);
	set_skill("yunlong-bianfa",150);
	set_temp("apply/attack", 70);
	set_temp("apply/defense", 70);
	set_temp("apply/damage", 60);

	map_skill("force", "yunlong-xinfa");
	map_skill("dodge", "yunlong-shenfa");
	map_skill("parry", "yunlong-jianfa");
	map_skill("sword", "yunlong-jianfa");
	map_skill("unarmed", "yunlong-shou");
	map_skill("whip", "yunlong-bian");

	set("book_count", 1);
        set("inquiry", ([
		"�½���" :  "\n�ܶ����������档\n",
		"��ػ�" :  "\nֻҪ��Ӣ�ۺú���������������ػᡣ\n",
		"������" : (: ask_me :),
       ]) );
	set("chat_chance_combat", 50);  
	set("chat_msg_combat", ({
		(: command("unwield changjian") :),
		(: command("unwield changjian") :),
		(: command("unwield changjian") :),
		(: command("unwield changjian") :),
		(: command("unwield changjian") :),
		(: command("unwield changjian") :),
		(: command("unwield changjian") :),
		(: command("unwield changjian") :),
		(: command("wield changjian") :),
		(: command("wield changjian") :),
		(: command("wield changjian") :),
		(: command("wield changjian") :),
		(: command("wield changjian") :),
		(: command("wield changjian") :),
		(: command("wield bian") :),
		(: command("wield bian") :),
		(: command("wield bian") :),
		(: command("wield bian") :),
                (: perform_action, "sword.xian" :),
                (: perform_action, "sword.xian" :),
                (: perform_action, "sword.xian" :),
                (: perform_action, "whip.chan" :),
                (: perform_action, "whip.chan" :),
                (: exert_function, "recover" :),
                (: exert_function, "recover" :),
		(: command("unwield bian") :),
		(: command("unwield bian") :),
		(: command("unwield bian") :),
		(: command("unwield bian") :),
                      }) );
	setup();
	carry_object("/obj/weapon/sword")->wield();
	carry_object("/obj/cloth")->wear();
	carry_object("/obj/weapon/whip")->wield();
        add_money("gold",3);
}

void init()
{
        object ob;

        ::init();

        if( interactive(ob=this_player()) && !is_fighting())
        {
                remove_call_out("greeting");
                call_out("greeting",1,ob);
        }
}

string ask_me()
{
        string banghui; 
	object ob;

	banghui=(string)this_player()->query("banghui");
	if(! banghui || banghui!=(string)query("banghui"))
                return RANK_D->query_respect(this_player()) + 
                "������ػ�������������֪�˻��Ӻ�̸��";
        if (query("book_count") < 1)
                return "�������ˣ������澭���ڴ˴���";
        add("book_count", -1);
        ob = new("/d/huanggon/obj/yljing2");
        ob->move(this_player());
        return "�ðɣ��Ȿ�������������û�ȥ�ú����С�";
}

void greeting(object ob)
{
	string banghui;
	banghui=(string)ob->query("banghui");

	if( !ob || environment(ob) != environment() ) return;
	if(banghui==(string)query("banghui"))	{
			say( "���������λ" + RANK_D->query_respect(ob)
				+ "���ܶ����������õ��㣬��Щȥ�ɡ�\n");
	}
	else if((int)ob->query("mingwang")<-10000)	{
		say("����ȵ�����������ְ��࣬�������ɣ�\n");
		kill_ob(ob);
		ob->fight_ob(this_object());
	}
	else say( "����Ц������λ" + RANK_D->query_respect(ob)
				+ "�����������ʲô��\n");
 
}


int recognize_apprentice(object ob)
{
        string banghui;
        if(! stringp(banghui=ob->query("banghui")) ||
                banghui!=query("banghui"))
        return notify_fail(query("name")+"ҡͷ����������ػ��ֵܲ��̡�\n");
	if(ob->query("score")<2500)
                return notify_fail(query("name")+"������Ҫ��Ϊ��ػ��������\n")
;
        return 1;
}
