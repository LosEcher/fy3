#include "ansi.h"

inherit NPC;

void create()
{
    set_name("���˿", ({"dai qisi", "dai", "qisi", }));
        set("long",
        "���������Ĵ���֮һ���������������˿������һ������.\n"
        "���߱���Ŀ��������ѩ�����޲��ɷ��\n"
        "�������ڶԺ�ǧҶһ���й�����������������Ը����Ϊ�Ĵ���֮�ס��\n"
        );

        set("banghui","����");
	set("bh_rank","��������");
        set("level",9);
        set("gender", "Ů��");
        set("attitude", "peaceful");

        set("age", 45);
        set("shen_type", 1);
        set("str", 25);
       set("int", 25);
        set("con", 25);
        set("dex", 25);

        set("max_kee", 3500);
        set("max_gin", 1500);
        set("force", 3000);
        set("max_force", 3000);
        set("force_factor", 60);

        set("combat_exp", 300000);
        set("score", 80000);

        set_skill("force", 140);
        set_skill("sanyang-shengong", 140);
        set_skill("dodge", 140);
	set_skill("tianlong-bu",140);
        set_skill("parry", 140);
	set_skill("unarmed",140);
	set_skill("fengyun-shou",140);
        set_skill("literate", 100);
	 set_skill("whip",200);
	 set_skill("riyue-bian",200);

        map_skill("force", "sanyang_shengong");
        map_skill("dodge", "tianlong-bu");
       map_skill("unarmed", "fengyun-shou");
        map_skill("parry", "riyue-bian");
	map_skill("whip","riyue-bian");

        setup();

        carry_object("/d/mingjiao/obj/zishan")->wear();
	 carry_object("/d/mingjiao/obj/changbian")->wield();
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
