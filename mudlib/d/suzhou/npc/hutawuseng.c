// music   yangzhou's ��С��

inherit NPC;

void create()
{
	set_name("������ɮ",({"wuseng","wu seng","wu","seng"}));
	set("gender", "����" );
	set("age", 20);
	set("long",
		"�ػ���������ɮ���������ǽ�ʵ��\n");
	set("combat_exp",8000);
	set_skill("unarmed",50);
	set_skill("blade",50);
	set("mingwang",1);
	set_temp("apply/attack",30);
	set_temp("apply/defense",30);
	set_temp("apply/damage",10);
	set_skill("parry",50);
	set_skill("dodge",50);
	setup();
	carry_object(__DIR__"obj/qingbusengyi")->wear();
	carry_object(__DIR__"obj/jiedao")->wield();
}
