//music yangzhou' ����

inherit NPC;

void create()
{
	set_name("����",({"xin nan","xinnan","xin","nan"}));
	set("gender", "����" );
	set("age",25);
	set("int", 28);
	set("combat_exp",7000);
	set("long",
	"ǰ��������������ӡ�\n");

	set("attitude","hero");
	set_skill("unarmed",40);
	set_skill("parry",40);
	set_skill("dodge",40);
	setup();
       carry_object("/obj/cloth")->wear();
	add_money("silver",2);
}

