// dizi.c

inherit NPC;

void create()
{
	int skill;

	set_name("�渾", ({ "fisher", "yufu"}) );
	set("gender", "Ů��" );
	set("age", 20+random(30));
	set("long", "�紵�˴�,�ڲ�ס��������������\n");

	set("combat_exp",10000+random(30000));
       set_skill("parry",20+random(40));
	set_skill("dodge", 20+random(40));
	set_skill("unarmed", 20+random(40));
       set("inquiry", ([
		"����" : "������,һ·��,���ǰ�����,������Ҵ��ϴ�",
		"����" : "���汣�����Ǳܹ����Ϸ���,��������һ����˳.",
	]) );
	setup();
	carry_object("/obj/cloth")->wear();
            add_money("silver",2);
}
