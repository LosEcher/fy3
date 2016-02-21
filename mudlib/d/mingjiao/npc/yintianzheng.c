// YinTianZheng.c
// pal 1997.05.09

#include "ansi.h"

inherit NPC;

void create()
{
    set_name("������", ({"yin tianzheng", "yin", "tianzheng", }));
	set("rank_info/self","�Ϸ�");
	set("long",
        "����һλ��Ŀ����ͺ���ߣ���һ����ɫ���ۡ�\n"
        "����üʤѩ�������۽ǣ����ӹ���������ӥ�졣\n"
	);
                                                          
	set("banghui","����");
	set("bh_rank","��üӥ��");
	set("level",9);
	set("gender", "����");
	set("attitude", "peaceful");

	set("age", 72);
	set("shen_type", 1);
	set("str", 30);
	set("int", 30);
	set("con", 30);
	set("dex", 30);

	set("kee", 3500);
	set("max_kee", 3500);
	set("gin", 1500);
	set("max_gin", 1500);
	set("force", 3000);
	set("max_force", 3000);
                set("force_factor", 80);
                  set("combat_exp", 500000);
               set("score", 15000);

        set_skill("force", 160);
        set_skill("sanyang-shengong", 160);
        set_skill("dodge", 160);
	set_skill("tianlong-bu",160);
        set_skill("parry", 160);
	 set_skill("unarmed", 160);
        set_skill("literate", 100);
	set_skill("sougu", 200);

        map_skill("force", "sanyang-shengong");
        map_skill("parry", "sougu");
	map_skill("dodge","tianlong-bu");
	map_skill("unarmed","sougu");


	set("chat_chance_combat", 20);
	set("chat_msg_combat", ({
		(: command("perform muyeyingyang") :),
	}) );

	setup();

	carry_object("/d/mingjiao/obj/baipao")->wear();
}
int recognize_apprentice(object ob)
{
        string banghui;
        if(! stringp(banghui=ob->query("banghui")) ||
                banghui!=query("banghui"))
        return notify_fail(query("name")+"ҡͷ�������ҷ��׷ǹʣ�"+
                RANK_D->query_self(this_object())+"��θҵ���\n");
	if(ob->query("score")<1000)
                return notify_fail(query("name")+"�����㻹�Ƕ�Ϊ������Щʵ�°ɡ�
\n");
        return 1;
}


