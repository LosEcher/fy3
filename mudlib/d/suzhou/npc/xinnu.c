//music yangzhou' ����

inherit NPC;

void create()
{
	set_name("��Ů",({"xin nu","xinnu","xin","nu"}));
	set("gender","Ů��");
	set("age",18);
	set("int", 28);
	set("combat_exp",6000);
	set("long",
	"ǰ�����������Ů�ӡ�\n");

	set("attitude","hero");
	set_skill("unarmed",40);
	set_skill("parry",40);
	set_skill("dodge",40);
	setup();
       carry_object("/obj/cloth")->wear();
	add_money("silver",1);
}

