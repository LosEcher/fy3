// /NPC xuzhu.c
// By adx @ CuteRabbit 22:21 99-3-19

#include <ansi.h>

inherit NPC;
inherit F_MASTER;

string ask_me(string name);
void create()
{
	set_name("����", ({ "xu zhu", "xu", "zhu" }));
	set("long",
	    "����һ����ʮ�������������, Ũü����,\n"+
	    "���ı��ӱ�ƽ����, ��ò��Ϊ��ª. \n"+
	    "��һ���������µĳ���, ��ʹ�����Լ��־���.\n"+
	    "��������ɽͯ�ѵľ�������.\n");
	set("title", HIC"���չ�����"NOR);
	set("gender", "����");
	set("per", 16);
	set("age", 26);
	set("nickname", HIR "����" NOR);
	set("mingwang",5000);
	set("attitude", "peaceful");

	set("str", 30);
	set("int", 25);
	set("con", 40);
	set("dex", 30);

	set("max_kee", 3000);
	set("max_gin", 1200);
	set("force", 2500);
	set("max_force", 2500);
	set("force_factor", 80);

	set("combat_exp", 2500000);
	set_skill("force", 150);
	set_skill("unarmed", 150);
	set_skill("dodge", 150);
          set_skill("sword", 150);
	set_skill("parry", 150);


	set_skill("liuyang-zhang",150);
        set_skill("lingbo-steps",150);
	set_skill("duzun-gong", 150);
        set_skill("tianyu-qijian", 150);

	map_skill("force", "duzun-gong");

        map_skill("dodge", "lingbo-steps");
	map_skill("unarmed", "liuyang-zhang");
	map_skill("parry", "liuyang-zhang");
        map_skill("sword", "tianyu-qijian");

        set("inquiry", ([
		"������" : (: ask_me, "lingjiu" :),
		"����" : (: ask_me, "lingjiu" :),
		"СԺ" : (: ask_me, "lingjiu" :),
        ]));
	set("ling_count", 1);


	create_family("���չ�",2,"����");
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
 	carry_object("/d/lingjiu/obj/changpao")->wear();
        carry_object("/d/lingjiu/obj/jiudai");
        add_money("silver",50);
}
string ask_me(string name)
{
	mapping fam;
	object ob;
	
	if (!(fam = this_player()->query("family")) || fam["family_name"] != "���չ�")
		return RANK_D->query_respect(this_player()) +
		"�뱾��������������֪�˻��Ӻ�̸��";

	if (query("ling_count") < 1)
		return "�����ò���ʱ���Ѿ������������ˡ�";

	ob = new("/d/lingjiu/obj/" + name);
	ob->move(this_player());

	add("ling_count", -1);

	message_vision("�����$Nһ��" + ob->query("name") + "��\n", this_player());

	return "��ȥ�ɡ�";
}
void attempt_apprentice(object ob)
{
   if ((int)ob->query_skill("duzun-gong", 1) < 65) 
           {
		command("say " + RANK_D->query_respect(ob) + "�Ƿ�Ӧ�ö������˻�����Ψ�Ҷ��𹦣�");
		return;
	   }  
else {
		message_vision("����Ŀ��˼Ƭ��, ˵�������ð�, �Ҿ��������ˡ���\n",ob);
       command("recruit " + ob->query("id"));
		if((string)ob->query("class") != "officer")
			ob->set("class", "officer");
       return;}
}
