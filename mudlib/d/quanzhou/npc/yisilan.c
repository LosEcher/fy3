inherit NPC;

void create()
{
	int skill;

	set_name("��˹����ͽ", ({ "jiaotu", "man"}) );
	set("gender", "����" );
	set("age", 20+random(30));
	set("long", "���ų��۵���˹����ͽ,�ϵ�����������\n");
	set("combat_exp",150000+random(150000));
       set_skill("parry",60+random(40));
	set_skill("dodge", 60+random(40));
	set_skill("unarmed", 60+random(40));
       set_skill("blade",60+random(40));
	setup();
	carry_object("/d/quanzhou/obj/npao")->wear();
       carry_object("/d/quanzhou/obj/wandao")->wield();
	add_money("silver",20+random(20));
}
