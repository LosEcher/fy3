// woodcutter.c

inherit NPC;

void create()
{
	set_name("ʩ����",({"shilingwei","shi lingwei","shi"}));
	set("gender", "����" );
	set("age",55);
	set("long","�����𽭺������������ڴ˵����ߡ�\n");
	set("nickname","��·��");
	set("combat_exp",200000);
	set("str", 30);
	set("mingwang",-1);
	set_skill("unarmed",50);
	set_skill("dodge",50);
	set_skill("parry",50);
	set_skill("blade",50);
	set("max_force",1000);
	set("force",1000);
	set_skill("xuantian-bu",50);
	set_skill("xuantian-quan",50);
	set_skill("pomopima-dao",50);
	map_skill("blade","pomopima-dao");
	map_skill("parry","pomopima-dao");
	map_skill("dodge","xuantian-bu");
	map_skill("unarmed","xuantian-quan");
	setup();
	carry_object(__DIR__"obj/qingyi")->wear();
	carry_object("/obj/weapon/blade")->wield();
	add_money("silver",50);
}
