//shanzei1.c
inherit NPC;

void create()
{
	set_name("小山贼", ({ "xiao shanzei","xiao" }) );
	set("gender", "男性" );
	set("age", 12);
	set("long", "这是个尚未成年的小山贼。\n");
	set("attitude", "friendly");
	set("shen_type", -1);

	set("str", 15);
	set("int", 16);
	set("con", 15);
	set("dex", 16);

	set("max_kee", 200);
	set("max_gin", 200);
	set("force", 80);
	set("max_force", 80);
	set("combat_exp", 1000+random(500));
	set("score", 1000);
	setup();
	add_money("silver", 1);
}

