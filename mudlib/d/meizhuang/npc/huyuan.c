// woodcutter.c

inherit NPC;

void create()
{
	set_name("��Ժ",({"huyuan"}));
	set("gender", "����" );
	set("age", 26);
	set("long","�ĺ������������ˡ�\n");
	set("pursuer",1);
	set("combat_exp",8000);
	set("str", 30);
	set_temp("apply/attack",15+random(15));
	set_temp("apply/defense",15);
	set_temp("apply/armor",20);
	set("mingwang",-1);
	set_skill("blade",30);
	set_skill("dodge",40);
	set_skill("parry",40);
	setup();
	carry_object("/obj/cloth")->wear();
	carry_object(__DIR__"obj/gangdao")->wield();
	add_money("silver",10+random(10));
}
