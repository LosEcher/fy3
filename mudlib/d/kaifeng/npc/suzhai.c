// seng.c
inherit NPC;

void create()
{
set_name("��իʦ��",({"seng ren"}));
	set("long", "���������շ��ĺ��С�\n" );
	set("gender", "����");
	set("attitude", "peace");

	set("age", 43);
	set("mingwang", 100);
	set("str", 20);
	set("int", 16);
	set("con", 20);
	set("max_kee", 500);
	set("combat_exp", 6000);

	set_skill("force", 30);
	set_skill("unarmed",30);
	set_skill("blade", 30);
	set_skill("dodge", 30);
	set_skill("parry", 30);
	set_skill("literate",30);

	setup();
carry_object("/d/dali/npc/obj/cheng-cloth")->wear();
carry_object(__DIR__"obj/caidao")->wield();
	add_money("coin", 50);
}
