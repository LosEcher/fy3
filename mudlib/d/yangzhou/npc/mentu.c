//music yangzhou' ��ͽ

inherit NPC;

void create()
{
	set_name("��ͽ", ({ "mentu", "tu" }) );
	set("gender", "����" );
        set("title", "����������");
	set("age", 22);
	set("int", 40);
        set("per", 30);
	set("long",
		"������������ͽ��\n");
        set("mingwang",1);
	set("attitude", "peaceful");
        set("combat_exp",10000);
	set_skill("literate", 60);
	set_skill("dodge",40);
	set_skill("unarmed",40);
	set_skill("parry",40);
	setup();
}

