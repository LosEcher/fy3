// laofu.c �ϻ�
// Date: Sep.22 1997

inherit NPC;

void create()
{
        set_name("�ϻ�", ({ "laohu", "tiger","hu" }) );
        set("race", "Ұ��");
        set("age", 20);
        set("long", "һֻ����ͻ�����ΰ���ˡ�\n");
        set("attitude", "aggressive");
        set("shen_type", -1);

        set("limbs", ({ "��ͷ", "����", "ǰצ", "��ץ", "β��" }) );
        set("verbs", ({ "bite", "claw" }) );

        set("combat_exp", 50000);
        set("force",800);
        set("max_force",800);
        set("force_factor",500);
        set("max_atman",500);

        set_temp("apply/attack", 500);
        set_temp("apply/defense", 500);
        set_temp("apply/armor", 500);

        setup();

        set("chat_chance", 10);
        set("chat_msg", ({
                "�ϻ��ڿ�Ѳ���ŵ�����������ҳ���\n",
                "�ϻ����쳤Х������ɽ�ȣ���Ҷ��׹��\n",
        }) );
}

