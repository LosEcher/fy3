//fen.c
inherit ITEM;
void init()
{
	add_action("do_eat", "eat");
	add_action("do_eat", "use");
}

void create()
{
	set_name("�ߵ���", ({ "fen"}));
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "�������˵ġ��ߵ��ۡ���\n");
		set("value", 2000);
	}
	setup();
}

int do_eat(string arg)
{
	object me = this_player();
	if( !living(me))	return 0;
	if (!arg||arg!="fen")
		return notify_fail("��Ҫ��ʲô��\n");
	if ((int)me->query("eff_kee") >=
		(int)me->query("max_kee"))
		return notify_fail("�����ڲ���Ҫ�ý�ҩ��\n");
	if(random(2)==0)
	 {message_vision( "$N����һ���ߵ��ۣ��������������ۣ������ϵ�����\n" , me);
	  destruct(this_object());
	  return 1;
	 }
	me->receive_curing("kee",20);
	me->receive_heal("kee",30);
	message_vision( "$N����һ���ߵ��ۣ��پ�������ӿ���������Щ��\n" , me);
	destruct(this_object());
	return 1;
}
