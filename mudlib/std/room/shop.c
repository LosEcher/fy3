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
                return chinese_number(value) + "文钱";
        else
                return chinese_number(value/100) + "两"
                        + (value%100? "又" + chinese_number(value%100) + "文钱": "");
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
                return notify_fail("你要拿什麽物品给当铺估价？\n");

        if( ob->query("money_id") )
                return notify_fail("这是「钱」，你没见过吗？\n");

        value = ob->query("value");
        if( !value ) printf("%s一文不值。\n", ob->query("name"));
        else 
                printf("%s价值%s。\n如果你要典当(pawn)，可以拿到%s及一张当票。\n如果卖断(sell)，可以拿到%s。\n",
                        ob->query("name"), value_string(value),
                        value_string(value * 60 / 100), value_string(value * 80 / 100));

        return 1;
}

int do_pawn(string arg)
{
        object ob;
        int value;

        if( !arg || !(ob = present(arg, this_player())) )
                return notify_fail("你要典当什麽物品？\n");

        if( ob->query("money_id") )     return notify_fail("你要当「钱」？\n");

        value = ob->query("value");
        if( !value ) return notify_fail("这样东西不值钱。\n");

        message_vision("$N把身上的" + ob->query("name") + "拿出来典当了"
                + value_string(value * 60 / 100) + "。\n", this_player());

        pay_player(this_player(), value / 100 * 60);
        destruct(ob);

        return 1;
}

int do_sell(string arg)
{
        object ob;
        int value;

        if( !arg || !(ob = present(arg, this_player())) )
                return notify_fail("你要卖断什麽物品？\n");

        if( ob->query("money_id") )     return notify_fail("你要卖「钱」？\n");
        value = ob->query("value");
        if( !value ) return notify_fail("这样东西不值钱。\n");


        message_vision("$N把身上的" + ob->query("name") + "卖掉。\n",
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
                return notify_fail("指令格式：convert <数量> <货币种类> to <货币种类>\n");

        from_ob = present(from + "_money", this_player());
        to_ob = present(to + "_money", this_player());
        if( !to_ob && file_size("/obj/money/" + to + ".c") < 0 )
                return notify_fail("你想兑换哪一种钱？\n");

        if( !from_ob )          return notify_fail("你身上没有这种货币。\n");
        if( amount < 1 )        return notify_fail("兑换货币一次至少要兑换一个。\n");

        if( (int)from_ob->query_amount() < amount )
                return notify_fail("你身上没有那麽多" + from_ob->query("name") + "。\n");

        bv1 = from_ob->query("base_value");
        if( !bv1 ) return notify_fail("这种东西不值钱。\n");

        bv2 = to_ob ? to_ob->query("base_value") : call_other("/obj/money/" + to, "query", "base_value" );

        if( bv1 < bv2 ) amount -= amount % (bv2 / bv1);
        if( amount==0 ) return notify_fail("这些" + from_ob->query("name") + "的价值太低了，换不起。\n");

        if( !to_ob ) {
                to_ob = new("/obj/money/" + to);
                to_ob->move(this_player());
                to_ob->set_amount(amount * bv1 / bv2);
        } else
                to_ob->add_amount(amount * bv1 / bv2);

        message_vision( sprintf("$N从身上取出%s%s%s，换成%s%s%s。\n",
                chinese_number(amount), from_ob->query("base_unit"), from_ob->query("name"),
                chinese_number(amount * bv1 / bv2), to_ob->query("base_unit"), to_ob->query("name")),
                this_player() );

        from_ob->add_amount(-amount);

        return 1;
}


int do_deposit(string arg)
{
}
