#include <ansi.h>

inherit NPC;
inherit F_VENDOR;
void create()
{
		set_name("�������", ({ "yong","qing","heshang" }) );
		set("nickname", CYN"��ͷɮ"NOR);
		set("long","�Դ�����ǰ�������¹ҵ�֮��,���������ⲻ����...\n");
		set("age", 28);
		set("gender", "����");
		set("attitude", "peaceful");

		set("str", 27);
		set("int", 30);
		set("spi", 30);
		set("con", 30);
		set("cps", 30);
		set("cor", 20);

        set("mingwang", 1);

        set("max_kee", 2000);
        set("kee", 2000);
        set("max_force", 2000);
        set("force", 2000);
        set("force_factor", 20);
        set("combat_exp", 150000+random(50000));
        set("score", 20000);
		set_skill("force", 80);
		set_skill("parry", 80);
		set_skill("dodge", 80);
		set_skill("sword", 80);
		set_skill("unarmed", 80);
		set_skill("blade", 80);
	set("vendor_goods", ([
		"taozi":"/d/emei/obj/taozi",
		"hulu":"/d/emei/obj/hulu",
		"baozi":"/d/emei/obj/baozi",
	]) );
     	set_skill("literate", 50);
		set("inquiry", ([
			"����": "������Ҵ����±߲�������,���ܸ���....��Ȼ,��Ǯ�Ļ�...\n",
			"taozi": "������Ҵ����±߲�������,���ܸ���....��Ȼ,��Ǯ�Ļ�...\n",
	]) );	
        set("chat_chance", 5);
        set("chat_msg", ({
                "������д�٤��������һ������,���˰���,�³�һ���˶�!\n",
                "����������ŵ��ϵ��Һ�.һ.....��....��ʮ��.......\n",
                (: random_move :)
        }) );

        set("chat_chance_combat", 9);
        set("chat_msg_combat", ({
                "�������ŭ��,�����ֱ���,��Ǯ��ʹ����ĥ,�����е���Ǯ��\n",
        }) );

        setup();
	carry_object("/d/emei/obj/jiasha")->wear();
	carry_object("/d/emei/obj/jiedao")->wield();
}
void init()
{
        ::init();
        add_action("do_vendor_list", "list");
}


