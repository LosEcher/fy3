// yangzhou 's ��

inherit NPC;

void create()
{
	set_name("�ǹ�",({"langgou","gou","dog"}));
	set("race", "Ұ��");
	set("age",7);
	set("long","һֻ���һ�Ժ���ǹ���\n");
	
	set("str", 32);
	set("con", 36);

	set("limbs", ({ "ͷ��", "����", "ǰ��", "���", "β��" }) );
	set("verbs", ({ "bite", "claw" }) );

	set("chat_chance", 6);
	set("chat_msg", ({
		(: this_object(), "random_move" :),
		"�ǹ���ݺݵĶ����㡣\n",
		"�ǹ��ñ�����������Ľš�\n",
		"�ǹ���ݺݵĽ���������\n"}));
		
	set_temp("apply/attack", 10);
	set_temp("apply/armor", 3);
	set("combat_exp",800);
	setup();
}
void die()
{
	object pi;
	message_vision("�ǹ��ҽ���һ������ֻ�ų鴤�˼������ˡ�\n",this_object());
	pi=new(__DIR__"obj/goupi.c");
	pi->move(environment(this_object()));
	destruct(this_object());
}
