// yangzhou 's С����

inherit NPC;

void create()
{
	set_name("С����", ({ "xiaogongji","gongji","ji" }) );
	set("race", "Ұ��");
	set("age", 3);
	set("long", "һֻС������\n");
        set("mingwang",-1);
	
	set("str", 32);
	set("con", 36);

	set("limbs", ({ "ͷ��", "����" , "ץ��", "β��" }) );
	set("verbs", ({ "bite", "claw" }) );

	set("chat_chance", 6);
	set("chat_msg", ({
		(: this_object(), "random_move" :),
		"С��������˼�����\n" }) );
		
	set_temp("apply/attack", 30);
	set_temp("apply/armor", 40);

	setup();
}

