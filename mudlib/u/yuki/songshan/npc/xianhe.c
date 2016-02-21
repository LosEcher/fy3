// xianhe.c
inherit NPC;
inherit F_MASTER;
#include <ansi.h>;
void create()
{
         set_name("�ɺ���", ({ "xianhe weng", "xianhe", "weng" }) );
        set("nickname", "�ɼ�����");
        set("gender", "����");
        set("age", 85);
        set("long", "������ɽ�ɵĳ��ϣ��Ǵ���Ͷʦ�ģ������ʸ���ϣ�����������Ҫ
�������֡��ɼ���������������Ͷ����ɽ�ɵ�����Ϊ��ʲô��˭Ҳ
��֪��������Ը����ͽҲ��Ը�������ɽ�ɵ��κλ�����Ǿ���
����ר�ſ��ر��ŵ��书��ܸ����Ҳ�Ե����֡�\n");

        set("attitude", "peaceful");
        set("str", 26);
        set("con", 30);
        set("dex", 30);
        set("int", 28);

        set("force", 2000);
        set("max_force", 2000);
        set("max_kee",5000);
        set("max_gin",5000);
        set("combat_exp", 900000);
        set("chat_chance_combat", 80);

        set("shen_type", -1);

        set_skill("unarmed", 120);
        set_skill("songyang-zhang",120);
        set_skill("sword", 120);
        set_skill("force", 120);
        set_skill("hanbing-zhenqi",120);
        set_skill("parry", 120);
        set_skill("dodge", 120);
        set_skill("songshan-jianfa", 120);
        set_skill("fuguanglueying", 120);

        map_skill("sword", "songshan-jianfa");
        map_skill("parry", "songshan-jianfa");
        map_skill("dodge", "fuguanglueying");
        map_skill("force","hanbing-zhenqi");
        map_skill("unarmed","songyang-zhang");

        create_family("��ɽ��", 12, "����");
        setup();

        set("chat_chance_combat", 60);
        set("chat_msg_combat", ({
                (: perform_action, "sword.suiyuan" :),
                (: perform_action, "sword.weizun" :),
                (: exert_function, "powerup" :),
                (: exert_function, "heal" :)
        }) );

carry_object("/obj/weapon/sword")->wield();
carry_object("/obj/cloth")->wear();
}
