// poorman.c
#include <ansi.h>

inherit NPC;

void create()
{
        set_name("ϷԺ����", ({ "xiyuan dashou","dashou"}) );
        set("gender", "����" );
        set("age", 26);
        set("long", "ά��ϷԺ�ΰ��ı��δ󺺡�\n");
        set("combat_exp", 50000+random(50000));
        set("shen_type", -1);
        set("xiyuan_dashou",1);
        set_skill("unarmed",60);
        set_skill("dodge",60);
        set_skill("parry",60);
        set("max_kee",600);
        set("chat_chance", 35);
        set("chat_msg", ({
        "ϷԺ���ֶ�ݺݵĿ����㡣\n",
        "ϷԺ���ֶ�ݺݵ����������ӡ�\n",
        "ϷԺ����ָ��������㣡����С������\n",
        (: random_move :),
        }) );

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

        if( !ob || environment(ob) != environment() ) return;
	if( userp(ob) && ob->is_fighting())	{
		message_vision(HIC"$Nŭ�����$n���������˵��ң��ҿ����ǲ�����ˣ�\n"NOR,
		this_object(),ob);
		command("follow "+ob->query("id"));
		kill_ob(ob);
		ob->fight_ob(this_object());
	}
}
