// music   yangzhou's 李逵

inherit NPC;

void create()
{
	set_name("李逵", ({ "likui", "li", "li kui" }) );
	set("gender", "男性" );
	set("age", 40);
        set("title","赌场保镖");
	set("long",
		"李逵瞪了你一眼，冷笑了一声。\n");
	set("mingwang", -1);
	set("combat_exp", 80000);
        set("int", 31);
        set_skill("unarmed",100);
        set_skill("dodge",40);
	set("attitude", "peaceful");
	setup();
        carry_object("/obj/cloth")->wear();
	add_money("coin", 100);
}

