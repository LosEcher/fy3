// music yangzhou's �˲�

#include <ansi.h>

inherit ITEM;

void create(int many)
{
	string name;

	if(! many)	name="���õ�ҩ";
	else if(many<=100)		name="С����";
	else if(many<=250)	name=GRN"�󻹵�"NOR;
	else if(many<=500)	name=HIC"��ת��"NOR;
	else if(many>500)	name=YEL"��ת��"NOR;
	set_name(name,({"danyao","dan"}));
	set("long","���ǿž������������Ƶĵ�ҩ��\n");
        set("unit", "��");
        set("weight", 50);
	set("add",(int)many);
}

void init()
{
        add_action("do_eat", "eat");
}

int do_eat(string arg)
{
        object ob;
	int add;

	add=(int)query("add");
	ob=this_player();
	if(!living(ob))	return 0;
	if( !id(arg) ) return notify_fail("��Ҫ��ʲ�᣿\n");
	ob->receive_curing("gin",add);
	ob->receive_heal("gin",add);
	ob->receive_curing("kee",add);
	ob->receive_heal("kee",add);
	ob->receive_curing("sen",add);
	ob->receive_heal("sen",add);

	message_vision("$N������һ��"+query("name")+"��������һ�������о��ö��ˡ�\n",ob);
        destruct(this_object());
        return 1;
}
