// seng.c
inherit NPC;

void create()
{
set_name("��Ƥ",({"popi"}));
set("long", "������¸�������Ƥ,ƽʱר����԰��͵��.\n" );
	set("gender", "����");

set("age",25);
set("shen_type",-1);
set("str",19);
	set("int", 20);
	set("con", 20);
set("max_kee",400);
set("max_gin",120);
set("combat_exp",2000);

set_skill("unarmed",10);
set_skill("dodge",10);
set_skill("parry",20);

	setup();
carry_object("/obj/cloth")->wear();
add_money("coin",50);
}

