//music yangzhou' ����

inherit NPC;

void create()
{
	set_name("����",({"jian shang","jianshang","shang"}));
	set("gender", "����" );
	set("age", 39);
	set("int", 28);
        set("combat_exp",300);
	set("long",
		"���̡�\n");
        set("mingwang",-1);
	set("attitude", "peaceful");
	set_skill("literate", 0);
        set_skill("unarmed",8);
        set_skill("dodge",10);
        set_skill("parry",10);
	setup();
}

