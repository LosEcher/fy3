//music yangzhou' ����

inherit NPC;

void create()
{
	set_name("����", ({ "chefu","che fu", "fu" }) );
	set("gender", "����" );
	set("age", 36);
	set("int", 28);
        set("combat_exp",400);
        set("mingwang",1);
	set("long",
		"��ǿ��׳�ĺ��ӡ�\n");

	set("attitude", "peaceful");
	set_skill("literate", 0);
        set_skill("parry",10);
        set_skill("dodge",10);
        set_skill("unarmed",10);
	setup();
carry_object("/obj/cloth")->wear();
}

