// woodcutter.c

inherit NPC;

void create()
{
	set_name("���ϲ�",({"shen laocai","shen","laocai"}));
	set("gender", "����" );
	set("age",40);
	set("long","�����⣬һ���ĸ�̬��\n�ɼ��Ǹ�������֮�ˡ�\n");
	set_skill("unarmed",40);
	set_skill("parry",40);
	set_skill("dodge",50);
	set_skill("sword",60);
	set("mingwang",-1);
	set("combat_exp",80000);
	set("str", 30);
	set("chat_chance",5);
	set("chat_msg", ({
		"���ϲ�˵�����úõĸɣ��Ҳ��������ҵġ�\n",
		"���ϲƵ���ֻҪ���з��ԣ����ǾͶ����ˡ�\n",
		"���ϲ��ͳ�ߡ��������������¡�\n",
	}) );
	setup();
	carry_object(__DIR__"obj/sipao")->wear();
	carry_object(__DIR__"obj/zheshan")->wield();
	add_money("silver",10);
}
