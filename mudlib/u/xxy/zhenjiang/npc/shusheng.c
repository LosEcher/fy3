//music yangzhou' ����

inherit NPC;

void create()
{
	set_name("����", ({ "shusheng","shu sheng", "sheng" }) );
	set("gender", "����" );
	set("age", 26);
	set("int", 28);
        set("combat_exp",200);
	set("long",
		"�Ǹ��ÿ����У�ȴ����������������������\n");

	set("attitude", "peaceful");
	set_skill("literate", 40);
        set_skill("parry",20);
	setup();
}

