//music yangzhou' ����

inherit NPC;

void create()
{
	set_name("����",({"tiao fu","tiaofu","fu"}));
	set("gender", "����" );
	set("age", 30);
	set("int", 28);
        set("combat_exp",800);
	set("long",
		"��ǿ��׳�ĺ��ӡ�\n");

	set("mingwang",1);
	set("attitude", "peaceful");
	set_skill("literate", 0);
        set_skill("unarmed",10);
        set_skill("parry",20);
        set_skill("dodge",20);
	setup();
       carry_object("/obj/cloth")->wear();
	carry_object(__DIR__"obj/biandan")->wield();
	add_money("silver",1);
}

