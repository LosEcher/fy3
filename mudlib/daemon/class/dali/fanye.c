// fanye.c ����

#include <ansi.h>
inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("����", ({ "fan ye", "fan" }));
	set("title",  "����˾��" );
	set("long", "���Ǵ��������֮һ��\n");
	set("gender", "����");
	set("age", 40);
	set("class", "officer");
	set("attitude", "friendly");
	set("shen_type", 1);
	set("str", 25);
	set("int", 30);
	set("con", 30);
	
	
	set("max_kee", 1500);
	set("max_gin", 500);
	set("force", 1000);
	set("max_force", 1000);
	set("force_factor", 100);
	set("combat_exp", 600000);
	set("score", 200000);

        set_skill("force", 80);
        set_skill("dodge", 80);
        set_skill("parry", 80);
        
        set_skill("sword", 80);
        set_skill("staff", 80);
	set_skill("kurong-changong", 80);
        set_skill("tiannan-step", 80);
        set_skill("jinyu-quan", 80);
        set_skill("duanjia-sword", 80);
	set_skill("literate", 80);

	map_skill("force", "kurong-changong");
	map_skill("dodge", "tiannan-step");
	
	map_skill("sword", "duanjia-sword");
	map_skill("staff", "duanjia-sword");
	map_skill("parry", "duanjia-sword");
	

	setup();
	carry_object("/obj/cloth")->wear();
	carry_object("/obj/weapon/sword")->wield();
	add_money("silver", 20);

	create_family("����μ�",19,"�佫");
}

