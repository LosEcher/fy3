// yangzhou 's ��ؤ

inherit NPC;

void create()
{
	set_name("��ؤ", ({ "qigai","qi","gai" }) );
	set("age", 3);
	set("long", "һֻ������ؤ��\n");
        set("combat_exp",400);
        set("mingwang",-1);	
	set("str", 32);
	set("con", 36);

	set("chat_chance", 6);
	set("chat_msg", ({
		(: this_object(), "random_move" :),
		"��ؤ�������������֡�\n",
		"��ؤ�ڵ��ϴ��˸�����\n" }) );
		
	set_temp("apply/attack", 20);
	set_temp("apply/armor", 20);

	setup();
carry_object("/obj/cloth")->wear();
}

int accept_object(object who, object ob)
{
	if( ob->id("baozi") ) {
		message("vision", name() + "�����������ͷ��\n", environment());
                set("combat_exp",600);
                set("dodge",20);
                set("parry",20);
                set("unarmed",15);
		return 1;
	}

}
