// finance.c
//Update by Huang (10/26/96)
//�����Զ��һ�coin,silver,gold
//cash���ܶһ�.

// can_afford() checks if this_object() can afford a price, it returns:
//
//      0:      cannot afford.
//      1:      can afford with proper money(coins).
//      2:      can afford, but don't have enough proper money(coins).
//
int can_afford(int amount)
{
        int total;
        object gold, silver, coin, cash;

        gold = present("gold_money");
        silver = present("silver_money");
        coin = present("coin_money");
	cash = present("thousand-cash_money");

        total = 0;
        if( gold ) total += gold->value();
        if( silver ) total += silver->value();
        if( coin ) total += coin->value();

        if (cash && total < amount) {
                if ((total + cash->value()) >= amount)
                        return 2;
        }

        if( total < amount ) return 0;

/*        if (coin) {
                if ((int)coin->value() < (amount%100))
                        return 2;
         } else if (amount%100) return 2;
        if (silver) {
                if (coin) {
                     if ((int)silver->value()+(int)coin->value()
                                < (amount % 10000))
                        return 2;
                }
        } else if (amount%10000) return 2;
*/                 
/*        if( coin ) amount -= (int)coin->value();
        if( amount <= 0 ) return 1;
        else if( amount % 100 ) return 2;

        if( silver ) amount -= (int)silver->value();
        if( amount <= 0 ) return 1;
        else if( amount % 10000 ) return 2;
*/
        return 1;
}

int pay_money(int amount)
{
        int total;
        object gold, silver, coin;

        gold = present("gold_money");
        silver = present("silver_money");
        coin = present("coin_money");

        total = 0;
        if( gold ) total += gold->value();
        if( silver ) total += silver->value();
        if( coin ) total += coin->value();

        if( total < amount ) return 0;
/*
        if( gold && amount > 10000 ) {
                if( gold->value() >= amount ) {
                        gold->add_amount(-amount/10000);
                        amount %= 10000;
                } else {
                        amount -= (int)gold->value();
                        gold->set_amount(0);
                }
        }
        if( silver && amount > 100 ) {
                if( silver->value() >= amount ) {
                        silver->add_amount(-amount/100);
                        amount %= 100;
                } else {
                        amount -= (int)silver->value();
                        silver->set_amount(0);
                }
        }
        if( coin && amount > 0 ) {
                if( coin->value() >= amount ) {
                        coin->add_amount(-amount);
                        amount = 0;
                } else
                        error("F_FINANCE: Not enough money!\n");
        }
        
        if( amount > 0 ) error("F_FINANCE: Not enough money!\n");
*/
	total -= amount;
	if (total > 10000) {
		if (!gold) {
			gold = new(GOLD_OB);
			gold->move(this_player());
		}
		gold->set_amount(total/10000);
		total %= 10000;
	} else if (gold) {
		gold->set_amount(0);
/*		gold->add_amount(-gold->value()/10000);*/
	}
	if (total > 100) {
		if (!silver) {
			silver = new(SILVER_OB);
			silver->move(this_player());
		}
		silver->set_amount(total/100);
		total %= 100;
	} else if (silver) {
		silver->add_amount(-silver->value()/100);
	}
	if (total > 0) {
		if (!coin) {
			coin = new(COIN_OB);
			coin->move(this_player());
                }
		coin->set_amount(total);
	} else if (coin) {
		coin->add_amount(-coin->value());
	}
	return 1;
}
