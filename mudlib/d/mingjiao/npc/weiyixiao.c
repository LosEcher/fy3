// WeiYiXiao.c
// pal 1997.05.10

#include "ansi.h"

inherit NPC;

void create()
{
	set_name("ΤһЦ", ({"wei yixiao", "wei", "yixiao",}));
	set("long",
		"����һֻ���������\n"
		"������ɫ�����˵ġ�\n"
	);

	set("banghui","����");
	set("bh_rank","��������");
	set("level",9);
	set("gender", "����");
	set("attitude", "peaceful");

	set("age", 48);
	set("shen_type", 1);
	set("str", 30);
	set("int", 30);
	set("con", 30);
	set("dex", 30);

	set("max_kee", 3000);
	set("max_gin", 1500);
	set("force", 3000);
	set("max_force", 3000);
      set("force_factor",80);

      set("combat_exp",300000);
        set("score",10000);

       set_skill("force",150);
    	set_skill("dodge", 200);
        set_skill("unarmed",150);
	set_skill("parry", 150);
        set_skill("sanyang-shengong",150);
      	set_skill("qingfu-shenfa", 200);
        set_skill("hanbing-mianzhang",200);
      	set_skill("literate", 100);

        map_skill("force","sanyang-shengong");
    	map_skill("dodge", "qingfu-shenfa");
    	map_skill("unarmed", "hanbing-mianzhang");
    	map_skill("parry", "hanbing-mianzhang");


	set("chat_chance_combat", 20);
	set("chat_msg_combat", ({
		(: command("perform xixueqingfu") :),
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

