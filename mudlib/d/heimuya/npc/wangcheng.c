// wangcheng.c
#include <ansi.h>

inherit NPC;
string do_yaoqing();


void create()
{
	set_name("����", ({ "wang cheng","wang"}) );
	set("gender", "����" );
	set("banghui", "���½�");
	set("bh_rank","����������");
	set("age", 65);
	set("long", "������İ��֣�������Ц����ʵΪ��ʮ�ֺݶ���\n");
	set("attitude", "friendly");
	set("shen_type", -1);

	set("per", 21);
	set("str", 23);
	set("int", 23);
	set("con", 22);
	set("dex", 20);
        set("inquiry", ([
		"�������½�" : (:do_yaoqing:),
        ]));

	set("max_kee", 1000);
	set("max_gin",1000);
	set("force", 1500);
	set("max_force", 1500);
	set("force_factor", 150);
	set("combat_exp", 350000);
	set("score", 30000);

	set_skill("force", 100);
	set_skill("dodge", 90);
	set_skill("unarmed", 100);
	set_skill("parry", 80);
	set_skill("hammer",100);
	set_skill("sword",100);
	set_skill("taiji-shengong",70);
	set_skill("tiyunzong", 80);
	set_skill("taiji-jian", 100);

	map_skill("force", "taiji-shengong");
	map_skill("dodge", "tiyunzong");

	map_skill("parry", "taiji-jian");
	map_skill("sword", "taiji-jian");

	setup();
carry_object("/obj/weapon/sword")->wield();
        carry_object(__DIR__"obj/cloth")->wear();
}
void init()
{
        object ob;

        ::init();

        if( interactive(ob=this_player()) && !is_fighting())
        {
                remove_call_out("greeting");
                call_out("greeting",1,ob);
        }
}

void greeting(object ob)
{
        string banghui;
        if(!ob || environment(ob)!=environment()) return;
        banghui=(string)ob->query("banghui");
        if(! banghui || banghui!=(string)query("banghui"))
	message_vision("$N��$n����"+RANK_D->query_respect(ob)+
	"�ѵ�Ҳ��Ľ����"+YEL"�������½�"NOR+"�İɡ�\n",this_object(),ob);
	else
	message_vision("$N��������������̣����޲���ս�޲�ʤ��\n",
	this_object());
}

string do_yaoqing()
{
        object ob;
        string banghui;
        ob=this_player();
        banghui=(string)ob->query("banghui");
        if(! banghui)   {
        if((int)ob->query("have_banghui")<=4)   {
                ob->set_temp("oldsix/target",this_object());
		return "��������Ҫ�뱾����(jiaru wang)";
	}
	else	return "���̲���ӭ�����ּ���˼Ǩ���ˡ�";
	}
	else if(banghui !=(string)query("banghui"))     {
		return "�����������"+banghui+"��";
	}
	else	return "�����Լ����֣����ÿ�������Ц��";
}


