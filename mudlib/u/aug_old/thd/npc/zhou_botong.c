// zhou_botong.c
// 97.7.14 by Aug

#include "thd.h"
inherit NPC;

int leave_hole();

void create()
{
	set_name("�ܲ�ͨ", ({ "zhou botong","zhou" }) );
	set("title", "ȫ�������");
	set("gender", "����");
	set("age", 63);
//	set("race","����");
//	set("class","quanzhen");

	set("long",
"�ܲ�ͨ�Ǹ��׷�ͯ�յ����ˣ�������һ������������
һ�������������ӣ�ʵ���С����Ƣ����\n");
	set("rank_info", "ȫ�����");
	set("nick", "����ͯ");

	set("max_gin", 2000);
	set("max_kee", 2000);
	set("max_sen", 2000);

	set("max_atman", 2000);
	set("atman", 2000);
	set("max_force", 2000);
	set("force", 2000);
	set("max_mana", 2000);
	set("mana", 2000);

	set("str", 30);
	set("cor", 30);
	set("cps", 30);
	set("spi", 30);
	set("int", 30);
	set("con", 30);
	set("kar", 20);
	set("per", 30);

	set("combat_exp", 1000000);
	set("score",500000);
	
	set_skill("force", 200);
	set_skill("parry", 200);
	set_skill("dodge", 200);
	set_skill("strike", 200);
	set_skill("finger", 200);
	set_skill("sword", 200);

//	map_skill("dodge",  "bagua-steps");
//	map_skill("unarmed","lanhua-finger");
//	map_skill("parry",  "luoying-sword");
//	map_skill("force",  "suiyu-force");
//    map_skill("sword",  "luoying-sword");
	
//	create_family("ȫ���", 1);

	set("inquiry", ([
		"����" : "�ܲ�ͨ��ɫһ�䣬�ƺ��Ǻ���ʲô��",
		"��������" : (: leave_hole :),
	]) );	
	
	setup();
	add_money("gold", 10);
	carry_object("/obj/cloth")->wear();
	carry_object("/obj/weapon/sword")->wield();
}

int accept_fight(object who)
{
	command("say �ð�������ϲ������ˡ�\n");
	return 1;
}

int accept_kill(object who)
{
	command("say ����û�������ţ�������ƴ����ʲô��\n");
}

int leave_hole()
{
	message_vision(
"�ܲ�ͨһ���⻰������ৡ���һ�±���ˣ��֡�ৡ���һ�±���ˡ�
���ŷ�Ҳ�Ƶ��ܵ��ˡ�\n",this_object());

	this_object()->move(NOWDIR+"empty_room");
	
	call_out("go_back", 5, 1);

	return 1;
}

void go_back()
{
	this_object()->move(NOWDIR+"qiulong-hole");
	message_vision("�ܲ�ͨ�����˻�����\n",this_object());
}


