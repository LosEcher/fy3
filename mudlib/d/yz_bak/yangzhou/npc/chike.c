//music yangzhou' 吃客

inherit NPC;

void create()
{
	set_name("吃客", ({ "chike","chi ke", "chi","ke" }) );
	set("gender", "男性" );
	set("age", 26);
	set("int", 28);
        set("mingwang",-1);
        set("combat_exp",300);
	set("long",
		"肥头大耳的公子哥。\n");

	set("attitude", "peaceful");
	set_skill("literate", 10);
        set_skill("unarmed",10);
	setup();
}

