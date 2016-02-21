// jia.c ������ 

#include <ansi.h>
inherit NPC;
string do_yaoqing();

void create()
{
	set_name("������", ({ "jia laoliu", "jia" }));
	set("banghui", "��ػ�");
	set("shen_type", 1);

	set("gender", "����");
	set("age", 35);
	set("long",
		"\n������ػ���ľ�û��ڣ�����������֮ʱ�����������ɣ�\n"+
		"�����ǲ���ɱ���췴��ֻ����˽©˰����û���ӵ�С���⣬\n"+
		"������������������׷ɱ��éʮ��Ҳ��˺���������\n");
	set("no_get_from", 1);

	set_skill("unarmed", 60);
	set_skill("yunlong-shou",60);
	set_skill("dodge", 60);
	set_skill("yunlong-shenfa",60);
	set_skill("force",60);
	set_skill("yunlong-xinfa",60);
	set_skill("parry",60);

	map_skill("force","yunlong-xinfa");
	map_skill("dodge","yunlong-shenfa");
	map_skill("unarmed","yunlong-shou");
	map_skill("parry","yunlong-shou");

	set_temp("apply/defense", 30);
	set_temp("apply/attack", 30);
	set_temp("apply/damage", 15);

	set("combat_exp", 50000);
	set("max_kee",600);
	set("max_force",500);
	set("force_factor",50);

	set("attitude", "friendly");
        set("inquiry", ([
		"�½���" :  "\n����ܶ����ɲ����װ���\n",
		"������ػ�" :  (: do_yaoqing() :),
             "���帴��" : "ȥ���׳��͹ײĵ���ϸ���ưɣ�\n",
       ]) );

	setup();
	carry_object("/obj/cloth")->wear();
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
        message_vision("$N��$n��ͷ������λ"+
	 RANK_D->query_respect(ob)+"����"+
        YEL"������ػ�"NOR+"�İɣ�\n",this_object(),ob);
        else
        command("say ������ǰ�ֵ��ڣ����е㽫�������");
}

string do_yaoqing()
{
        object ob;
        string banghui;
        ob=this_player();
        banghui=(string)ob->query("banghui");
        if(! banghui)   {
	if((int) ob->query("mingwang")<0)		{
		command("say �ߣ����������ְ���Ҳ������ػ᣿");
		return;
	}
        if((int)ob->query("have_banghui")<=4)   {
                ob->set_temp("oldsix/target",this_object());
                return "�ǾͿ������ػ��(jiaru jia)��";
        }
        else    return "�������ַ����޳����ˣ������ǲ�Ҫ�ġ�";
        }
        else if(banghui !=(string)query("banghui"))     {
                return "�ߣ���������"+banghui+"��˵�ɡ�";
        }
        else    return "�Ǻǣ������ֵܣ��αؿ�������Ц��";
}
