// dipi.c

inherit NPC;

void create()
{
        set_name("��Ʀ", ({"dipi","pi"}) );
        set("gender", "����" );
        set("age", 19);
        set("long", "�����������ĵ�Ʀ��\n");

        set_temp("apply/attack", 15);
        set_temp("apply/defense", 15);
        set("combat_exp", 950);
	set("mingwang", -1);
        set("str", 25);
        set("kar", 20);
        set("con", 18);
        set("int", 15);
        set("attitude","heroism");
        setup();
        set("chat_chance", 8);
        set("chat_msg", ({
"��Ʀ����һ���Ц��������\n",
"��Ʀɫ���ԵĿ����㡣\n",
        }) );
        carry_object("/obj/cloth")->wear();
         add_money("coin",10);
}

