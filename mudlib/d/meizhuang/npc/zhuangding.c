// woodcutter.c

inherit NPC;

void create()
{
	set_name("ׯ��",({"zhuangding","zhuang ding","ding"}));
	set("gender", "����" );
	set("age", 26);
	set("long","������׳�Ĵ󺺡�\n");
	set("title","��ɽ÷ׯ");
	set("combat_exp",100000);
	set("str", 30);
	set("mingwang",-1);
	set_skill("unarmed",50);
	set_skill("dodge",50);
	set_skill("parry",50);
	set_skill("xuantian-bu",30);
	set_skill("xuantian-quan",30);
	map_skill("dodge","xuantian-bu");
	map_skill("unarmed","xuantian-quan");
	map_skill("parry","xuantian-quan");
	set("max_force",1000);
	set("force",1000);
	setup();
	carry_object("/obj/cloth")->wear();
	add_money("silver",10);
}
