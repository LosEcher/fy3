//yahuan
inherit NPC;
void create()
{
	set_name("Ѿ��", ({ "yahuan","girl"}));
	set("gender", "Ů��");
	set("age", 15);
	set("long", "������̫ү�ҵ�Ѿ��\n");
	
        set("per" ,25);
	set("str" ,12);
	set("combat_exp", 1200);
//	set("mingwang", -1);
	set("attitude", "peaceful");
	
        set("chat_chance", 8);
        set("chat_msg", ({
                "����Ǯ�˼��������ƺÿ�ʵ�ʡ���������\n",
                "�Ǳߵ��·���ûϴ�ء�\n",
                "������ү�ܰ����Ҹ��õ��˼���Ҳ��֪���ˡ�\n",

}));
	set_skill("unarmed", 10);
	set_skill("dodge", 30);
//	set_temp("apply/attack", 5);
	set_temp("apply/defense",10);
	setup();
	carry_object("/obj/cloth")->wear();
        add_money("coin",100); 
}
