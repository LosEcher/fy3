// woodcutter.c

inherit NPC;

void create()
{
	set_name("����",({"chang gong","chang","gong"}));
	set("gender", "����" );
	set("age", 26);
	set("long","������ᣬȴ�����ķ糾֮ɫ��\n");
	set("combat_exp",900);
	set("str", 30);
//	set("chat_chance", 15);
//	set("chat_msg", ({
//	}) );
	set_temp("apply/attack",15);
	set_temp("apply/defense",15);
	setup();
	carry_object("/obj/cloth")->wear();
	add_money("coin",10);
}
