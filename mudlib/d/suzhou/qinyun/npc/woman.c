// guard.c

#include <ansi.h>

inherit NPC;
int do_change();

void create()
{
	set_name("�Ϸ���",({"lao furen","lao","furen"}));
	set("gender","Ů��");
	set("age",60);
	set("str",50);
	set("cor", 30);
	set("mingwang",1);
	set("cps", 30);
	set("int",30);
	set("con",50);
	set("per",25);
	set("no_get",1);
	set("long",
	"Ľ�ݲ�����ĸ�������������࣬�۾������������ƺ����Ʋ���������
ֻ�����ϴ���һ�󵭵������㣬���˾��ú�����֡�\n"
	);
	set("combat_exp",40000);
	set("attitude","friendly");
	set("chat_chance_combat", 15);
	set("chat_msg_combat", ({
	"�Ϸ���̾���������������թ����̫���ˡ�\n",
	"�Ϸ���ŭ����Ľ�ݼҾ���ô���۸�����\n",
	}) );
	set("inquiry", ([
	"����" : (: do_change :),
	"a zhu" : (: do_change :),
		"����":"�����Ҳ�̫�����������\n"
			+NOR"�⸱����ȫȻ����Ů��ģ��������ԲԲ���۾���\n"
			+"�ںڵ����������һת���漴�ִ�����Ƥ��\n",
		"zhuozi":"�����Ҳ�̫�����������\n"
			+NOR"�⸱����ȫȻ����Ů��ģ��������ԲԲ���۾���\n"
			+"�ںڵ����������һת���漴�ִ�����Ƥ��\n",
	]) );
	set_skill("dodge",50);
	set_skill("unarmed",50);
	set_temp("apply/defense",40);
	set_temp("apply/attack",40);
	setup();
	carry_object("/obj/cloth")->wear();
}
int do_change()
{
	object ob;
	ob=this_player();
	if(present("a zhu",environment()))	{
		tell_object(ob,"�Ա�վ�ŵĲ�������\n");
		return 1;
	}
	message_vision("�Ϸ��˶���$N��Ц��һ����\n"
			+"˵����û�뵽������������˳�����\n"
			+"˵��ֻ���Ϸ���˫��������һĨ��\n"
			+"��ͺ���۶ѳɵ��������Ʒ׷׵��䡣\n"
			+"һ����̫̫ͻȻ�����һ����������Ů��\n"
			+"��ʱ��$N����Ŀ�ɿڴ���\n",ob);
	ob=new(__DIR__"azhu.c");
	ob->move(environment(this_player()));
	destruct(this_object());
return 1;
}
