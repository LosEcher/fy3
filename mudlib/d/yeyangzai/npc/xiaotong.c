#include <ansi.h>
inherit NPC;

void create()
{
	set_name("Сͯ",({"xiao tong","xiao"}));
	set("area","Ұ��կ");
	set("long","ר���̺���˯����С�к���\n");
	set("age",25);
        setup();
	carry_object("/obj/cloth.c")->wear();
}
	
void init()
{
        object ob,area;
        area=new("/obj/area");
        area->create(query("area"));
        set("banghui",(string)area->query("banghui"));
        destruct(area);
        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
	add_action("do_sleep","sleep");
}


int do_sleep()
{
	object me;
	string bh;
	me=this_player();
	if(! living(me))	return 0;
	bh=(string)me->query("banghui");
	if( !bh || bh!=query("banghui"))	{
		command("say ���ֻ�Ӵ������ֵܡ�");
		return 1;
	}
	return 0;
}



