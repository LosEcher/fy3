// baiyunwan.c �����ܵ���

inherit ITEM;

void setup()
{}

void init()
{
	add_action("do_eat", "eat");
}

void create()
{
	set_name("�����ܵ���",({"baiyun wan","wan"}));
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "����һ��������ʿ�������������ʥҩ��\n");
		set("value",100000);
	}
	setup();
}

int do_eat(string arg)
{
	if( !living(this_player()))	return 0;
	if (!id(arg))
		return notify_fail("��Ҫ��ʲô��\n");
	this_player()->receive_curing("kee",1000);
	this_player()->receive_curing("gin",1000);
	this_player()->receive_curing("sen",1000);
	this_player()->receive_heal("kee",1000);
	this_player()->receive_heal("gin",1000);
	this_player()->receive_heal("sen",1000);
	message_vision("$N����һ�Ű����ܵ��裬ֻ��������������ɫ��á�\n", this_player());
	destruct(this_object());
	return 1;
	
}

