// shouwu.c ������

inherit ITEM;

void setup()
{}

void init()
{
	add_action("do_eat", "eat");
}

void create()
{
	set_name("������", ({"heshou wu", "wu"}));
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "����һ�ó������εĺ����ڡ�\n");
		set("value", 500000);
	}
	setup();
}

int do_eat(string arg)
{
	if( !living(this_player()))	return 0;

	if (!id(arg))
	return notify_fail("��Ҫ��ʲô��\n");

	if((int)this_player()->query("max_force")<=800)
	this_player()->add("max_force", 1);
	message_vision("$N����һ�ú����ڣ���ʱ�����ȫ������˻��� !\n", this_player());
	destruct(this_object());
	return 1;
}

