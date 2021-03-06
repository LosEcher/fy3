// woodcutter.c
#include <ansi.h>
inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/李师师"; }

void create()
{
#include <kzznpc.h>

	set("long","本地著名老艺人的小孙女，弹得一手好琵琶。\n");
	set("area_name","苏州丝竹轩");
	set("area_file","/d/suzhou/sizhuxuan.c");
        set("inquiry", ([
	"弹唱":"只要你付(pay)十两银子，小女子便为你弹唱一曲。",
	"tanchang":"只要你付(pay)十两银子，小女子便为你弹唱一曲。",
        ]) );
	set_temp("apply/attack",10);
	set_temp("apply/defense",10);
	set("per",50);
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
	add_action("do_pay","pay");
}

void greeting(object ob)
{

	if( !ob || environment(ob) != environment() ) return;
	if(ob->query("bellicosity")>100)	{
		message_vision(CYN"李师师站起身来对$N说道："+RANK_D->query_respect(ob)+"，不如听我弹唱一曲以解心头烦闷？\n"NOR,ob);
		return;
	}
	message_vision(CYN"李师师用手轻拨琵琶，只听得“叮咚”一声响。\n"NOR,ob);
	return;
}

int do_pay(string str)
{
	object me=this_player();
	string banghui;

	if(! str)	return 0;
	if(str!="li shishi")	return 0;
	banghui=(string)me->query("banghui");
	if(banghui && banghui==(string)query("banghui"))	{
		write("李师师道：即是同帮兄弟，小女子哪会收您的钱呢。\n");
		write("说罢李师师拿起琵琶为你弹唱了一曲。\n");
		write("你只觉浑身适宜，心中说不出的舒畅。\n");
		if((int)me->query("bellicosity")<=100)
			me->set("bellicosity",0);
		else	me->add("bellicosity",-100);
		write("你的杀气下降了一百点！\n");
	}
	else	{
	if(! me->pay_money(1000))
	{	write("李师师叹道：你连十两银子都没有吗？\n");
		return 1;
	}
	write("你从怀中掏出十两纹银交给李师师。\n");
	write("李师师道：即是如此，小女子便为您弹唱一曲。\n");
	write("说罢李师师拿起琵琶为你弹唱了一曲。\n");
	write("你只觉浑身适宜，心中说不出的舒畅。\n");
	if((int)me->query("bellicosity")<=100)
		me->set("bellicosity",0);
	else    me->add("bellicosity",-100);
	write("你的杀气下降了一百点！\n");
	"/cmds/adm/ctom.c"->save_money(this_object(),100);
	}
	return 1;
}

