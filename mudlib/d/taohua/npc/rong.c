inherit NPC;
void create()
{
        set_name("����", ({ "huang rong","rong"}));
        set("gender", "Ů��");
        set("age", 20);
        set("long", "���ɰ����ò���������á�һ����Ƥ��������\n");
        
        set("per" , 40);
        set("str" , 30);
        set("combat_exp", 500000);
        set("attitude", "peaceful");
        
       set("chat_chance", 10);
        set("chat_msg", ({
                "�ض�˵������������粻֪��������ô���ˡ�����\n",
                "�ض�̾����������������� ����\n",

}));
        set_skill("unarmed", 100);
        set_skill("dodge", 100);
        set_skill("parry", 100);

        setup();
        carry_object("/d/taohua/obj/huangyi")->wear();
        add_money("coin",100); 
}

