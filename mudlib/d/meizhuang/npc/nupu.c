// woodcutter.c

inherit NPC;

void create()
{
	set_name("ū��",({"nupu","nu pu","pu"}));
	set("gender", "����" );
	set("age",25);
	set("long","������׳�����ˡ�\n");
	set("combat_exp",2000+random(1000));
	set_skill("unarmed",20);
	set_skill("parry",20);
	set_skill("dodge",20);
	set("mingwang",-1);
	set_temp("apply/armor",20);
	set_temp("apply/damage",5);
	setup();
	carry_object("/obj/cloth")->wear();
	add_money("coin",50+random(50));
}
