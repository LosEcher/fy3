// guard.c

#include <ansi.h>

inherit NPC;

void create()
{
	set_name("�Ϲ�ͷ",({"lao gutou","lao","gutou"}));
	set("title","��ʦ");
	set("gender", "����" );
	set("age",45);
	set("str",30);
	set("cor", 30);
	set("mingwang",1);
	set("cps", 30);
	set("int",30);
	set("con",30);
	set("long",
		"�����ںڣ�������ո߸��������ǳ��˼��ºݵġ�\n"+
		"�޹���Ҫ�ڲ���������ĭ��ߩ���飬����й�ߡ�\n"
	);
	set("combat_exp",5000);
	set("attitude","hero");
	set_temp("apply/defense",20);
	set_temp("apply/attack",20);
	set_skill("parry",20);
	set_skill("dodge",20);
	set_skill("unarmed",20);
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
	switch(random(3))	{
	case 0: say(CYN"�Ϲ�ͷ���������������...\n"+
		"��������һ���ڣ���æ���ְ�ס��ͣ����ǻ̿֡�\n"NOR);
			break;
	case 1: say(CYN"�Ϲ�ͷ�����һ���������ӣ���������ǿ����\n"+
		"��һ�����Ĵ��ˣ������������ۣ�Ҳ��֪��ɶ·����\n"NOR);
			break;
	case 2: say(CYN"�Ϲ�ͷ��Ц�˼�����������һ��ѱ�����ĭ�������С�\n"NOR);
			break;
				}
}
