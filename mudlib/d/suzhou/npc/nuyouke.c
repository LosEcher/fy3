// woodcutter.c

inherit NPC;

void create()
{
	set_name("Ů�ο�",({"nu youke","nu","youke"}));
	set("gender","Ů��");
	set("age", 26);
	set("long","ǰ���������������ο͡�\n ���������µ��Ĵ����档\n");
	set("combat_exp",250);
	set("suzhou",1);
	set("str", 30);
	set("chat_chance", 15);
	set("chat_msg", ({
		"�ο���������������ݿ����Ǹ��õط�ѽ��\n",
		(: random_move :)
	}) );
	setup();
	carry_object("/obj/cloth")->wear();
}
