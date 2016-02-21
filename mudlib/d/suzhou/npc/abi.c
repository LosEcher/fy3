// guard.c

#include <ansi.h>

inherit NPC;


void create()
{
	set_name("����",({"a bi","bi","a"}));
	set("gender","Ů��");
	set("age",16);
	set("str",50);
	set("cor", 30);
	set("mingwang",1);
	set("cps", 30);
	set("int",30);
	set("con",50);
	set("per",30);
	set("long",
	"Ľ�ݸ���СѾ���������������ᣬ������������\n"
	);
	set("no_get",1);
	set("combat_exp",25000);
	set_temp("apply/attack",40);
	set_temp("apply/defense",40);
	set_temp("apply/damage",20);
	set_skill("unarmed",70);
	set_skill("dodge",70);
	set("attitude","friendly");
	set("chat_chance_combat", 15);
	set("chat_msg_combat", ({
	"������ü��������ʲô�ط��������㣿�������ԡ�\n",
	"����ŭ����Ľ�ݼҵ�Ѿ�����Ǻ��ǵģ�\n",
	}) );
	set("inquiry", ([
	"Ľ�ݸ�":"��δ���������գ�Ľ�ݹ��Ӹո�ǰ�ճ����š�\n"
		+"          ����������ĩ��������Ź����ա�\n",
	"������" : "����ȥ����������С��������ˮ·��\n"
		+"          ����Ҫȥ����ĩ���ϴ�(boat)���һ������ͣ��÷���\n",
		"�κ�ׯ":"�κ�ׯ�����֣������������ã����ɶ�ط�������\n\n",
	]) );
	setup();
	carry_object("/obj/cloth")->wear();
}
void init()
{
	::init();
	add_action("do_boat","boat");
}
int do_boat()
{
	object me;
	me=this_player();
      if( living(this_player()) ==0 ) return 0;
	message_vision(CYN"$N����Ծ��С�ۡ���С��ֻ�Գ�����\n"
		+"���̶���$N˵����������������\n"
		+"�԰գ�ľ��һ�⣬С�۱�������ȥ��\n"NOR,me);
	me->move("/d/suzhou/qinyun/taihu1.c");
	destruct(this_object());
	return 1;
}
