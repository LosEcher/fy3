// woodcutter.c

inherit NPC;

void create()
{
	set_name("��԰��ʦ",({"huyuan wushi","wushi"}));
	set("gender", "����" );
	set("age", 26);
	set("long","׾��԰�ڵĴ��֡�\n");
	set("combat_exp",100000);
	set("str", 30);
	set_temp("apply/attack",15);
	set_temp("apply/defense",70);
	set("attitude","aggressive");
	set_temp("apply/armor",30);
	set("max_kee",500);
	set("kee",500);
	set("mingwang",-1);
	set_skill("unarmed",50);
	set_skill("dodge",50);
	set_skill("sword",50);
	setup();
	carry_object("/obj/cloth")->wear();
	carry_object(__DIR__"obj/mujian")->wield();
	add_money("silver",10);
}
