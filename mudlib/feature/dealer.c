// dealer.c ����
// This is a inheritable object.
// Each dealer should support buy, sell, list, value 4 commands

#include <dbase.h>

string is_vendor_good(string arg)
{
	string *goods;
	object ob;
	int i;

	if (arrayp(goods = query("vendor_goods"))) 
		for (i = 0; i < sizeof(goods); i++) 
			if (goods[i]->id(arg))
				return goods[i];
	return "";
}

int do_value(string arg)
{
	object ob;
	int value;

	if (!arg || !(ob = present(arg, this_player())))
		return notify_fail("��Ҫ��ʲô�ļۣ�\n");
	
	if (ob->query("money_id"))
		return notify_fail("��û�ù�Ǯ����\n");

	value = ob->query("value");
	if (value < 1)
		write(ob->query("name") + "һ�Ĳ�ֵ��\n");
	else 
		write(ob->query("name") + "ֵ" + 
		MONEY_D->price_str(value * 70 / 100) + "��\n");
	return 1;
}

int do_sell(string arg)
{
	object ob,room,*inv;
	int value,i;
	
	if( this_player()->is_busy())
		return notify_fail("����æ���أ�\n");

	if (!arg || !(ob = present(arg, this_player())))
		return notify_fail("��Ҫ��ʲô��\n");

	if (ob->query("money_id"))
		return notify_fail("��������Ǯ������\n");

	if (stringp(ob->query("no_drop")))
		return notify_fail("����������������\n");
	if ( (int)ob->query("no_sell"))
		return notify_fail("����������������\n");

	if (is_vendor_good(arg) != "") 
		return notify_fail("������ò��ã�\n");

	if (ob->query("food_supply"))
		return notify_fail("ʣ��ʣ���������Լ��ðɡ�\n");
	
        if (ob->query("shaolin"))
                return notify_fail("С��ֻ��һ���Դ����ɲ��������������\n");
	
	value = ob->query("value");
	if (value>20000) return notify_fail("̫���ˣ������𰡡�\n");
	room=find_object("/obj/dangroom");
	if( !objectp(room))	room=load_object("/obj/dangroom");

	if (value < 30)
		write(ob->query("name") + "һ�Ĳ�ֵ��\n");
	else if((int)ob->query("oldsix/damage"))
		write("�Ȱ�"+ob->query("name")+"��ȥ���ްɡ�\n");
	else {
		this_player()->start_busy(2);
		inv=all_inventory(room);
		for(i=0;i<sizeof(inv);i++)		{
			if( base_name(inv[i])!=base_name(ob))	continue;
			inv[i]->add("oldsix/mount",1);
			ob->set("be_dest",1);
			break;
		}
		if( !ob->query("be_dest"))	{
			if( !ob->move(room))
				return notify_fail("�Բ��𣬱������װ�����ˡ�\n");
			ob->set("oldsix/mount",1);
		}

		message_vision("$N������һ" + ob->query("unit") + 
		ob->query("name") + "��$n��\n", this_player(), this_object());
		MONEY_D->pay_player(this_player(), value * 50 / 100);
//		if (value < 50)
//			destruct(ob);
		if( ob->query("be_dest"))
			destruct(ob);
	}
	return 1;
}

int do_list()
{
	string *goods;
	object *inv,room;
	int i;

	room=find_object("/obj/dangroom");
	if( !objectp(room))	room=load_object("/obj/dangroom");

	inv = all_inventory(room);

	if (!sizeof(inv))
		return notify_fail("Ŀǰû�п������Ķ�����\n");
	
	printf("�������%s����������Ʒ��\n", query("name"));
	for (i = 0; i < sizeof(inv); i++) 
		if (!inv[i]->query("equipped") && !inv[i]->query("money_id"))
		printf("%30-s��%30-s��%10s\n", inv[i]->short(),
		MONEY_D->price_str(inv[i]->query("value") * 6 / 5),
		inv[i]->query("oldsix/mount")+inv[i]->query("unit"));
	return 1;
}	

int do_buy(string arg)
{
	int value, val_factor;
	string ob_file;
	object ob,room;
	
	if( this_player()->is_busy())
		return notify_fail("����æ���أ�\n");
	room=find_object("/obj/dangroom");
	if( !objectp(room))	room=load_object("/obj/dangroom");

	if (!arg)
		return notify_fail("������ʲô�� 1\n");
	else if (!(ob = present(arg, room)))
			return notify_fail("������ʲô�� 2\n");

	val_factor = 12;

	this_player()->start_busy(2);
	
	switch (MONEY_D->player_pay(this_player(), ob->query("value") *  val_factor / 10)) {
	case 0:
		return notify_fail("��⵰��һ�ߴ���ȥ��\n");
	case 2:
		return notify_fail("������Ǯ�����ˣ���Ʊ��û���ҵÿ���\n");
	default:
		message_vision("$N��$n����������һ" + ob->query("unit") + 
		ob->query("name") + "��\n", this_player(), this_object());
		if( ob->query("oldsix/mount")<=1)	
			ob->delete("oldsix/mount");
		else	{
			ob->add("oldsix/mount",-1);
			ob=new(base_name(ob));
		}
		ob->move(this_player());
	}

	return 1;
}

void enough_rest()
{
        delete_temp("busy");
}


