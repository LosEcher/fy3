// music   yangzhou's ֪��ɮ

inherit NPC;

void create()
{
	set_name("֪��ɮ",({"zhike seng","zhike","seng"}));
	set("gender", "����" );
	set("age", 30);
	set("long",
		"����λר�Ž��ܲ�ʩ��ɮ�ˡ�\n");
	set("mingwang", 1);
	set("combat_exp", 5000);
        set("str", 2);
        set("dex", 2);
        set("con", 2);
        set("int", 2);
	set("attitude", "peaceful");
	setup();
        carry_object("/obj/cloth")->wear();
	add_money("coin", 10);
}


