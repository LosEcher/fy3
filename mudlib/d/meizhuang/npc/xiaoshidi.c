// woodcutter.c

inherit NPC;

void create()
{
	set_name("Сʦ��",({"xiaoshidi","xiao shidi","shidi"}));
	set("gender", "����" );
	set("age",18);
	set("long","��ɽ÷ׯ��Сͽ�ܡ�\n");
	set("combat_exp",150000+random(50000));
	set("str", 30);
	set("mingwang",1);
	set_skill("unarmed",40);
	set_skill("dodge",40);
	 set_skill("parry",40);
	set_skill("xuantian-bu",40);
	set_skill("xuantian-quan",40);
	map_skill("dodge","xuantian-bu");
	map_skill("unarmed","xuantian-quan");
	map_skill("parry","xuantian-quan");
	set("max_force",1000);
	set("force",1000);
	setup();
	carry_object("/obj/cloth")->wear();
	add_money("silver",10+random(40));
}
