// music   yangzhou's ����

inherit NPC;

void create()
{
	set_name("����", ({ "bingyong", "bing", "yong" }) );
	set("gender", "����" );
	set("age", 20);
	set("long",
		"����ľ���ı��¡�\n");
	set("shen_type", 1);
	set("combat_exp", 1000);
        set("str", 30);
	set("mingwang",1);
        set("dex", 2);
        set("con", 2);
        set("int", 2);
	set("attitude", "peaceful");
	setup();
        carry_object("/obj/cloth")->wear();
        carry_object(__DIR__"obj/gangdao")->wield();
	add_money("coin", 1);
}


