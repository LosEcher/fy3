// cong-buqi.c  �Բ���
inherit NPC;
#include <ansi.h>

void create()
{
        set_name("�Բ���", ({ "cong buqi", "cong" }) );
        set("gender", "����");
        set("class", "swordsman");
        set("title", "��ɽ���ڵ�ʮ��������");
        set("age", 52);
        set("long",
                "�Բ����ǻ�ɽ���ڸ��֡�\n");
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
        set_skill("sword", 120);
        set_skill("force", 120);
        set_skill("parry", 120);
        set_skill("dodge", 120);
        set_skill("literate", 100);
        set_skill("huashan-jianfa", 150);
        set_skill("zixia-shengong", 130);
        set_skill("huashan-quanfa", 80);
        set_skill("poyu-quan", 80);
        set_skill("feiyan-huixiang", 140);

        map_skill("sword", "huashan-jianfa");
        map_skill("parry", "huashan-jianfa");
        map_skill("force", "zixia-shengong");
        map_skill("unarmed", "poyu-quan");
        map_skill("dodge", "feiyan-huixiang");

        create_family("��ɽ�ɽ���", 13, "����");
        setup();

        carry_object("/obj/weapon/sword")->wield();
        carry_object("/obj/cloth")->wear();
}
