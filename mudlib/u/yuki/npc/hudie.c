inherit NPC;

void create()
{
        set_name("����", ({ "hudie", "hudie" }) );
        set("race", "Ұ��");
        set("age", 2);
        set("long", "һֻ������ɫ�ĺ���������������衣\n");
        set("attitude", "peaceful");
 
        set("str", 15);
        set("cor", 16);

        set("limbs", ({ "���" }) );
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
        message_vision("$N������۷���ɢ�����ˡ�\n", this_object());
        destruct(this_object());
}
