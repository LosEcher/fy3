// woodcutter.c

inherit NPC;

void create()
{
	set_name("��Ʀ",({"dipi"}));
	set("gender", "����" );
	set("age", 26);
	set("long","������ҵ�����ֺ��еĵ�Ʀ��\n");
	set("combat_exp",750);
	set_temp("apply/attack",15);
	set_temp("apply/defense",15);
	set("suzhou",1);
	set("mingwang",-1);
	set("str", 30);
	set("chat_chance", 15);
	set("chat_msg", ({
		"��Ʀ��������ĳ���Ц��Ц��������ʶ��������Ǯ����\n",
		"��Ʀ����ȵ�����ʲô����û������å����\n",
		(: random_move :)
	}) );
	setup();
	carry_object("/obj/cloth")->wear();
}
