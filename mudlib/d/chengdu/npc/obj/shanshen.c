// shanshen.c ��ɽ��

inherit ITEM;

void setup()
{}

void init()
{
	add_action("do_eat", "eat");
}

void create()
{
	set_name("��ɽ��", ({"laoshan shen", "shen"}));
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "����һ��մ��ɽ��ĳ�����ɽ����\n");
		set("value", 10000);
	}
	setup();
}

int do_eat(string arg)
{
	if( !living(this_player()))	return 0;

	if (!id(arg))
	return notify_fail("��Ҫ��ʲô��\n");

	this_player()->receive_curing("kee",200);
	this_player()->receive_heal("kee",200);

	message_vision("$N����һ����ɽ����ֻ���û���һ����������ð������ !\n", this_player());
	destruct(this_object());
	return 1;
}


