// zhang2.c
#include <ansi.h>
inherit NPC;

void create()
{
    set_name("�ų���", ({"zhang chengyun", "zhang", "chengyun"}));
    set("nickname", HIW "��Գ��ħ" NOR );
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

	set_skill("force",160);
	set_skill("hunyuan-yiqi",160);
	set_skill("unarmed",160);
	set_skill("dodge",160);
	set_skill("shaolin-shenfa",160);
	set_skill("parry",160);
	set_skill("club",160);
	set_skill("weituo-gun",160);
	set_skill("houquan",160);

	map_skill("force","hunyuan-yiqi");
    map_skill("club", "weituo-gun");
    map_skill("parry", "weituo-gun");
	map_skill("dodge","shaolin-shenfa");
	map_skill("unarmed","houquan");


    setup();
    carry_object(__DIR__"obj/shutonggun")->wield();
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
