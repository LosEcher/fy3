inherit NPC;
void create()
{
        set_name("���С����", ({ "girl_fish","girl"}));
        set("gender", "Ů��");
        set("age", 13);
        set("long", "����������С���������СŮ��\n");
        
        set("per" ,25);
        set("str" ,12);
        set("combat_exp", 1200);
        set("attitude", "peaceful");
        
       set("chat_chance", 15);
        set("chat_msg", ({
                "С����˵��������������粻֪��������ô���ˡ�����\n",
                "С����̾�������һ�û�м���������ء�\n",
                "С����������üͷ������Ը������ү�������������ճɾ�����������\n",

}));
        set_skill("unarmed", 100);
        set_skill("dodge", 200);
        set_temp("apply/defense",10);
        setup();
        carry_object("/obj/cloth")->wear();
        add_money("coin",100); 
}

