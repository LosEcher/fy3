// woodcutter.c

inherit NPC;

void create()
{
	set_name("�ο�",({"youke"}));
	set("gender", "����" );
	set("age",50);
	set("long","һλ�곤���ˡ�\n");
	set("combat_exp",1000);
	set_temp("apply/defense",10);
	set_temp("apply/attack",5);
	set("str", 30);
	set("chat_chance",5);
	set("chat_msg", ({
		"���ο��૵�����֪�⽣��Ȫ������˶��ٱ�������\n",
		"���οͶ���˵�����������������ĺ�����ѽ��\n",
		(: command("climb") :),
	}) );
	setup();
	carry_object("/obj/cloth")->wear();
	add_money("coin",100);
}
