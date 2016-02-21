// Room: /open/stst/sazai/lu4.c

inherit ROOM;
inherit F_BH;

int jian=5,dao=5,fu=5,tongjia=5,gangjia=5;

void create()
{
	set("short","Ұ��կ�ⷿ");
        set("long", @LONG
	�����Ұ��կ�Ŀⷿ�������ӵĹ��Ӻͼ��ӡ�������������ҳ������
����Щ���������ߣ��������list�鿴һ�¡�������Ұ��կ��ͬһ���Ļ�����
�������ȡ(naqu)һЩ����������������Щ�������������ģ�һ�㶼�޷�������
LONG

        );
        set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"qianting",
]));

        setup();
}
void init()
{
	add_action("do_list","list");
	add_action("do_naqu","naqu");
}

int do_list()
{
	string msg;
	object me;
	me=this_player();
	if(! living(me))	return 0;
	msg="Ŀǰ�ⷿ����������Ʒ������ȡ(naqu)\n";
	msg +="----------------------------------\n";
	if( jian)
	msg +="  ����(jian)             "+chinese_number(jian)+"��\n";
	if( dao)
	msg +="  ����(dao)              "+chinese_number(dao)+"��\n";
	if(fu)
	msg +="  �師(fu)               "+chinese_number(fu)+"��\n";
	if(tongjia)
	msg +="  ͭ��(tongjia)          "+chinese_number(tongjia)+"��\n";
	if(gangjia)
	msg +="  �ּ�(gangjia)          "+chinese_number(gangjia)+"��\n";
	msg +="----------------------------------\n";
	write(msg);
	return 1;
}

int do_naqu(string arg)
{
	object me,sth;
	string banghui;
	object area;
	me=this_player();
	if(! living(me))	return 0;
	if(! arg)	return notify_fail("��Ҫ��ȡʲô��\n");
	area=new("/obj/area");
	area->create("Ұ��կ");
	banghui=(string)area->query("banghui");
	destruct(area);
	if( !(string)me->query("banghui") ||
	(string)me->query("banghui")!=banghui)
		return notify_fail("�����С��޽е����������ⷿ��Ķ�����\n");
	if( me->query_temp("have_naqu"))
		return notify_fail("�����С��޽е���������������Щ�ɣ�����ô̰��\n");
	if(arg=="jian" && jian)	{
		sth=new("/obj/weapon/sword");
		if( me->query_encumbrance() + sth->query_weight()
			> me->query_max_encumbrance())
		return notify_fail("��ѽ��������̫���ˡ�\n");
		jian --;
		sth->move(me);
		message_vision("$N�Ӽ��������˰ѳ�����\n",me);
	}	else if(arg=="dao" && dao)	{
		sth=new("/obj/weapon/blade");
                if( me->query_encumbrance() + sth->query_weight()
                        > me->query_max_encumbrance())
		return notify_fail("��ѵ��������̫���ˡ�\n");
                dao --;
		sth->move(me);
		message_vision("$N�Ӽ��������˰ѵ�����\n",me);
	}	else if(arg=="fu" && fu)	{
		sth=new(__DIR__"npc/obj/banfu");
                if( me->query_encumbrance() + sth->query_weight()
                        > me->query_max_encumbrance())
		return notify_fail("��Ѹ��������̫���ˡ�\n");
                fu --;
		sth->move(me);
		message_vision("$N�Ӽ��������˰Ѱ師��\n",me);
	}	else if(arg=="tongjia" && tongjia) {
		sth=new(__DIR__"npc/obj/tongjia");
                if( me->query_encumbrance() + sth->query_weight()
                        > me->query_max_encumbrance())
		return notify_fail("���ͭ�׶������̫���ˡ�\n");
                tongjia --;
		sth->move(me);
		message_vision("$N�Ӽ��������˼�ͭ�ס�\n",me);
	}	else if(arg=="gangjia" && gangjia) {
		sth=new(__DIR__"npc/obj/gangjia");
                if( me->query_encumbrance() + sth->query_weight()
                        > me->query_max_encumbrance())
		return notify_fail("����ּ׶������̫���ˡ�\n");
                gangjia--;
		sth->move(me);
		message_vision("$N�Ӽ��������˼��ּס�\n",me);
	}	else	return notify_fail("���û������������\n");
	sth->set("no_sell",1);
	me->set_temp("have_naqu",1);
	return 1;
}
