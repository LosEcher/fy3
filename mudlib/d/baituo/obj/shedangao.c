// shedangao.c
inherit ITEM;
void init()
{
	add_action("do_eat", "eat");
}

void create()
{
	set_name("�ߵ���", ({"shedan gao", "gao"}));
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "�������Ʒ���ߵ��ࡻ��\n");
		set("value", 100);
	}
	setup();
}

int do_eat(string arg)
{
	object me = this_player();
	if( !living(me))	return 0;
	if (!id(arg))
		return notify_fail("��Ҫ��ʲô��\n");
	if((me->query("max_atman")>=110)||(me->query("max_force")>=200)
	|| (me->query("max_mana")>=110))
		return notify_fail("��ԡ��ߵ��ࡻ����Ч�ã�\n");
	me->add("max_atman",2);
	me->add("max_force",5);
	me->add("max_mana",2);
	message_vision( "$N����һ���ߵ��࣬�پ�һ�ɺƵ�����ֱӿ������
	���������...\n" , me);
	destruct(this_object());
	return 1;
}