// seng.c
inherit NPC;

void create()
{
set_name("��ɮ��",({"old seng","seng"}));
	set("long", "һ�������ɮ��,������������,�۾������������ˡ�\n" );
	set("gender", "����");
	set("attitude", "peace");

	set("age", 87);
	set("mingwang", 100);
	set("str", 10);
	set("int", 20);
	set("con", 20);
	set("max_kee", 500);
set("max_gin",100);
set("force",500);
set("max_force",500);
	set("combat_exp",100);

	set_skill("force", 5);
	set_skill("unarmed", 5);
	set_skill("blade", 5);
	set_skill("dodge", 5);
	set_skill("parry", 5);

	setup();
carry_object(__DIR__"obj/dao-cloth")->wear();
	add_money("coin", 50);
}
