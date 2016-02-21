// cheng-buyou.c  �ɲ���
inherit NPC;
#include <ansi.h>

void create()
{
        set_name("�ɲ���", ({ "cheng buyou", "cheng" }) );
        set("gender", "����");
        set("class", "swordsman");
        set("title", "��ɽ���ڵ�ʮ��������");
        set("age", 41);
        set("long",
                "һ���׾���Ƥ�İ��ӣ���Ҳ����С������\n");
        set("attitude", "peaceful");
        set("str", 26);
        set("con", 30);
        set("dex", 30);
        set("int", 28);

        set("force", 2400);
        set("max_force", 2400);
        set("force_factor", 30);
        set("max_kee",2000);
        set("max_gin",1200);

        set("combat_exp", 1000000);
        set("mingwang", -200000);

        set("chat_chance_combat", 80);
        set("chat_msg_combat", ({
                (: perform_action, "sword.feilong" :),
                (: exert_function, "powerup" :),
        }) );

        set_skill("unarmed", 80);
        set_skill("sword", 150);
        set_skill("force", 150);
        set_skill("parry", 150);
        set_skill("dodge", 150);
        set_skill("literate", 100);
        set_skill("huashan-jianfa", 150);
        set_skill("zixia-shengong", 150);
        set_skill("huashan-quanfa", 80);
        set_skill("hunyuan-zhang", 80);
        set_skill("feiyan-huixiang", 120);

        map_skill("sword", "huashan-jianfa");
        map_skill("parry", "huashan-jianfa");
        map_skill("force", "zixia-shengong");
        map_skill("unarmed", "huashan-quanfa");
        map_skill("dodge", "feiyan-huixiang");

        create_family("��ɽ�ɽ���", 13, "����");
        setup();

carry_object("/obj/weapon/sword")->wield();
        carry_object("/obj/cloth")->wear();
}

void init()
{
        object ob;

        ::init();
        if( interactive(ob=this_player()) && !is_fighting() )
        {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
}

void greeting(object ob)
{
        if(ob->query("family/master_id") != "yue buqun")
              say ("�ɲ���˵����λ"+RANK_D->query_respect(ob) + "����֪���˺��£�\n");
        else
        {
              message_vision("�ɲ���һ��$N�ʹ�ŭ����������α���ӵ�ͽ���ˡ�\n", ob);
              this_object()->kill_ob(ob);
        }
        return;
}

