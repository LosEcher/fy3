#include <ansi.h>

inherit NPC;
inherit F_VENDOR;
void create()
{
		set_name("永庆和尚", ({ "yong","qing","heshang" }) );
		set("nickname", CYN"铁头僧"NOR);
		set("long","自从三年前到伏虎寺挂单之后,他就赖在这不走了...\n");
		set("age", 28);
		set("gender", "男性");
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
			"桃子": "这可是我从悬崖边采下来的,不能给你....当然,有钱的话...\n",
			"taozi": "这可是我从悬崖边采下来的,不能给你....当然,有钱的话...\n",
	]) );	
        set("chat_chance", 5);
        set("chat_msg", ({
                "永庆和尚从伽裟中摸出一个桃子,啃了半天,吐出一个核儿!\n",
                "永庆和尚数着地上的桃核.一.....二....二十三.......\n",
                (: random_move :)
        }) );

        set("chat_chance_combat", 9);
        set("chat_msg_combat", ({
                "永庆和尚怒道,你有种别逃,有钱能使鬼推磨,老子有的是钱！\n",
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


