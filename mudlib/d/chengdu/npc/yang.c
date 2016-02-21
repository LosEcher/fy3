// yang.c ���ϰ� 

inherit NPC;
inherit F_VENDOR;

void create()
{
	set_name("������", ({ "Yang yongfu", "yang" }));
	set("title", "�ӻ����ϰ�");
	set("shen_type", 1);

	set("gender", "����");
	set("age", 45);
	set("long",
		"���ϰ������������������ˣ����˼�ʮ���С������\n");
	set_skill("unarmed", 50);
	set_skill("dodge", 50);
	set_temp("apply/damage", 15);

	set("combat_exp", 40000);
	set("attitude", "friendly");
	set("vendor_goods", ([
	]));
	
	setup();
	carry_object("/obj/cloth")->wear();
}

void init()
{
        add_action("do_vendor_list", "list");
}
