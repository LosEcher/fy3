// woodcutter.c

inherit NPC;

void create()
{
	set_name("���ĵ���",({"dizi","di zi"}));
	set("gender", "����" );
	set("age",20);
	set("long","���������е��ӡ�\n");
	set("title","��ɽ÷ׯ");
	set("combat_exp",5000+random(5000));
	set("str", 30);
	set("mingwang",-1);
	set_skill("unarmed",10+random(10));
	set_skill("dodge",10+random(10));
	set_skill("parry",10+random(10));
	set_skill("xuantian-bu",10+random(10));
	set_skill("xuantian-quan",10+random(10));
	map_skill("dodge","xuantian-bu");
	map_skill("unarmed","xuantian-quan");
	map_skill("parry","xuantian-quan");
	set("max_force",400);
	set("force",400);
	setup();
	carry_object("/obj/cloth")->wear();
	add_money("silver",random(5)+1);
}
