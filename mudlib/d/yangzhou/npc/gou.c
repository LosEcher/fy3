// yangzhou 's ��

inherit NPC;

void create()
{
	set_name("���͹�", ({ "habagou","gou","dog" }) );
	set("race", "Ұ��");
	set("age", 3);
	set("long", "һֻ���͹���\n");
	
	set("str", 32);
	set("con", 36);

	set("limbs", ({ "ͷ��", "����", "ǰ��", "���", "β��" }) );
	set("verbs", ({ "bite", "claw" }) );

	set("chat_chance", 6);
	set("chat_msg", ({
		(: this_object(), "random_move" :),
		"���͹��ñ�����������Ľš�\n",
		"���͹�����Ľű߰��������ģ����ֶ����ԡ�\n",
		"���͹�������ҡ��ҡβ�͡�\n",
		"���͹�����ץ��ץ�Լ��Ķ��䡣\n" }) );
		
	set_temp("apply/attack", 10);
	set_temp("apply/armor", 3);

	setup();
}

int accept_object(object who, object ob)
{
	if( ob->id("bone") ) {
		set_leader(who);
		message("vision", name() + "���˵���������������\n", environment());
		return 1;
	}
       if( ob->id("baozi") ) {
                set_leader(who);
                message("vision", name() + "���˵���������������\n", environment());
                return 1;
        }


}
