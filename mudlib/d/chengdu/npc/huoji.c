//bye enter

inherit NPC;

void create()
{
        set_name("���", ({ "huoji" }));
        set("str", 20);
        set("gender", "����");
        set("age", 18);
        set("long", "���������м�������������ͦ�ڿ�ġ�\n");
        set("combat_exp", 2500);
        set("attitude", "friendly");
        setup();
carry_object("/obj/cloth")->wear();
}
