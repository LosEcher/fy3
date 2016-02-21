// XieXun.c
// pal 1997.05.09

#include "ansi.h"

inherit NPC;

void create()
{
    set_name("лѷ", ({"xie xun", "xie", "xun", }));
	set("rank_info/self","лĳ");
	set("long",
        "����һλ��Ŀ�ΰ�쳣�ĵ����ߣ���һ���ײ����ۡ�\n"
        "����ͷ�Ʒ����������ݣ���������һ�㣬ֻ����ֻ�۾�����������\n"
	);

	set("banghui","����");
	set("bh_rank","��ëʨ��");
	set("level",9);
	set("gender", "����");
	set("attitude", "peaceful");

	set("age", 63);
	set("shen_type", 1);
	set("str", 30);
	set("int", 30);
	set("con", 30);
	set("dex", 30);

	set("max_kee", 3500);
	set("max_gin", 1500);
	set("force", 3000);
	set("max_force", 3000);
        set("force_factor",80);

        set("combat_exp",400000);
      set("score",15000);

       set_skill("force",170);
      set_skill("sanyang-shengong",170);
	set_skill("dodge", 170);
	set_skill("tianlong-bu",170);
        set_skill("parry",170);
	set_skill("unarmed",170);
       set_skill("qishang-quan",200);
    	set_skill("literate", 100);

       map_skill("force","sanyang-shengong");
        map_skill("parry", "qishang-quan");
	map_skill("dodge","tianlong-bu");
	map_skill("unarmed","qishang-quan");


	set("chat_chance_combat", 200);
	set("chat_msg_combat", ({
		(: command("perform hunpofeiyang") :),
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


