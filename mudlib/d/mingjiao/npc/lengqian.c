#include <ansi.h>

inherit NPC;
string do_yaoqing();


void create()
{
    set_name("��ǫ", ({ "leng qian", "leng", "qian", }));
        set("long",
        "����һλ��������ߣ���һ���ײ����ۡ�\n"
        "��˵����Ϊ��ݣ�����ɱ������ͷҲ���϶�˵���ϻ���\n"
        );

	set("banghui","����");
	set("bh_rank","ɢ��");
    set("nickname", "��������");
        set("gender", "����");
        set("attitude", "friendly");

    set("age", 54);
        set("shen_type", 1);
       set("str", 25);
        set("int", 25);
        set("con", 25);
        set("dex", 25);
        set("max_kee", 500);
        set("max_kee", 500);
        set("force", 500);
        set("max_force", 500);
        set("force_factor", 40);
        set("combat_exp", 50000);
        set("score", 5000);

        set_skill("force", 45);
        set_skill("sanyang-shengong", 45);
       set_skill("tianlong-bu",50);
        set_skill("dodge", 50);
	set_skill("unarmed",50);
        set_skill("fengyun-shou",45);
        set_skill("parry", 45);
        set_skill("literate", 60);

	map_skill("force","sanyang-shengong");
	map_skill("dodge", "tianlong-bu");
        map_skill("parry", "fengyun-shou");
	map_skill("unarmed","fengyun-shou");
	set("inquiry", ([
		"��������" : (:do_yaoqing:),
	]));

        setup();

    carry_object("/d/mingjiao/obj/baipao")->wear();
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
	message_vision("$N��$n��ͷ΢Ц�����㣬"+
	YEL"��������"NOR+"��\n",this_object(),ob);
	else
	message_vision("$N����$n���˵�ͷ��\n",this_object(),ob);
}
string do_yaoqing()
{
	object ob;
	string banghui;
	ob=this_player();
	banghui=(string)ob->query("banghui");
	if(! banghui)	{
	if((int)ob->query("have_banghui")<=4)	{
		ob->set_temp("oldsix/target",this_object());
		return "�뱾��(jiaru leng)���졣";
	}
	else	return "���̫�࣬���̲�Ҫ��";
	}
	else if(banghui !=(string)query("banghui"))	{
		return "�ߣ���������"+banghui+"����˵��";
	}
	else	return "��������Ц��";
}



