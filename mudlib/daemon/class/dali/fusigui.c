// fusigui.c ��˼��

#include <ansi.h>
inherit NPC;

void create()
{
	set_name("��˼��", ({ "fu sigui", "fu" }));
	set("title",  "������" );
	set("long", "���Ǵ�����Ĵ���֮һ��\n");
	set("gender", "����");
	set("age", 40);
	set("class", "officer");
	set("attitude", "friendly");
	set("shen_type", 1);
	set("str", 25);
	set("int", 25);
	set("con", 25);
	
	set("max_kee", 1000);
	set("max_gin", 500);
	set("force", 1000);
	set("max_force", 1000);
	set("force_factor", 50);
	set("combat_exp", 350000);
	set("score", 105000);

        set_skill("force", 55);
        set_skill("dodge", 55);
        set_skill("parry", 50);
        set_skill("sword", 50);
        set_skill("staff", 50);
	set_skill("kurong-changong", 50);
	set_skill("tiannan-step",55);
        set_skill("jinyu-quan", 55);
	set_skill("duanjia-sword",50);
	set_skill("literate", 40);
	set_skill("unarmed",50);

	map_skill("unarmed","jinyu-quan");
	map_skill("force", "kurong-changong");
	map_skill("dodge","tiannan-step");
	
	map_skill("sword","duanjia-sword");
	map_skill("staff","duanjia-sword");
	map_skill("parry","duanjia-sword");


	setup();
	carry_object("/obj/cloth")->wear();
carry_object("/obj/weapon/sword")->wield();
	add_money("silver", 10);

	create_family("����μ�",19,"����");
}
