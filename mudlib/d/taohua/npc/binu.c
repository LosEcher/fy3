#include <ansi.h>

inherit NPC;

void create()
{
        set_name("��Ů", ({ "binu","nu", "girl"}));
        set("long",
            "���Ǹ���ò毺õ�Ů��, ��������,\n"+
            "�������, �������.\n");
        set("gender", "Ů��");
        set("age", 15);
        set("shen_type",1);
        set("attitude", "peaceful");

        set("str", 14);
        set("int", 20);
        set("con", 15);
        set("dex", 16);

        set("kee", 100);
        set("max_kee", 100);
        set("gin", 100);
        set("max_gin", 100);

        set("combat_exp", 500);
        set_skill("force", 10);
        set_skill("unarmed", 10);
        set_skill("dodge", 10);
        set_skill("parry", 10);
        set_skill("literate",10);
        set_skill("sword",10);


        setup();
        carry_object("/d/taohua/obj/cloth")->wear();
       
}

