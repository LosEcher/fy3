// seng.c
inherit NPC;

void create()
{
set_name("����ɮ��",({"seng ren"}));
	set("long", "�������õ�ɮ�ˡ�\n" );
	set("gender", "����");
	set("attitude", "peace");

	set("age", 34);
	set("mingwang", 100);
	set("str", 15);
	set("int", 16);
	set("con", 20);
	set("max_kee", 600);
	set("combat_exp", 8000);

	set_skill("force", 40);
	set_skill("unarmed",40);
	set_skill("blade", 40);
	set_skill("dodge", 40);
	set_skill("parry", 40);
	set_skill("literate",40);
	set_skill("staff",40);

	setup();
	add_money("coin", 50);
}
