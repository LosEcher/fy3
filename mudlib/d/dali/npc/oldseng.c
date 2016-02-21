// oldseng.c

#include <ansi.h>
inherit NPC;

void create()
{
        set_name("������ɮ", ({ "oldseng" }));
        set("title",  "����ɮ��" );
        set("long", "����һ���������ص�����ɮ�¡�\n");
        set("gender", "����");
        set("age", 60);
        set("class", "officer");
        set("attitude", "friendly");
        set("shen_type", 1);
        set("str", 250);
        set("int", 25);
        set("con", 25);  
        set("max_kee", 1000);
        set("max_gin", 500);
        set("force", 1000);
        set("max_force", 1000);
        set("force_factor", 50);
        set("combat_exp", 3500000);
        set("score", 105000);
        set_skill("force", 200);
        set_skill("dodge", 200);
        set_skill("parry", 200);
        set_skill("sword", 200);
        set_skill("staff", 200);
        set_skill("kurong-changong", 200);
        set_skill("tiannan-step", 200);
        set_skill("jinyu-quan", 200);
        set_skill("duanjia-sword", 200);
        set_skill("literate", 200);
        set_skill("unarmed", 200);
        map_skill("unarmed","jinyu-quan");
        map_skill("force", "kurong-changong");
        map_skill("dodge","tiannan-step");
        map_skill("sword","duanjia-sword");
        map_skill("staff","duanjia-sword");
        map_skill("parry","duanjia-sword");


        setup();
        carry_object("/obj/cloth")->wear();
carry_object("/d/dali/obj/book.c")->wield();
        add_money("silver", 10);

        create_family("����μ�",19,"ɮ��");
}

