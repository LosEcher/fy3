// zhou_botong.c
// str = ����, int = ����, cps = ����, con = ����, wis = �۸�, dex = ������
#include <npc.h>

inherit F_FIGHTER;

int leave_hole();
int answer1();

void create()
{
	set_name("�ܲ�ͨ", ({ "zhou botong","zhou" }) );
	set("title", "ȫ�������");
//	set("gender", "female");
	set("age", 63);
	set_race("human");
	set_level(140);
	set_class("quanzhen");

	set("long",
"�ܲ�ͨ�Ǹ��׷�ͯ�յ����ˣ�������һ������������
һ�������������ӣ�ʵ���С����Ƣ����\n");
	set("rank_info", "ȫ�����");
	set("nick", "����ͯ");
	
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
	
	gain_score("mortal sin", 10000);

	create_family("ȫ���", 1);

	set("inquiry", ([
		"����" : (: answer1 :),
		"��������" : (: leave_hole :),
	]) );	
	
	setup();
	carry_money("gold", 10);
	carry_object("/obj/armor/cloth")->wear();
	carry_object("/obj/weapon/chang_jian")->wield();
}

int accept_fight()
{
	do_chat("�ܲ�ͨ�е����ð�������ϲ������ˡ�\n");
	return 1;
}

int accept_kill()
{
	do_chat("�ܲ�ͨЦ��������û�������ţ�������ƴ����ʲô��\n");
}

int leave_hole()
{
	message_vision(
"�ܲ�ͨһ���⻰������ৡ���һ�±���ˣ��֡�ৡ���һ�±���ˡ�
���ŷ�Ҳ�Ƶ��ܵ��ˡ�\n",this_object());

	this_object()->move(__DIR__"empty_room");
	
	call_out("go_back", 5);

	return 1;
}

void go_back()
{
	this_object()->move(__DIR__"qiulong_hole");
	message_vision("�ܲ�ͨ�����˻�����\n",this_object());
}

int answer1()
{
	message_vision("�ܲ�ͨ��ɫһ��,�ƺ��Ǻ���ʲô.\n",this_object());

	return 1;
}

