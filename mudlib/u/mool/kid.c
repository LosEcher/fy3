inherit NPC;
void create()
{
        set_name("С��", ({ "kid" }));
        set("gender", "����");
        set("age", 8);
        set("long", "�ڽ��˼ҵ�С�к�\n");
        
        set("combat_exp", 50);
        set("random_move");
        set("attitude", "peaceful");
        set_temp("apply/defense", 5);
        setup();
}

