#include "ansi.h"

inherit NPC;

void create()
{
        set_name("ׯ�", ({ "zhuang zheng", "zhuang", "zheng", }));
        set("long",
        "����һλ�ߴ��ΰ���������ӣ���һ���ײ����ۡ�\n"
        "����������������򲻵�֮�£�����һ���������ݵĺ��ӡ�\n"
        );

        set("banghui","����");
	set("bh_rank","���������ʹ");
        set("level",7);

        set("gender", "����");
        set("attitude", "friendly");

        set("age", 40);
        set("shen_type", 1);
        set("str", 35);
        set("int", 25);
        set("con", 25);
        set("dex", 25);
        set("max_kee", 1000);
        set("max_gin", 1000);
        set("force", 1000);
        set("max_force", 1000);
        set("force_factor", 20);
        set("combat_exp", 50000);
        set("score", 5000);

       set_skill("force", 50);
        set_skill("sanyang-shengong", 50);
        set_skill("dodge", 50);
	set_skill("tianlong-bu",50);
         set_skill("unarmed", 50);
        set_skill("qishang-quan", 50);
        set_skill("parry", 50);

        map_skill("force", "jiuyang-shengong");
        map_skill("dodge", "tianlong-bu");
        map_skill("unarmed", "qishang-quan");
        map_skill("parry", "qishang-quan");


        setup();

    carry_object("/d/mingjiao/obj/baipao")->wear();
}

