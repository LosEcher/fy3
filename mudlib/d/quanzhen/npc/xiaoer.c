inherit NPC;
inherit F_VENDOR;

void create()
{
	set_name("��С��",({"xiao er","xiaoer"}));
	set("age",16);
	set("combat_exp",2000+random(2000));
	set("long","��������С���ӡ�\n");
	set("area_name","�������¥");
        set("vendor_goods", ([
                "jitui":__DIR__"obj/jitui",
 		"kaoya":__DIR__"obj/kaoya",
               "jiudai":__DIR__"obj/jiudai",
                "baozi":__DIR__"obj/baozi",
        ]));

	setup();
	carry_object("/obj/cloth")->wear();
}

void init()
{
        object area,ob;
        area=new("/obj/area");
        area->create(query("area_name"));
        set("banghui",(string)area->query("banghui"));
        destruct(area);
        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
	add_action("do_vendor_list", "list");
}

void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;
        switch( random(2) ) {
                case 0:
                        say( "��С��Ц�����˵������λ" + RANK_D->query_respect(ob)
                                + "����������⣬ЪЪ�Űɡ�\n");
                        break;
                case 1:
                                        say( "��С���ò����ϵ�ë��Ĩ��Ĩ�֣�˵������λ" + RANK_D->query_respect(ob)
                                + "����������\n");
                        break;
        }
}