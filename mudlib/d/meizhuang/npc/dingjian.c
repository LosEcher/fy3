// woodcutter.c
#include <ansi.h>
inherit NPC;
int do_ask();
void create()
{
	set_name("����",({"dingjian","ding jian","ding"}));
	set("gender", "����" );
	set("age",55);
	set("long","�����𽭺������������ڴ˵����ߡ�\n");
	set("nickname","һ�ֵ罣");
	set("combat_exp",300000);
	set("str", 30);
	set("mingwang",-1);
	set_skill("unarmed",50);
	set_skill("dodge",50);
	set_skill("parry",50);
	set_skill("sword",50);
	set("max_force",1000);
	set("chat_chance",2);
	set("chat_msg",({
		"��ৡ���һ����ֻ���������г�������һ�������Ĺ�â��\n",
		"ֻ�������������Ե�����ׯ����������Ҳ��������ʲô����\n",
		"������Ǳߺ�Ȼ����һ˿"+YEL"��Ц"NOR+"��\n",
	}));
	set("force",1000);
	set_skill("xuantian-bu",50);
	set_skill("xuantian-quan",50);
	set_skill("qixianwuxing-jian",50);
	set("inquiry",([
		"��ׯ��":	(: do_ask :),
		"��Ц":		"��ô�����а������ӻ����Ц�أ��ܵ�����\n",
	]));
	map_skill("unarmed","xuantian-quan");
	map_skill("dodge","xuantian-bu");
	map_skill("sword","qixianwuxing-jian");
	map_skill("parry","qixianwuxing-jian");
	setup();
	carry_object(__DIR__"obj/qingyi")->wear();
	carry_object("/obj/weapon/sword")->wield();
	add_money("silver",50);
}
int do_ask()
{
	object me;
	string something;
	 something="��ǰ���췢�ֶ�ׯ���ô�ׯ�����ڣ�͵͵�������ȥ�ˣ�Ҳ��֪��ɶ��";
	me=this_player();
	if(me->query("family/family_name")!="��ɽ÷ׯ")	{
		command("say ��������÷ׯ���£�"+RANK_D->query_respect(me)+"�����ٲ�����İɡ�\n");
		return 1;
	}
	message_vision("����ͻȻ��������Ķ���$N�����˼��䡣\n",me);
	tell_object(me,"�������˵����"+something+"\n");
	me->set_temp("oldsix_flag/ask",1);
	return 1;
}
