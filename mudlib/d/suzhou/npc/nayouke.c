// woodcutter.c

inherit NPC;

void create()
{
	set_name("���ο�",({"nan youke","nan","youke"}));
	set("gender", "����" );
	set("age", 26);
	set("long","ǰ���������������ο͡�\n ���������µ��Ĵ����档\n");
	set("combat_exp",400);
	set("suzhou",1);
	set_temp("apply/defense",10);
	set_temp("apply/attack",5);
	set("str", 30);
	set("chat_chance", 15);
	set("chat_msg", ({
		"�ο���������������ݿ����Ǹ��õط�ѽ��\n",
		(: random_move :)
	}) );
	set("env/wimpy", 10);
	setup();
	carry_object("/obj/cloth")->wear();
}
