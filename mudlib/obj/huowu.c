#include <ansi.h>

inherit ITEM;
void create()
{
	set_name("����",({"huo wu","huowu"}));
	set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
		set("unit","��");
		set("long","����һ��������͵�ָ���ص�Ļ��\n����Ŀ�ĵغ���ʹ�ý���(jiaohuo)ָ��Ա���ɽ�����\n");
	}
	setup();
}

void init()
{
	add_action("do_jiaohuo","jiaohuo");
}

int do_jiaohuo()
{
	object room;
	object me;
	me=this_player();
	if(!living(me))	return 0;
	if( environment()!=me)	return 0;
	if(undefinedp(me->query("oldsix_quest")))
		return notify_fail("�㲢û����ȡ�κ�����\n");
	if(me->query("oldsix_quest/type")!=3)
		return notify_fail("�㲢û����ȡ�ͻ�������\n");
	if(! (int)query("start"))
		return notify_fail("�����ϴ�����������Ѿ�ʧЧ��\n");
	if(me->query("oldsix_quest/start")!=query("start"))
		return notify_fail("������͵Ĳ���������\n");
	room=environment(me);
	if(base_name(room)==me->query("oldsix_quest/id")
	&& room->query("short")==me->query("oldsix_quest/name"))       {
		me->set("oldsix_quest/over",1);
		write("����ͻ������Ѿ���ɣ����ȥ����ɡ�\n");
		destruct(this_object());
		return 1;
	}
	else	{
		return notify_fail("������ﲻ���͵�������ģ�\n");
	}
}

	
	

