//music yangzhou' ����

inherit NPC;

void create()
{
	set_name("�����",({"jinxiang ke","jinxiang","ke"}));
	set("gender", "����" );
	set("age", 30);
	set("int", 28);
	set("combat_exp",5000);
	set("long",
	"�Ͻ���������ˡ�\n");

	set("attitude", "peaceful");
	set_skill("unarmed",30);
	set_skill("parry",30);
	set_skill("dodge",40);
	setup();
       carry_object("/obj/cloth")->wear();
	add_money("silver",5);
}

