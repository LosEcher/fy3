// music   yangzhou's ����

inherit NPC;

void create()
{
	set_name("����", ({ "likui", "li", "li kui" }) );
	set("gender", "����" );
	set("age", 40);
        set("title","�ĳ�����");
	set("long",
		"���ӵ�����һ�ۣ���Ц��һ����\n");
	set("mingwang", -1);
	set("combat_exp", 80000);
        set("int", 31);
        set_skill("unarmed",100);
        set_skill("dodge",40);
	set("attitude", "peaceful");
	setup();
        carry_object("/obj/cloth")->wear();
	add_money("coin", 100);
}

