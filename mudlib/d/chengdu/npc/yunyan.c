inherit NPC;
inherit F_VENDOR;

void create()
{
	set_name("л����",({"xie yunyan","xie"}));
	set("gender","Ů��");
	set("nickname","ǧ������");
	set("age",18);
	set("combat_exp",1000);
	set_temp("apply/defense",30);
	set_temp("apply/attack",15);
	set_temp("apply/armor",20);
	set_temp("apply/damage",5);
        set("attitude", "friendly");
        set("vendor_goods", ([
                "��ʯ��ָ":__DIR__"obj/ring",
        ]));

	set("long","�����ݽ��ģ�Ƥ���⻬���ۣ�һ˫�����������飬��Ŀ������\n");
	set("area_name","�ɶ��鱦��");
        setup();
carry_object(__DIR__"obj/necklace")->wear();
carry_object(__DIR__"obj/pink_cloth")->wear();
carry_object(__DIR__"obj/flower_shoe")->wear();
carry_object(__DIR__"obj/goldring")->wear();
}

void init()
{
        object area;
        area=new("/obj/area");
	area->create(query("area_name"));
        set("banghui",(string)area->query("banghui"));
        destruct(area);
	::init();
        add_action("do_vendor_list", "list");

}
