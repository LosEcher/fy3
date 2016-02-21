// hockshop.c

inherit ROOM;

static object storage;

void remove()
{
        if( storage ) destruct(storage);
}

void setup()
{
        seteuid(getuid());
/*        if( !storage ) {*/
                storage = new(__DIR__"hockshop_storage");
                storage->set("shop_ob", this_object());
/*        }*/ 
}

void init()
{
        add_action("do_value", "value");
/*        add_action("do_pawn", "pawn");*/
        add_action("do_sell", "sell");
/*        add_action("do_retrieve", "retrieve");*/
        add_action("do_list", "list");
        add_action("do_buy", "buy");
}

string value_string(int value)
{
        if( value < 1 ) value = 1;
        else if( value < 100 )
                return chinese_number(value) + "��Ǯ";
        else
                return chinese_number(value/100) + "��"
                        + (value%100? "��" + chinese_number(value%100) + "��Ǯ": "");
}

void pay_player(object who, int amount)
{
        object ob;

        if( amount < 1 ) amount = 1;
/*        if( amount/1000000 ) {
                ob = new(TECASH_OB);
                ob->set_amount(amount/1000000);
                ob->move(who);
                amount %= 1000000;
        }
*/
        if( amount/100000 ) {
                ob = new(THCASH_OB);
                ob->set_amount(amount/100000);
                ob->move(who);
                amount %= 100000;
        }
        if( amount/10000 ) {
                ob = new(GOLD_OB);
                ob->set_amount(amount/10000);
                ob->move(who);
                amount %= 10000;
        }
        if( amount/100 ) {
                ob = new(SILVER_OB);
                ob->set_amount(amount/100);
                ob->move(who);
                amount %= 100;
        }
        if( amount ) {
                ob = new(COIN_OB);
                ob->set_amount(amount);
                ob->move(who);
        }
}

int do_value(string arg)
{
        object ob;
        int value;

        if( !arg || !(ob = present(arg, this_player())) )
                return notify_fail("��Ҫ��ʲ����Ʒ�����̹��ۣ�\n");

        if( ob->query("money_id") )
                return notify_fail("���ǡ�Ǯ������û������\n");

        value = ob->query("value");
        if( !value ) printf("%sһ�Ĳ�ֵ��\n", ob->query("name"));
        else 
/*                printf("%s��ֵ%s��\n�����Ҫ�䵱(pawn)�������õ�%s��һ�ŵ�Ʊ��\n�������(sell)�������õ�%s��\n",*/
/*                        ob->query("name"), value_string(value),*/
/*                        value_string(value * 60 / 100), value_string(value * 80 / 100));*/
                printf("%s��ֵ%s��\n�������(sell)�������õ�%s��\n",
                        ob->query("name"), value_string(value),
                        value_string(value * 80 / 100));

        return 1;
}

int do_pawn(string arg)
{
        object ob, stamp;
        int value;

        if( !arg || !(ob = present(arg, this_player())) )
                return notify_fail("��Ҫ�䵱ʲ����Ʒ��\n");

        if( ob->query("money_id") )     return notify_fail("��Ҫ����Ǯ����\n");

        value = ob->query("value");
        if( !value ) return notify_fail("����������ֵǮ��\n");

        if (ob->query("no_sell")) return notify_fail("�����������ܵ䵱��\n");

        message_vision("$N�����ϵ�" + ob->query("name") + "�ó����䵱��"
                + value_string(value * 60 / 100) + "������һ�ŵ�Ʊ��\n", this_player());

        pay_player(this_player(), value * 60 / 100);
        ob->move(storage);
        stamp = new("/obj/pawn_stamp");
        stamp->set("pawned_item", ob);
        stamp->set("long", "���յ�\n    " + this_player()->name(1)
                + "�䵱" + ob->name() + "��" + ob->query("unit")
                + "��������ȱ�𲻿���\n    ���Ӧ��" + value_string(value * 120/100)
                + "����һ�ֽ�Ǯ��һ�ֽ�����\n");
        stamp->move(this_player());

        return 1;
}

int do_sell(string arg)
{
        object ob;
        int value;

        if( !arg || !(ob = present(arg, this_player())) )
                return notify_fail("��Ҫ����ʲ����Ʒ��\n");

        if( ob->query("money_id") )     return notify_fail("��Ҫ����Ǯ����\n");
        value = ob->query("value");
        if( !value ) return notify_fail("����������ֵǮ��\n");

        if (ob->query("no_sell")) return notify_fail("����������������\n");

        message_vision("$N�����ϵ�" + ob->query("name") + "������\n",
                this_player());

        pay_player(this_player(), value * 80 / 100);

	ob->add("pawned_time", 1);
	ob->move(storage);
/*
        if( storage ) {
                int s;

                // Make a simple storage management, when we have more goods in
                // storage, only keeps higher price goods.
                s = sizeof(all_inventory(storage));
                if( value >= (s / 20) * 1000 ) {
                        ob->add("pawned_time", 1);
                        ob->move(storage);
                }
                else destruct(ob);
        }
        else destruct(ob);
*/
        return 1;
}

int do_retrieve(string arg)
{
        object stamp, ob;
        int value;

        if( !arg || arg=="" || !(stamp = present(arg, this_player())) )
                return notify_fail("��Ҫ�����һ�ŵ�Ʊ�ϵĵ��\n");

        if( !stamp->id("pawn stamp") )
                return notify_fail("�ⲻ�ǵ�Ʊ��\n");

        if( !(ob = stamp->query("pawned_item")) ) {
                write("���ŵ�Ʊ�ϵĵ�����Ϊ��̫��û�����꣬�Ѿ������������ˡ�\n");
                write("�����ֽ���Ʊ˺�����ˡ�\n");
                destruct(stamp);
                return 1;
        }

        if( !present(ob, storage) )
                return notify_fail("�ⲻ����ҵ��̿����ĵ�Ʊ��\n");

        value = (int)ob->query("value") * 120 / 100;
        if( (int)this_player()->can_afford(value) != 1 )
                return notify_fail("�����ϵ�(��)Ǯ������\n");

        message_vision("$Nȡ����Ʊ������" + value_string(value) + "�����"
                + ob->name() + "��\n", this_player());

        this_player()->pay_money(value);
        ob->move(this_player());
        ob->delete("pawned_time");
        destruct(stamp);

        return 1;
}

int do_list(string arg)
{
        object *inv;
        string msg;

        if( !storage ) return notify_fail("����������û�л��\n");
        inv = filter_array( all_inventory(storage), (: $1->query("pawned_time") :));
        if( !sizeof(inv) ) return notify_fail("����������û�л��\n");

        msg = "���������������»��\n";
	msg +=  "-----------------------------------------------------------------------------\n  ";
        msg += implode( map_array(inv, (: sprintf("%-50s%s", $1->short(),
                value_string((int)$1->query("value") * 2)) :)), "\n  ");
        msg += "\n";
	write(msg);
/*        this_player()->start_more(msg);*/

/*        msg = "���������������»��\n  ";
        msg += implode( map_array(inv, (: sprintf("%-30s%s", $1->short(),
                value_string((int)$1->query("value") * 2)) :)), "\n  ");
        msg += "\n";
        this_player()->start_more(msg);
*/
        return 1;
}

int do_buy(string arg)
{
        int index;
        object *inv, ob;

        if( !arg ) return notify_fail("��Ҫ��ʲ�ᶫ����\n");

        if( !storage ) return notify_fail("����������û�л��\n");
        inv = filter_array( all_inventory(storage), (: $1->query("pawned_time") :));
        if( !sizeof(inv) ) return notify_fail("����������û�л��\n  ");

// This is a crasher! Dunno why .... Annihilator(11/01/95)
//      if( !parse_command(arg, inv, "%o", ob) )
//              return notify_fail("��Ҫ��ʲ�ᶫ����\n");

        if( sscanf(arg, "%s %d", arg, index) != 2 ) index = 1;
        index--;
        for(int i=0; i<sizeof(inv); i++)
                if( inv[i]->id(arg) && !(index--)) break;

        if( i==sizeof(inv) )
                return notify_fail("��Ҫ��ʲ�ᶫ����\n");
        ob = inv[i];

        if( (int)this_player()->can_afford((int)ob->query("value") * 2) != 1 )
                return notify_fail("���(��)Ǯ������\n");
        message_vision("$N�ͳ�Ǯ����һ" + ob->query("unit") + ob->name() + "��\n",
                this_player() );
        this_player()->pay_money((int)ob->query("value") * 2);
        ob->delete("pawned_time");
        ob->move(this_player());

        return 1;
}

