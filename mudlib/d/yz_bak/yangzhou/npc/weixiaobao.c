// music   yangzhou's ΤС��

inherit NPC;

void create()
{
	set_name("ΤС��", ({ "xiaobao", "wxb","xiao bao" }));
	set("gender", "����");
	set("age", 18);
	set("long", "���ݳ��������Ļ�죬���촵ţ�Ĳ���������ҵ��\n");
	
        set("title","�����");
	set("combat_exp", 300);
	set("mingwang", 0);

	set("attitude", "peaceful");
	
	set_skill("unarmed", 20);
	set_skill("dodge", 20);
	set_temp("apply/attack", 10);
	set_temp("apply/defense", 10);

	setup();
	carry_object("/obj/cloth")->wear();
}
void init()
{
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
}

void greeting(object ob)
{
	if(ob->query("age")<=14 && !wizardp(ob))	{
		say("С������"+ob->query("name")+"���˵�ͷ���������������ļ־Ը��ʦ����֪��λ"+	RANK_D->query_respect(ob)+"������񣿡�\n");
	}
	else	{
		switch(random(2))	{
			case 0:	command("welcome "+ob->query("id"));
				break;
			case 1: command("nod "+ob->query("id"));
				break;
		}
	}
	return;
}
