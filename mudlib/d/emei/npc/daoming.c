// daoming.c ����

inherit NPC;

void create()
{
        set_name("����С����", ({ "daoming","xiaoshifu",}));
        set("long",
                "���Ƕ��ұ�����¥��С���С�\n");
        set("gender", "����");
        set("age", 16);
        set("attitude", "peaceful");
        set("mingwang", 100);
        set("class", "bonze");

        set("str", 20);
        set("int", 20);
        set("con", 22);

        set("max_kee", 150);
        set("max_gin", 100);
        set("force", 150);
        set("max_force", 150);

        set("combat_exp", 2000);
        set("score", 1000);

        set_skill("force", 30);
        set_skill("dodge", 20);
        set_skill("unarmed", 20);
        set_skill("parry", 20);
        set_temp("apply/attack", 15);
        set_temp("apply/defense", 15);
        set_temp("apply/damage", 5);

        create_family("������", 5, "����");

        setup();

        carry_object("/obj/armor/jiasha")->wear();
}
void init()
{
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
               remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
}
void greeting(object ob)
{
     if( !ob || environment(ob) != environment() ) return;
     say( "����Сʦ������˵������ӭ�������²ؾ�¥����Ҫ��������\n");
}
