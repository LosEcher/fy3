// music   yangzhou's �鳡����

inherit NPC;

void create()
{
	set_name("�鳡����", ({ "kanke", "ke", "kan ke" }) );
	set("gender", "����" );
	set("age", 28);
	set("long",
		"����λ�鳡���Ͽ����ˡ�\n");
	set("mingwang", 1);
	set("combat_exp", 6000);
        set("str", 2);
        set("con", 2);
        set("int", 2);
	set("attitude", "peaceful");
	setup();
        carry_object("/obj/cloth")->wear();
	add_money("coin", 5);
}


