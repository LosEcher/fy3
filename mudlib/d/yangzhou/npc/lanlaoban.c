// yangzhou ���ϰ� 

inherit NPC;
//inherit F_VENDOR;
inherit F_DEALER;

void create()
{
	set_name("���ϰ�", ({ "lanlaoban", "lan","laoban","boss" }));
	set("title", "�ӻ����ϰ�");
	set("mingwang", 1);

	set("gender", "����");
	set("age", 45);
	set("long",
		"���ϰ������������������ˣ����˼�ʮ���С������\n");
	set_skill("unarmed", 50);
	set_skill("dodge", 50);
	set_temp("apply/damage", 15);

	set("combat_exp", 40000);
	set("attitude", "friendly");
	set("vendor_goods", ({
//		__DIR__"obj/mabudai",
		__DIR__"obj/changjian",
	}));
	
	setup();
}

void init()
{
        add_action("do_list", "list");
        add_action("do_buy", "buy");
}
