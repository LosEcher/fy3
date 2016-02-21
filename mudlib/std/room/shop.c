inherit ROOM;

void init()
{
        add_action("do_value", "value");
        add_action("do_pawn", "pawn");
        add_action("do_sell", "sell");
        add_action("do_convert", "convert");
        add_action("do_deposit", "deposit");

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
//        if( amount/1000000 ) {
//                ob = new(TECASH_OB);
//                ob->set_amount(amount/1000000);
//                ob->move(who);
//                amount %= 1000000;
//        }
//        if( amount/100000 ) {
//                ob = new(THCASH_OB);
//                ob->set_amount(amount/100000);
//                ob->move(who);
//                amount %= 100000;
//        }
//        if( amount/10000 ) {
//                ob = new(GOLD_OB);
//                ob->set_amount(amount/10000);
//                ob->move(who);
//                amount %= 10000;
//        }
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
                printf("%s��ֵ%s��\n�����Ҫ�䵱(pawn)�������õ�%s��һ�ŵ�Ʊ��\n�������(sell)�������õ�%s��\n",
                        ob->query("name"), value_string(value),
                        value_string(value * 60 / 100), value_string(value * 80 / 100));

        return 1;
}

int do_pawn(string arg)
{
        object ob;
        int value;

        if( !arg || !(ob = present(arg, this_player())) )
                return notify_fail("��Ҫ�䵱ʲ����Ʒ��\n");

        if( ob->query("money_id") )     return notify_fail("��Ҫ����Ǯ����\n");

        value = ob->query("value");
        if( !value ) return notify_fail("����������ֵǮ��\n");

        message_vision("$N�����ϵ�" + ob->query("name") + "�ó����䵱��"
                + value_string(value * 60 / 100) + "��\n", this_player());

        pay_player(this_player(), value / 100 * 60);
        destruct(ob);

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


        message_vision("$N�����ϵ�" + ob->query("name") + "������\n",
                this_player());

        pay_player(this_player(), value / 100 * 80);
        destruct(ob);

        return 1;
}



int do_convert(string arg)
{
        string from, to;
        int amount, bv1, bv2;
        object from_ob, to_ob;

        if( !arg || sscanf(arg, "%d %s to %s", amount, from, to)!=3 )
                return notify_fail("ָ���ʽ��convert <����> <��������> to <��������>\n");

        from_ob = present(from + "_money", this_player());
        to_ob = present(to + "_money", this_player());
        if( !to_ob && file_size("/obj/money/" + to + ".c") < 0 )
                return notify_fail("����һ���һ��Ǯ��\n");

        if( !from_ob )          return notify_fail("������û�����ֻ��ҡ�\n");
        if( amount < 1 )        return notify_fail("�һ�����һ������Ҫ�һ�һ����\n");

        if( (int)from_ob->query_amount() < amount )
                return notify_fail("������û�������" + from_ob->query("name") + "��\n");

        bv1 = from_ob->query("base_value");
        if( !bv1 ) return notify_fail("���ֶ�����ֵǮ��\n");

        bv2 = to_ob ? to_ob->query("base_value") : call_other("/obj/money/" + to, "query", "base_value" );

        if( bv1 < bv2 ) amount -= amount % (bv2 / bv1);
        if( amount==0 ) return notify_fail("��Щ" + from_ob->query("name") + "�ļ�ֵ̫���ˣ�������\n");

        if( !to_ob ) {
                to_ob = new("/obj/money/" + to);
                to_ob->move(this_player());
                to_ob->set_amount(amount * bv1 / bv2);
        } else
                to_ob->add_amount(amount * bv1 / bv2);

        message_vision( sprintf("$N������ȡ��%s%s%s������%s%s%s��\n",
                chinese_number(amount), from_ob->query("base_unit"), from_ob->query("name"),
                chinese_number(amount * bv1 / bv2), to_ob->query("base_unit"), to_ob->query("name")),
                this_player() );

        from_ob->add_amount(-amount);

        return 1;
}


int do_deposit(string arg)
{
}
