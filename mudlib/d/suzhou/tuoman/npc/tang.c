// guard.c

#include <ansi.h>

inherit NPC;

void create()
{
	set_name("�ƹ���",({"tang guangxong","tang","guangxong"}));
	set("title","�������ɵ���");
	set("gender", "����" );
	set("age",20);
	set("str",30);
	set("cor", 30);
	set("cps", 30);
	set("int",30);
	set("con",30);
	set("long",
		"������׽���Ĵ����ˣ���Ҫ�����������\n"+
		"˫�ָ������ˣ���ͷɥ����\n"+
		"�㿼����һ�£�����Ҫ��Ҫ����(jiu)��\n"
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
	add_action("do_kill","kill");
	add_action("do_kill","hit");
	add_action("do_jiu","jiu");
}
int do_jiu()
{
	object me;
	me=this_player();
	message_vision(CYN"$N����ǰȥ����������ƹ��۾��˳�����\n"NOR,me);
	message_vision(CYN"�ƹ��ۼ�Ц����˵������л"+RANK_D->query_respect(me)+
	"����֮����\n"+"��ݶ���ֻ�������ٱ�����\n˵�գ��ƹ��۽ŵ�Ĩ��һ���̵Ĳ����ˡ�\n"NOR,me);
	message_vision(RED"\n\n��ʱ¥�г�����ˣ�����$N���һ����\n"NOR,me);
	call_out("kill_me",1,me);
	return 1;
}
void kill_me(object me)
{
	object ob;
	ob=new(__DIR__"xiaocui.c");
	ob->move(environment());
	ob->kill_ob(me);
	ob=new(__DIR__"xiaolan.c");
	ob->move(environment());
	ob->kill_ob(me);
	destruct(this_object());
}
int do_kill(string str)
{
	object me,npc;
	me=this_player();
	npc=present(str,environment());
	if(npc==this_object())	{
	message_vision(CYN"�ƹ��۶�$Nŭ������������ӻ���ô����������\n"NOR,me);
		return 1;
			}
	return 0;
}
void greeting(object ob)
{
 	if( !ob || environment(ob) != environment() ) return;
	message_vision(CYN"�ƹ��ۿ�ɥ����˵������λ"+RANK_D->query_respect(ob)+
	"����ֵ���һ�ѡ�\n"NOR,ob);
}
int accept_fight(object me)
{
	message_vision(CYN"�ƹ��۶�$Nŭ������������ӻ���ô����������\n"NOR,me);
	return 0;
}
