// woodcutter.c

inherit NPC;

void create()
{
	set_name("��ͯ",({"wan tong","wan","tong"}));
	set("gender", "����" );
	set("age",15);
	set("long","���ݱ��ص���ͯ��ȥ�����ٴ����Ƕ���֪���ĵط���\n");
	set("combat_exp",50);
	set("suzhou",1);
	set("str",15);
	set("chat_chance",20);
	set("chat_msg", ({
		"��ͯ˵����˫��ȥ����������в��ٺö�����\n",
		"��ͯ�������������������ȥ������û����������Ķ�����\n",
		(: random_move :)
	}) );
	setup();
	carry_object("/obj/cloth")->wear();
}
