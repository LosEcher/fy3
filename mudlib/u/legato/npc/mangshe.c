#include <ansi.h>
inherit NPC;

void create()
{
        set_name(RED"�������"NOR, ({ "mang she", "she" }) );
        set("race", "Ұ��");
        set("age", 2);
        set("long", "һֻ�����Ĵ����ߣ����ĵ��Ǵ�֮�\n");
        set("attitude", "peaceful");

       

        set("max_gin",1000);
        set("max_kee",1000);
        set("max_sen",1000);
        set("chat_chance", 20);
        set("chat_msg", ({
            "�����߾���Ŀ����㣡\n",
            "�����߽���������������������\n",
            "�������������ź�ɫ����ͷ\n",
                       
      }) );
                      
      setup();
 
        set("str", 30);
        set("cor", 26);

        set("limbs", ({ "ͷ��", "����", "�ߴ�", "β��" }) );
        set("verbs", ({ "bite" }) );
 
        set("combat_exp", 100000);

        set_temp("apply/attack", 150);
        set_temp("apply/damage", 100);
       set_temp("apply/defence",120);
        set_temp("apply/armor",80);
        setup();
        carry_object("/u/legato/obj/shedan");
}

