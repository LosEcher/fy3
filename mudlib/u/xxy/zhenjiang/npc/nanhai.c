// musix yangzhou's �к�

inherit NPC;

void create()
{
	set_name("�к�",({ "nanhai","hai","boy" }) );
        set("gender", "����" );
        set("age", 13);
        set("long", 
"��֪˭�ҵ�С�к���\n");

        set("str", 17);
        set("cpi", 16);
        set("con", 15);
        set("int", 17);
	set("shen_type", 1);
//	set("shen", 100);
        set_temp("apply/defense", 10);
        set("combat_exp", 150);
        set("attitude", "peaceful");

        setup();

        carry_object("/obj/cloth")->wear();
}

