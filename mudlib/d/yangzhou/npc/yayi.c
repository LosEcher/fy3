//yayi

#include <ansi.h>

inherit NPC;

void create()
{
        set_name("����", ({ "yayi", "ya" }) );
        set("long",
                "�������õ����ۣ�ǧ��Ҫ������\n");

	set("age" , 40);
        set("attitude", "peaceful"); 

        set("combat_exp", 5000);

        set_skill("unarmed",30+random(10));
        set_skill("parry", 30+random(10));
        set_skill("dodge", 30+random(10));

        set_temp("apply/attack", 30);
        set_temp("apply/defense", 30);
        set_temp("apply/armor", 30);
        set("chat_chance", 8);
        set("chat_msg", ({
HIR"���۵��������������������䡫������\n"NOR
        }) );

        setup();

        carry_object("obj/cloth")->wear();
//        carry_object(__DIR__"obj/sawei")->wield();
}

