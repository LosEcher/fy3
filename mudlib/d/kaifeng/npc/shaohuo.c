// seng.c
inherit NPC;

void create()
{
set_name("�ջ�ɮ��",({"seng ren"}));
	set("long", "רְ�������ջ��ɮ�ˡ�\n" );
	set("gender", "����");
	set("attitude", "peace");

	set("age", 23);
	set("mingwang", 100);
	set("str", 15);
	set("int", 16);
	set("con", 20);
	set("max_kee", 300);
	set("combat_exp", 2000);

	set_skill("force", 10);
	set_skill("unarmed",10);
	set_skill("blade", 10);
	set_skill("dodge", 10);
	set_skill("parry", 10);
	set_skill("literate",10);
	set_skill("staff",10);

	setup();
carry_object("/d/dali/npc/obj/cheng-cloth")->wear();
carry_object(__DIR__"obj/chuihuo")->wield();
	add_money("coin", 50);
}
