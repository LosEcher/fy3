#include <ansi.h>
inherit NPC;
inherit F_MASTER;
string do_yaoqing();
void create()
{
        set_name("������", ({"jiang shangyou", "jiang", "shangyou"}));
        set("title", "ؤ���������");
        set("gender", "����");
        set("age", 19);
        set("long",
                "����λؤ��������ӣ������Ǹ�Ӣ�����\n");
        set("attitude", "peaceful");
        set("class", "beggar");
        set("str", 25);
        set("int", 20);
        set("con", 20);
        set("max_kee", 220);
        set("max_gin", 200);
        set("force",250);
        set("banghui","ؤ��");
        set("shen_type",1);
        set("max_force", 250);
        set("force_factor",25);
        set("combat_exp", 50000);
        set_skill("force", 50);
        set_skill("huntian-qigong", 50);
        set_skill("unarmed", 50);
        set_skill("xianglong-zhang", 50);
        set_skill("dodge", 50);
        set_skill("xiaoyaoyou", 50);
        set_skill("parry", 50);
        set("inquiry",([
        "����ؤ��":(:do_yaoqing:),
        ]));

        map_skill("force", "huntian-qigong");
        map_skill("unarmed", "xianglong-zhang");
        map_skill("dodge", "xiaoyaoyou");
        create_family("ؤ��", 20, "����");
        setup();
   carry_object("/obj/cloth")->wear();
   carry_object(__DIR__"obj/zhuzhang")->wield();
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
	message_vision("$N������Ķ�$n����������"+YEL+"����ؤ��"+NOR+"��?\n",
	this_object(),ob);
	else   
	message_vision("$N����$n����Ц��Ц��\n",this_object(),ob);
}                                                                                
string do_yaoqing()
{
	object ob;
	string banghui;
	ob=this_player();
	banghui=(string)ob->query("banghui");
	if(! banghui)	{
		ob->set_temp("oldsix/target",this_object());
		return "���Ȼ���ļ�����ؤ��Ҿ�Ϊ������(jiaru jiang).";
	}
	else if(banghui !=(string)query("banghui"))	{
		return "���Ȼ����"+banghui+",��������Ұ���Եװ���!";
	}
	else	return "������ؤ����ӣ������ͷ������.";
}
