// poorman.c

inherit NPC;

void create()
{
        set_name("�͹�", ({ "gu gong","gong"}) );
        set("gender", "����" );
        set("age", 25);
        set("long", "������׳������ˡ�\n");
        set("attitude", "friendly");
        set("combat_exp", 8000);
        set("shen_type", 1);
        set_skill("unarmed",45);
        set_skill("dodge",45);
        set_skill("parry",45);
        set_temp("apply/attack",25);
        set_temp("apply/defense",25);
        setup();
        set("chat_chance", 15);
        set("chat_msg", ({
        "�͹�̧�ֲ��˲�����\n",
        "����Ӵ����Ӵ���͹����ź��ӣ������ı������ӣ�\n",
        "�͹��������������֪��Ա���Ҫ��ô�����Ӹ�ʲô��\n",
        }) );
        carry_object("/obj/cloth")->wear();
        add_money("coin",50);
}

