// woodcutter.c

inherit NPC;

void create()
{
	set_name("����Сͯ",({"qingyi xiaotong","qingyixiaotong","xiaotong"}));
	set("gender", "����" );
	set("age",15);
	set("long","���̴�ׯ����С�к���\n");
	set("combat_exp",10000);
	set_skill("unarmed",30);
	set_skill("parry",30);
	set_skill("dodge",30);
	set("max_force",250);
	set("force",250);
	set_temp("apply/parry",30);
	set_temp("apply/dodge",30);
	set_temp("apply/attack",20);
	set_temp("apply/defense",30);
	set_temp("apply/damage",15);
	set_temp("apply/armor",20);
	setup();
	carry_object(__DIR__"obj/qingyi")->wear();
	add_money("coin",50);
}
