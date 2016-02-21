// xiao.c
#include <ansi.h>;

inherit NPC;
inherit F_MASTER;

void create()
{
        set_name("������", ({ "xiao feiyu" }));
        set("long", 
"�����Ƿ��������ˣ�����������˫���������
���μ�ʹ�����ꡣ\n"
"��������ʮ���䵭������ȴ��
��һ����Ůû�еĳ�����ŷ��ϡ���̬֮������
֮������˫����ʩҲ��ѷɫ�ֺ���
��\n");

        set("gender", "Ů��");
        set("age", 18);
        set("attitude", "peaceful");
set("nickname", MAG"���鲻�ƶ����"NOR);
set("title", HIW"������Ե������"NOR);
        set("mingwang",1);
        set("str", 20);
        set("int", 35);
        set("per", 100);
        set("con", 30);
        set("dex", 30);
        
        set("kee", 2200);
        set("max_kee", 2200);
        set("gin", 1600);


        set("max_gin", 1600);
        set("force", 2000);
        set("max_force", 2000);
        set("force_factor", 30);

        set("combat_exp", 1000000);
        set("score", 150000);

        set_skill("force", 200);
        set_skill("dodge", 200);
        set_skill("parry", 200);
        set_skill("sword", 200);
        set_skill("zixia-shengong", 200);
        set_skill("huashan-jianfa", 200);
        set_skill("feiyan-huixiang", 200);
        set_skill("huashan-quanfa", 200);
        set_skill("literate", 90);
        set_skill("unarmed", 200);

        map_skill("dodge", "feiyan-huixiang");
        map_skill("force", "zixia-shengong");
        map_skill("parry", "huashan-jianfa");

        map_skill("sword", "huashan-jianfa");
        map_skill("unarmed", "huashan-quanfa");

        

        set("chat_chance_combat", 50);
        set("chat_msg_combat", ({
                (: perform_action, "sword.jianzhang" :),
                (: perform_action, "sword.wushuang" :),
                (: exert_function, "recover" :),
        }) );

        setup();
        carry_object("/obj/cloth")->wear();
        carry_object("/obj/weapon/sword")->wield();
}


