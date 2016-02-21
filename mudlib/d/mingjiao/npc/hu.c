// hu.c ����ţ
// shilling 97.2
#include <ansi.h>;
inherit NPC;
inherit F_MASTER;

//void attempt_apprentice(object ob);
int ask_me();

void create()
{
	set_name("����ţ", ({ "hu qingniu", "hu" }));
	set("long", 
		"���������̺ųƼ������ȵĺ���ţ����˵����ͨҽ������������\n"
                "���������Ӳ�ҽ������ʿ��\n");
	set("gender", "����");
    	set("banghui","����");
	set("nickname","����ҽ��");
	set("age", 50);
	set("attitude", "peaceful");
	set("str", 25);
	set("int", 27);
	set("con", 25);
	set("dex", 25);
	set("inquiry", ([
		"����" : (:ask_me:),
	]) );

	set("max_kee", 1500);
	set("max_gin", 600);
	set("force", 3000);
	set("max_force", 3000);
	set("force_factor", 60);
	set("combat_exp", 150000);
	set("score", 80000);

	set_skill("force", 90);
	set_skill("dodge", 90);
	set_skill("unarmed",90);
	set_skill("parry", 90);

	setup();
	carry_object("/obj/cloth")->wear();
}

int ask_me()
{
	object ob;
	string bh;
	ob=this_player();

	bh=(string)ob->query("banghui");
	if (bh != "����")
		return notify_fail("�㲻�����������µ��ӣ��Ҳ�����Ϊ�����ˡ�\n");
	if ((int)ob->query("eff_kee") == (int)ob->query("max_kee"))
	{
		command("?"+ob->query("id"));     
		command("say ��û�����κ��˰���\n");
		return 1;
	}
	else
	{
		message_vision("����ţι$N����һ��ҩ��,Ȼ����ϥ���£�˫������$N�ı��ġ�\n", ob);
		remove_call_out("recover");
		call_out("recover",2,ob);
		return 1;
	}
}


int recover(object ob)
{
	ob->set("eff_kee", (int)ob->query("max_kee"));
	message_vision("��Լ����һ�Ѳ��ʱ�ݣ�����ţ������վ��������\n",ob);
	command("say ��������Ѿ�ȫ����,����������\n");
	return 1;
}
