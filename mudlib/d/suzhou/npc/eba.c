// woodcutter.c
#include <ansi.h>
inherit NPC;

void create()
{
	set_name("���",({"eba","e ba"}));
	set("gender","����");
	set("age",40);
	set("bellicosity",500);
	set("nickname",RED"�����ҷ�����"NOR);
	set_temp("apply/damage",40);
	set_temp("apply/armor",50);
	set("long","���ݳ��ڵ���Ǯ���ƵĶ��ˡ�\n");
	set_skill("unarmed",80);
	set_skill("parry",80);
	set_skill("dodge",80);
	set("combat_exp",300000);
	set("mingwang",-100000);
	set("max_force",5000);
	set("str",40);
	setup();
	carry_object("/obj/cloth")->wear();
	add_money("silver",50);
}
void init()
{
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
	add_action("do_hit","hit");
}
int accept_fight(object me)
{
	message_vision(RED"��Գ�$N��Ц����������ң���Ȼ���Ҹ����Ӷ��ֶ��ţ�\n"NOR,me);
	kill_ob(me);
	me->fight_ob(this_object());
	return 1;
}
int do_hit(string str)
{
	object me,npc;
	if(!str)	return 0;
	me=this_player();
	npc=present(str,environment());
	if(npc==this_object())	{
	message_vision(RED"���ŭ�ȵ���"+me->query("name")+"�����͵Ϯ��ү����\n"NOR,me);
	kill_ob(me);
	me->fight_ob(this_object());
	return 1;
	}
	return 0;
}
void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;
	if(ob->query("mingwang")>100000)	{
	command("grin "+ob->query("id"));
	command("say ������Ϊ�ڽ����ϴ���Щ���þ�Ŀ�����ˡ���ү�ҽ���������С�");
	kill_ob(ob);
	ob->fight_ob(this_object());
	}else
	message_vision(CYN"��԰����������죬��ݺݵĵ����㡣\n"NOR,ob);
}
