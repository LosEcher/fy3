// hu.c
inherit NPC;
inherit F_VENDOR;

void create()
{
	set_name("���ƹ�", ({ "hu zhanggui", "hu" }));
	set("title", "�ӻ����ϰ�");
	set("shen_type", 1);

	set("gender", "����");
	set("age", 45);
	set("long",
		"�𿴺��ƹ�����������ģ������������þ����ء�\n"+
		"���ⱱ�����ܻ����������������ôҲ���м��ֱ��¡�\n");
	set_skill("unarmed", 60);
	set_skill("parry", 60);
	set_skill("dodge", 60);
	set_temp("apply/damage", 25);

	set("combat_exp", 50000);
	set("attitude", "friendly");
	set("vendor_goods", ([
		"��Ƥ":"/d/city2/obj/diaopi",
  	]));
	
	setup();
carry_object("/obj/cloth")->wear();
}

void init()
{
        add_action("do_vendor_list", "list");
}
