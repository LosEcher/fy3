//xingren1
inherit NPC;
void create()
{
	set_name("����", ({ "xinren","ren","woman"}));
	set("gender", "Ů��");
	set("age", 30);
	set("long", "�����������Ǽҵ�ϱ��\n");
	
 	set("str" ,18);
	set("combat_exp", 300);
//	set("mingwang", -1);
	set("attitude", "peaceful");
	

        set("chat_chance", 10);
        set("chat_msg", ({
	" ������������:����һ���ҿɲ����װ�!\n",
	"������������:�������ֲ�֪�㵽�����Ǯȥ�ˣ�\n",
		(: random_move :)
}));

//	set_skill("unarmed", 10);
//	set_skill("dodge", 30);
//	set_temp("apply/attack", 5);
	set_temp("apply/defense",15);
	setup();
	carry_object("/obj/cloth")->wear();
        add_money("silver",1); 
}
