//xiaohai

inherit NPC;
void create()
{
	set_name("С��", ({ "xiaohai","kid" }));
	set("gender", "����");
	set("age", 8);
	set("long", "�ڽ��˼ҵ�С�к�\n");
	
	set("combat_exp", 50);
 	set("attitude", "peaceful");
	set_temp("apply/defense", 5);
	setup();
	carry_object("/obj/cloth")->wear();
        add_money("coin",10); 
}
