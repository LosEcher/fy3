
#include <ansi.h>
inherit KZZNPC;
inherit F_MASTER;
string ask_me();
int do_join();
void create()
{
	set_name("����", ({ "ma chaoxing", "ma"}));
	set("gender", "����");
	set("long", "\n��������ػ��˳����������ʹһ���󵶡�\n");
	set("age", 45);

	set("int", 30);
	
	set("kee", 1500);
	set("max_kee", 1500);
	set("gin", 500);
	set("max_gin", 500);
	set("score",200);

	set("combat_exp", 250000);
	set("attitude", "friendly");

	set_skill("force", 80);
	set_skill("unarmed",80);
	set_skill("parry", 80);
	set_skill("dodge", 80);
	set_skill("sword", 70);
	set_skill("blade", 100);
	set_skill("whip", 70);
	set_skill("yunlong-shengong", 70);
	set_skill("yunlong-shenfa", 70);
	set_skill("wuhu-duanmendao", 80);
	set_skill("houquan", 50);
	set_skill("yunlong-jian", 50);
	set_skill("yunlong-bian", 50);
	set_temp("apply/attack", 25);
	set_temp("apply/defense", 25);
	set_temp("apply/damage", 25);

	map_skill("force", "yunlong-shengong");
	map_skill("dodge", "yunlong-shenfa");
	map_skill("parry", "wuhu-duanmendao");
        map_skill("blade","wuhu-duanmendao");
	map_skill("sword", "yunlong-jian");
	map_skill("whip", "yunlong-bian");
        map_skill("unarmed","houquan");

	create_family("������",2, "����");
	set("class", "yunlong-xinfa");
	set("book_count", 1);
        set("inquiry", ([
		"�½���" :  "\n��������ֵ�ﵽ70�Ϳ��԰��ܶ���Ϊʦ��\n",
		"��ػ�" :  "\nֻҪ��Ӣ�ۺú���������������ػ�.\n",
		"���" : (:do_jiaru:),
                "���帴��" : "ȥҩ�̺͹ײĵ���ϸ���ưɣ�\n",
		"������" : (: ask_me :),
       ]) );
	set("chat_chance_combat", 50);  
	set("chat_msg_combat", ({
		(: command("smile") :),
		(: command("haha") :),
		(: command("chat ��λ" + RANK_D->query_respect(this_player())+",������ԩ�޳𣬺α����?\n") :),
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
		(: command("wield bian") :),
		(: command("wield bian") :),
		(: command("wield bian") :),
		(: command("wield bian") :),
                (: perform_action, "sword.xian" :),
                (: perform_action, "whip.chan" :),
                (: perform_action, "whip.chan" :),
                (: perform_action, "blade.duan" :),
                (: perform_action, "blade.duan" :),
                (: perform_action, "blade.duan" :),
                (: perform_action, "unarmed.zhen" :),
                (: perform_action, "unarmed.zhen" :),
                (: exert_function, "recover" :),
                (: exert_function, "recover" :),
		(: command("unwield bian") :),
		(: command("unwield bian") :),
		(: command("unwield bian") :),
		(: command("unwield bian") :),
		(: command("wield blade") :),
		(: command("wield blade") :),
		(: command("wield blade") :),
		(: command("wield blade") :),
		(: command("unwield blade") :),
		(: command("unwield blade") :),
		(: command("unwield blade") :),
		(: command("unwield blade") :),
		(: command("unwield blade") :),
		(: command("unwield blade") :),
                      }) );
	setup();
	carry_object("/d/obj/weapon/whip/whip");
carry_object("/obj/weapon/sword")->wield();
	carry_object("/obj/weapon/gangdao");
	carry_object("/obj/cloth")->wear();
        add_money("silver",20);
}

void init()
{
::init();
remove_call_out("greeting");
call_out("greeting", 1, this_player());
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
        ob = new("/d/city2/obj/yljing1");
        ob->move(this_player());
        return "�ðɣ��Ȿ�������������û�ȥ�ú����С�";
}

void attempt_apprentice(object ob)
{
/*
if((string)ob->query("gender")=="Ů��")
           {
 		command("say Ů�˵����������ߣ��������Ŷ������أ����������أ���");
		return;
	   }
*/
if((string)ob->query("gender")=="����")
           {
 		command("say �����Ŷ������أ��������������ķ��ˣ���");
		return;
	   }
	command("say �ðɣ���Ȼ" + RANK_D->query_respect(ob) + "Ҳ��" +
		"�ұ����ˣ������������ɡ�");
	command("recruit " + ob->query("id"));
	if((!(string)ob->query("class")) || ((string)ob->query("class") != "fighter"))
		ob->set("class","fighter");
}

void greeting(object ob)
{

               if(random(5)<2) say( "����Ц������λ" + RANK_D->query_respect(ob)
				+ "������ʲô��ƽ֮��ô��\n");
 
}
#include "tiandihui.h"
