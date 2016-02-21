// guard.c

#include <ansi.h>

inherit NPC;
int do_func();

void create()
{
	set_name("�Ϲ�ͷ",({"gu"}));
	set("title","��ʦ");
	set("gender", "����" );
	set("age",45);
	set("str",30);
	set("cor", 30);
	set("cps", 30);
	set("int",30);
	set("con",30);
	set("long",
		"�����ںڣ�������ո߸��������ǳ��˼��ºݵġ�\n"+
		"�޹���Ҫ�ڲ���������ĭ��ߩ���飬����й�ߡ�\n"
	);
	set("combat_exp",5000);
	set("attitude","hero");
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
		case 0: say("�Ϲ�ͷ���������������...\n"+
			"��������һ���ڣ���æ���ְ�ס��ͣ����ǻ̿֡�\n");
			break;
		case 1: say("�Ϲ�ͷ�����һ���������ӣ���������ǿ����\n"+
			"��һ�����Ĵ��ˣ������������ۣ�Ҳ��֪��ɶ·����\n");
			break;
		case 2: say("�Ϲ�ͷ��Ц�˼�����������һ��ѱ�����ĭ�������С�\n");
			break;
				}
}
