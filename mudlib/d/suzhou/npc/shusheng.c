//music yangzhou' ����

#include <ansi.h>
inherit NPC;

void create()
{
	set_name("����", ({ "shusheng","shu sheng", "sheng" }) );
	set("gender", "����" );
	set("age", 26);
	set("int", 28);
        set("combat_exp",200);
	set("long",
		"�Ǹ��ÿ����У�ȴ����������������������\n");

	set("attitude", "peaceful");
	set_skill("literate", 40);
        set_skill("parry",20);
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
	if(random(ob->query_kar())/2>15)	{
	tell_object(ob,CYN"��������˵�����������ʵΪ��Ե���Ȿ̫������ͼ�͸���ɡ�\n"NOR);
	new(__DIR__"obj/taihutu")->move(ob);
	}
}
