// yaorong   hangzhou's ����

inherit NPC;

void create()
{
        set_name("����", ({ "xingren","ren" }) );
	set("gender", "����" );
        set("age", 26);
	set("long",
		"һ���ڽ�������������ˡ�\n");
        set("combat_exp", 1000);
        set("int", 21);
        set_skill("unarmed",30);
        set_skill("dodge",40);
	set("attitude", "peaceful");
	set_temp("apply/defense",20);
	setup();
        carry_object("/obj/cloth")->wear();
	add_money("coin", 100);
}

