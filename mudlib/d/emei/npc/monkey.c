#include <ansi.h>
inherit NPC;

void create()
{
        set_name(HIY"��˿��"NOR, ({ "monkey", "houzi" }) );
        set("race", "Ұ��");
        set("age", 5);
        set("long", "����ϲ���Ľ�˿���\n");
        set("attitude", "friendly");

		set("can_speak",0);
        set("str", 36);
        set("cor", 36);

		set("max_kee",500+random(500));
		set("eff_kee",query("max_kee"));
		set("kee",query("eff_kee"));

        set("limbs", ({ "ͷ��", "��ǰצ","��ǰצ", "β��","ƨ��" }) );
        set("verbs", ({ "bite","claw" }) );

        set("combat_exp", 10000+random(10000));

        set_temp("apply/attack", 60);
        set_temp("apply/damage", 60);
        set_temp("apply/armor", 60);

        set("chat_chance", 5);
        set("chat_msg", ({
                "��˿��һ����,��β�;�ס��֦,��������ǧ.\n",
                "��˿�����������,ɦ��ɦ���ͷ��.\n",
        }) );

        set("chat_chance_combat", 5);
        set("chat_msg_combat", ({
                "��˿�����ͳ�һֻ����,�����ζ�س�������!\n",
        }) );
        setup();
}
void die()
{
        object ob;
        ob = new("/d/emei/obj/taozi");
        ob->move(environment(this_object()));
        destruct(this_object());
}
