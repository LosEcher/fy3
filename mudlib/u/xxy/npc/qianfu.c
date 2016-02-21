// qianfu.c ǧ��  16/6/98 

inherit NPC;

void create()
{
	set_name("�ɹ�ǧ��", ({ "qianfu","jiangjun", "jiang" }));
	set("age", random(15)+30);
	set("gender", "����");
	set("long", "��������,�з�����ﲻʱ¶���ݶ��Ĺ�.\n");
	set("attitude", "peaceful");

	set("str", 34);
	set("dex", 36);
	set("combat_exp", random(30000)+70000);
	set("mingwang", 2);

	set_skill("unarmed", 80);
	set_skill("dodge", 80);
	set_skill("parry", 80);
	set_skill("blade", 80);
	set_skill("force", 80);
	set_temp("apply/attack", 80);
	set_temp("apply/defense", 80);
	set_temp("apply/damage", 80);
	set_temp("apply/armor", 80);

    set("chat_chance_combat", 15);
	set("chat_msg_combat", ({
		"ǧ�������ı��ǵ�ơ�ƶ�,���˸���,������Ѭ��!\n",
		"ǧ�򳤶���Ц�����ص�:�ҿ����ܳŶ��!˵�Ŵ��˸���.\n",
	}));
	set("inquiry", ([
		"����ү" : "���죡��ү�����������",
		"rumors" : "��˵��ص������ű��أ�",
		]) );	
	setup();
	carry_object("obj/weapon/blade")->wield();
	carry_object("obj/cloth")->wear();
}

void init()
{
	object ob;
	if (interactive(ob = this_player()) && 
		(int)ob->query_condition("killer")) {
		remove_call_out("kill_ob");
		call_out("kill_ob", 1, ob);
	}
}

int accept_fight(object me)
{
	command("say ������ͻ�֪���ҵ������ˡ�\n");
       command("hehe\n");
	me->apply_condition("killer", 100);
	kill_ob(me);
	return 1;
}
