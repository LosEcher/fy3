// music   yangzhou's �ĳ�С��

inherit NPC;

void create()
{
	set_name("�ĳ�С��", ({ "xiaoer","xiao","er" }) );
	set("gender", "����" );
	set("age", 20);
	set("long",
		"�ĳ�С������������վ�š�\n");
	set("mingwang", 1);
	set("combat_exp", 8000);
        set("int", 31);
        set_skill("unarmed",80);
        set_skill("dodge",40);
	set("attitude", "peaceful");
	setup();
        carry_object("/obj/cloth")->wear();
	add_money("coin", 100);
}

