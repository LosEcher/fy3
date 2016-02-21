// YinWuShou.c
// pal 1997.05.11

inherit NPC;

void create()
{
    set_name("������", ({ "yin wushou", "yin", "wushou", }));
	set("long",
        "����һλ���ߣ���һ���ײ����ۡ�\n"
        "���ǰ�üӥ�����������ʹӡ������ü�����ģ�һ�����������ࡣ\n"
	);


	set("banghui","����");
	set("gender", "����");
	set("attitude", "friendly");

    set("age", 57);
	set("shen_type", 1);
	set("str", 25);
	set("int", 25);
	set("con", 25);
	set("dex", 25);
	set("max_kee", 1000);
	set("max_gin", 1000);
	set("force", 1000);
	set("max_force", 1000);
	set("force_factor", 100);
	set("combat_exp", 100000);
	set("score", 5000);

	set_skill("force", 85);
	set_skill("hunyuan-yiqi", 85);
	set_skill("dodge", 85);
	set_skill("shaolin-shenfa", 85);
	set_skill("unarmed", 95);
	set_skill("jingang-quan", 95);
	set_skill("parry", 85);
	set_skill("foxuexinde", 85);
	set_skill("literate", 85);

	map_skill("force", "hunyuan-yiqi");
	map_skill("dodge", "shaolin-shenfa");
	map_skill("unarmed", "jingang-quan");
	map_skill("parry", "jingang-quan");


	setup();

    carry_object("/d/mingjiao/obj/baipao")->wear();
}

