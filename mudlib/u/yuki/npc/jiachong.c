inherit NPC;

void create()
{
        set_name("�׳�", ({ "jiechong", "jiachong" }) );
        set("race", "Ұ��");
        set("age", 2);
        set("long", "һֻС��Ǽ׳棬���ڶ�ݺݵĶ����㡣\n");
        set("attitude", "killer");
 
        set("str", 15);
        set("cor", 16);

        set("limbs", ({ "ͷ��","����" }) );
        set("verbs", ({ "bite" }) );
 
        set("combat_exp", 200);

        set_temp("apply/attack", 5);
        set_temp("apply/damage", 3);
        set_temp("apply/defence",5);
        set_temp("apply/armor",2);

        setup();
}

void die()
{
        object ob;
        message_vision("$N����Ŀ���ͷ�ƣ����ˡ�\n", this_object());
        destruct(this_object());
}
