// seng.c
inherit NPC;

void create()
{
set_name("�������",({"liu caizhu"}));
	set("long", "���⸮�еĸ�����\n" );
	set("gender", "����");
	set("attitude", "peace");

	set("age", 42);
	set("mingwang", 2000);
	set("str", 20);
	set("int", 16);
	set("con", 20);
	set("max_kee", 500);
set("max_gin",120);
set("force",500);
set("max_force",500);
set("force_factor",10);
	set("combat_exp", 60000);

	set_skill("force", 60);
	set_skill("unarmed",60);
	set_skill("blade", 60);
	set_skill("dodge", 60);
	set_skill("parry", 60);
	set_skill("literate",30);

	setup();
carry_object("/obj/cloth")->wear();
	add_money("silver", 50);
}
