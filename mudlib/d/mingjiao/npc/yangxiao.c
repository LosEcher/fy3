// YangXiao.c
// pal 1997.05.09

#include "ansi.h"

inherit NPC;

string ask_me();
string ask_ling();

void create()
{
    set_name("����", ({"yang xiao","yang","xiao",}));
	set("long",
        "����һλ�������������ײ����ۡ�\n"
        "����ò���ţ�ֻ��˫ü�����´������¶��������������ƣ������Դ�˥�����\n"
        "֮�ࡣ�����Բ�������ɫĮȻ���ƺ��ĳ�Զ����������ʲô���顣\n"
	);

	set("banghui","����");
	set("bh_rank","������ʹ");
	set("level",11);
	set("gender", "����");
	set("attitude", "peaceful");
	
	set("age", 42);
	set("shen_type", 1);
	set("str", 30);
	set("int", 30);
	set("con", 30);
	set("dex", 30);

	set("max_kee", 3500);
	set("max_gin", 1500);
	set("force", 3000);
	set("max_force", 3000);
       set("force_factor",90);
      set("combat_exp",800000);
    set("score",20000);

        set_skill("force",190);
        set_skill("sanyang-shengong",190);
         set_skill("dodge",190);
         set_skill("tianlong-bu",190);
	set_skill("unarmed",190);
	set_skill("fengyun-shou", 190);
        set_skill("parry",190);
       set_skill("qiankundanuoyi",100);
	set_skill("literate", 150);


       map_skill("force", "sanyang-shengong");
	map_skill("unarmed", "fengyun-shou");
       map_skill("parry","qiankundanuoyi");
      map_skill("dodge","tianlong-bu");


	set("inquiry", 
	([
//        	"����ʥ����"	: (: ask_me :),
//        	"������"     	: (: ask_ling :)
	]));

	set("chat_chance_combat", 20);
	set("chat_msg_combat", ({
		(: command("perform qianlibingfeng") :),
	}) );

	setup();

        carry_object("/d/mingjiao/obj/baipao")->wear();
}


string ask_ling()
{
	mapping party, skl; 
	string *sname;
	object ob;
	int i;
	
	if ( !(party = this_player()->query("party")) || party["party_name"] != HIG "����" NOR )
		return RANK_D->query_respect(this_player()) + "�뱾��������������֪�˻��Ӻ�̸��";

	skl = this_player()->query_skills();
	sname  = sort_array( keys(skl), (: strcmp :) );

	for(i=0; i<sizeof(skl); i++) 
	{
		if (skl[sname[i]] < 30) 
		return RANK_D->query_respect(this_player()) + 
		"����������������ȡ�����";
	}

	ob = new("d/mingjiao/obj/tieyanling");
	ob->move(this_player());
	message_vision("$NҪ��һ�������\n",this_player());

	return "�ðɣ�ƾ�������������������������ս��";

}

int recognize_apprentice(object ob)
{
        string banghui;
        if(! stringp(banghui=ob->query("banghui")) ||
                banghui!=query("banghui"))
        return notify_fail(query("name")+"ҡͷ�������ҷ��׷ǹʣ�"+
                RANK_D->query_self(this_object())+"��θҵ���\n");
	if(ob->query("score")<2500)
                return notify_fail(query("name")+"�����㻹�Ƕ�Ϊ������Щʵ�°ɡ�
\n");
        return 1;
}

