//li �����ϰ�
inherit NPC;
inherit F_VENDOR;

void create()
{
        set_name("���ϰ�", ({ "li laoban","li" }) );
        set("gender", "����" );
        set("age", 45);
        set("long",
                "���ϰ�ǰ����մ����ݻ�������˵���պܺã��յ�һ�ֺòˣ�\n");
        set("combat_exp", 45000);
        set("attitude", "friendly");

        set("vendor_goods", ([
                "�ΰ�" : __DIR__"obj/yan",
                "����" : __DIR__"obj/xiangyou",
                "����" : __DIR__"obj/lajiao",
                "����" : __DIR__"obj/jiangyou",
                             ]));

	set_skill("unarmed",60);
	set_skill("dodge",60);
	set_skill("parry",80);
	set_skill("force",60);
	set_temp("apply/armor",50);
	set_temp("apply/defense",30);
	set_temp("apply/damage",20);
	set("combat_exp",500000);

        setup();

	carry_object("/obj/cloth")->wear();
	carry_object("/obj/std/armor/pijia")->wear();
	add_money("gold" , 1);
}

void init()
{       
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }

        add_action("buy_object", "buy");
        add_action("do_vendor_list", "list");
}



void greeting(object ob)
{

         if( !ob || environment(ob) != environment() )
        
      	 return;


       say( "���ϰ��������ǰ˵��" + RANK_D->query_respect(ob)+ "��Ҫ��ȱʲô���Ͽ�����һ�㡣\n");
}
