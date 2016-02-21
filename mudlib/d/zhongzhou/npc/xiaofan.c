// music   yangzhou's С�� 

inherit NPC;
inherit F_VENDOR;

void create()
{
	set_name("С��", ({ "xiaofan", "xiao fan", "seller", "fan" }) );
	set("gender", "����" );
	set("age", 30);
	set("long",
		"���Ǹ�������ʵ���ֵ�С����\n");
	set("mingwang", 1);
	set("combat_exp", 3000);
        set("str", 17);
        set("dex", 20);
        set("con", 17);
        set("int", 22);
	set("attitude", "peaceful");
	set("vendor_goods", ([
                     "����":     __DIR__"obj/baozi",
                     "�ƺ�":     __DIR__"obj/jiuhu",
                     "����":     __DIR__"obj/jitui",
	]) );
	setup();
        set_skill("dodge",20);
        set_skill("parry",10);
        carry_object("/obj/cloth")->wear();
	add_money("coin", 100);
}

void init()
{
        ::init();
        add_action("buy_object", "buy");
        add_action("do_vendor_list", "list");
        add_action("do_sell", "sell");
}

