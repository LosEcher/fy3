// huangboliu.c
inherit NPC;
#include <ansi.h>;
void create()
{
	set_name("�Ʋ���", ({ "huang boliu","huang","boliu"}) );
	set("gender", "����" );
	set("banghui", "���½�");
	set("bh_rank","����������");
	set("nickname", HIW"������"NOR);
	set("age", 85);
	set("long", "һ�����룬ֱ�����أ���Ŀ���֮����\n");
	set("attitude", "friendly");
	set("shen_type", 1);

	set("per", 21);
	set("str", 23);
	set("int", 23);
	set("con", 22);
	set("dex", 20);

	set("max_kee", 1000);
	set("max_kee",1000);
	set("force", 1000);
	set("max_force", 1000);
	set("combat_exp", 350000);
	set("force_factor", 100);
	set("score", 30000);

	set_skill("force", 100);
	set_skill("taiji-shengong",100);
	set_skill("dodge",100);
	set_skill("unarmed", 100);
	set_skill("tiyunzong",100);
	set_skill("taiji-quan",100);
	set_skill("parry",100);

	map_skill("dodge", "tiyunzong");
	map_skill("force","taiji-shengong");
	map_skill("unarmed","taiji-quan");
	map_skill("parry","taiji-quan");

	setup();
carry_object("/obj/cloth")->wear();
}


