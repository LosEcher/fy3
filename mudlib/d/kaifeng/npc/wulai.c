// seng.c
inherit NPC;

void create()
{
set_name("����",({"wulai"}));
set("long","������¸���������,ƽʱר����԰��͵��.\n" );
	set("gender", "����");

set("age",25);
set("shen_type",-1);
set("str",20);
	set("int", 20);
	set("con", 20);
set("max_kee",300);
set("combat_exp",3000);

set_skill("unarmed",20);
set_skill("dodge",20);
set_skill("parry",20);

	setup();
carry_object("/obj/cloth")->wear();
add_money("coin",50);
}

