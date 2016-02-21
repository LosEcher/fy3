// fansong.c
#include <ansi.h>
inherit NPC;

void create()
{
    set_name("����", ({"fan song", "fan", "song"}));
    set("nickname", HIW "������ħ" NOR );
    set("banghui", "���½�");
    set("bh_rank","����");
    set("gender", "����");
    set("age", 42);
    set("shen_type", -1);
    set("long",
        "����������̳��ϡ�\n");
    set("attitude", "peaceful");

    set("per", 21);
    set("str", 30);
    set("int", 30);
    set("con", 30);
    set("dex", 30);

    set("kee", 3000);
    set("max_kee", 3000);
    set("gin", 1000);
    set("max_gin", 1000);
    set("force", 3000);
    set("max_force", 3000);
    set("force_factor", 300);

    set("combat_exp", 1500000);
    set("score", 0);

	set_skill("force",120);
	set_skill("hunyuan-yiqi",120);
	set_skill("unarmed",120);
	set_skill("dodge",120);
	set_skill("shaolin-shenfa",120);
	set_skill("nianhua-zhi",120);
	set_skill("parry",120);
	set_skill("axe",120);
	set_skill("duanyun-fufa",120);

	map_skill("force","hunyuan-yiqi");
	map_skill("dodge","shaolin-shenfa");
	map_skill("parry","nianhua-zhi");
	map_skill("unarmed","nianhua-zhi");
	map_skill("axe","duanyun-fufa");

    setup();
    carry_object(__DIR__"obj/dafu")->wield();
carry_object("/obj/cloth")->wear();
}

int recognize_apprentice(object ob)
{
        string banghui;
        if(! stringp(banghui=ob->query("banghui")) ||
                banghui!=query("banghui"))
        return notify_fail(query("name")+"ҡͷ�������ҷ��׷ǹʣ�"+
                RANK_D->query_self(this_object())+"��θҵ���\n");
	if(ob->query("score")<1000)
	return notify_fail(query("name")+"�����㻹�Ƕ�Ϊ������Щʵ�°ɡ�\n");
        return 1;
}

