//music yangzhou' �Կ�

inherit NPC;

void create()
{
	set_name("�Կ�", ({ "chike","chi ke", "chi","ke" }) );
	set("gender", "����" );
	set("age", 26);
	set("int", 28);
        set("mingwang",-1);
        set("combat_exp",300);
	set("long",
		"��ͷ����Ĺ��Ӹ硣\n");

	set("attitude", "peaceful");
	set_skill("literate", 10);
        set_skill("unarmed",10);
	setup();
}

