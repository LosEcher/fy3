//xingren
inherit NPC;
void create()
{
	set_name("����",({"xingren","ren","man"}));
	set("gender", "����");
	set("age", 20);
	set("long", "���ڽ��ϵ�����\n");
	
 	set("str" ,18);
	set("combat_exp", 300);
	set("mingwang",1);
	set("attitude", "peaceful");
	
	set("chat_chance", 5);
        set("chat_msg", ({
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
