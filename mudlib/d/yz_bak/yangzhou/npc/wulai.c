// yangzhou 's ����

inherit NPC;

void create()
{
	set_name("����", ({ "wulai","wu","lai" }) );
	set("age", 23);
	set("long", "һ�������˵�������\n");
        set("combat_exp",100);
        set("mingwang",-1);	
	set("str", 32);
	set("con", 36);

	set("chat_chance", 2);
	set("chat_msg", ({
		(: this_object(), "random_move" :),
		"������������������,Ҫ�����ӡ�\n",
		"���������Ц�˼�����\n" }) );
		
	set_temp("apply/attack", 2);
	set_temp("apply/armor", 2);

	setup();
carry_object("/obj/cloth")->wear();
}

int accept_object(object who, object ob)
{
	if( ob->id("baozi") ) {
		message("vision", "�����������,������Цһ����\n", environment());
                set("combat_exp",1800);
                set("dodge",30);
                set("parry",30);
                set("unarmed",20);
                set("attitude", "aggressive");
		return 1;
	}

}
