// Mr. musix yangzhou Ҧ�ϰ�

#include <ansi.h>

inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/Ҧ��ȫ"; }

void create()
{
#include <kzznpc.h>

  	set("area_name","����Ҧ��Ǯׯ");
set_name("Ҧ��ȫ",({"yao","yao dequan"}));
        set("area_file","/d/yangzhou/money.c");
	set("long","�����¹ʵ�Ǯׯ�ϰ塣\n");
 
	set("attitude", "friendly");

        set("inquiry", ([
            "��Ϣ":   "����ׯ�Ĺ������ȡ���ɱ��ܷѡ�\n",
            "lixi":   "����ׯ�Ĺ������ȡ���ɱ��ܷѡ�\n",
                       ]) );

	setup();
	
	carry_object(__DIR__"obj/duanjian")->wield();
	carry_object(__DIR__"obj/hupi")->wear();

	add_money("gold",1);
}

int accept_fight(object me)
{
	kill_ob(me);
	return 1;
}

void init()
{
	object ob;
	::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
	add_action("do_check", "check");
	add_action("do_check", "wen");
	add_action("do_convert", "convert");
	add_action("do_convert", "duihuan");
        add_action("do_convert", "huan");
	add_action("do_deposit", "deposit");
	add_action("do_deposit", "cun");
	add_action("do_withdraw", "withdraw");
	add_action("do_withdraw", "qu");
}

void greeting(object ob)
{
	string banghui;
	int money;
	object lp;
	if(! (banghui=ob->query("banghui")))	{
		command("nod");
		return;
	}
	lp=new("/obj/lingpai");
	lp->create(banghui);
	if(lp->query("no_use"))	{
		destruct(lp);
		message_vision("$N����$n��������λ"+
		RANK_D->query_respect(ob)+"�İ���ļ������⣬�������ʦ��ϵ�ɡ���\n",this_object(),ob);
		return;
	}
	if(lp->query("bangzhu_id")=="???")	{
		destruct(lp);
		message_vision("$N����$n������������ʧ�ٶ��գ���ȥ�һƷɺ�������������ɡ�\n",this_object(),ob);
		return;
	}
	if( lp->query("bangzhu_id")!=ob->query("id"))	{
		destruct(lp);
		message_vision("$NЦ����Ķ���$n������������ʱ���˴�ת�ʰ�����\n",this_object(),ob);
		return;
	}
	if(! (int)(money=lp->query("money")))	{
		destruct(lp);
		message_vision("$N��$n��Ц������Ŀǰ���ʿ�ת����\n",
		this_object(),ob);
		return;
	}
	lp->set("money",0);
	lp->save();
	destruct(lp);
	ob->add("balance",money);
	ob->save();
	message_vision("$N��"+banghui+"���������"+MONEY_D->money_str(money)+"ת����$n�����¡�\n",this_object(),ob);

}

void enough_rest()
{
	delete_temp("busy");
}

int do_check()
{
	// here we use 3 units to display bank infos
	int total = (int)this_player()->query("balance");
        
	
	if (!total || total < 0) {
		this_player()->set("balance", 0);
		return notify_fail("���ڱ��̺�û�д�Ǯ��\n");
	}
	write("��˶����ʱ�����ׯ�ﹲ����" + 
		MONEY_D->money_str(total) + "\n");
	return 1;
}

int do_convert(string arg)
{
	string from, to;
	int amount, bv1, bv2;
	object from_ob, to_ob;
	object me;
	
	if (query_temp("busy"))
		return notify_fail("���ȥ���ʱ������Ժ�\n");

	me = this_player();

	if (!arg || sscanf(arg, "%d %s to %s", amount, from, to) != 3)
	{
		return notify_fail("�����ʽ��huan <����> <����> to <�»��ҵ�λ>\n");
	}

	from_ob = present(from + "_money", me);
	to_ob = present(to + "_money", me);

	if (!to_ob && file_size("/obj/money/" + to + ".c") < 0)
	{
		return notify_fail("���뻻��ʲô��\n");
	}
	if (!from_ob)
	{
		return notify_fail("������û�д�����Ǯ��\n");
	}
	if (amount < 1)
	{
		return notify_fail("�����׬����\n");
	}
	if ((int)from_ob->query_amount() < amount)
	{
		return notify_fail("�����" + from_ob->query("name") + "������\n");
	}
	
	bv1 = from_ob->query("base_value");
	if (!bv1)
	{
		return notify_fail("����������ֵǮ��\n");
	}

	bv2 = to_ob ? to_ob->query("base_value") : call_other("/obj/money/" + to, 
"query", "base_value" );
	
	if (bv1 < bv2)
		amount -= amount % (bv2 / bv1);	

	if (amount == 0)
	{
		return notify_fail("��Щ" + from_ob->query("name") + "��������\n");
	}

	// allowed to convert now
	set_temp("busy", 1);	
	remove_call_out("enough_rest");
	call_out("enough_rest", 5);

//	from_ob->add_amount(-amount);

	if (!to_ob) {
		to_ob = new("/obj/money/" + to);
		to_ob->set_amount(amount * bv1 / bv2);
		if( !to_ob->move(me))
			return notify_fail("������װ������ô��Ǯ��\n");
	}
	else
		to_ob->add_amount(amount * bv1 / bv2);
	
	message_vision(sprintf("$N������ȡ��%s%s%s��������%s%s%s��\n",
	chinese_number(amount), from_ob->query("base_unit"), from_ob->query("name"),
	chinese_number(amount * bv1 / bv2), to_ob->query("base_unit"), 
	to_ob->query("name")), me);
	from_ob->add_amount(-amount);


	return 1;
}

int do_deposit(string arg)
{
	string what;
	int amount;
	object what_ob, me;

	if (query_temp("busy"))
		return notify_fail("�����������ȥȡ�ʱ���\n");

	me = this_player();

	if (!arg || sscanf(arg, "%d %s", amount, what) != 2)
	{
		return notify_fail("�����ʽ: cun <����> <����>\n");
	}

	what_ob = present(what + "_money", me);
	if (!what_ob)
	{
		return notify_fail("������û�д�����Ǯ��\n");
	}
	if (amount < 1)
	{
		return notify_fail("��������" + what_ob->query("name") + "��\n");
	}
	if ((int)what_ob->query_amount() < amount)
	{
		return notify_fail("�����" + what_ob->query("name") + "������\n");
	}

	// deposit it
	set_temp("busy", 1);	

	message_vision(sprintf("$N�ó�%s%s%s�������Ǯׯ��\n", 
	chinese_number(amount), what_ob->query("base_unit"), 
	what_ob->query("name")), me);
	me->add("balance", what_ob->query("base_value") * amount);
	what_ob->add_amount(-amount);

	remove_call_out("enough_rest");
	call_out("enough_rest", 5);
	return 1;
}

int do_withdraw(string arg)
{
	int amount, v,lixi;
	string what,banghui;
	object me;

	if (query_temp("busy"))
		return notify_fail("�����Ժ�.....��\n");

	me = this_player();
	
	if (!arg || sscanf(arg, "%d %s", amount, what) != 2)
	{
		return notify_fail("�����ʽ��qu <����> <���ҵ�λ>\n");
	}
	if (amount < 1)
	{
		return notify_fail("����ȡ������Ǯ��\n");
	}
	if (file_size("/obj/money/" + what + ".c") < 0)
	{
		return notify_fail("����ȡ��ʲôǮ��\n");
	}
	if (amount==1 && what=="coin")	{
		return notify_fail(query("name")+"ŭ������������������Ҫ����������ȥ����\n");
	}
	what = "/obj/money/" + what;

//	if ((v = amount * what->query("base_value")) > me->query("balance"))
//	{
//		return notify_fail("����Ǯ������\n");
//	}



      if ( amount  > 
              ( me->query("balance") / (what->query("base_value")) ) )
      {
              return notify_fail("����Ǯ������\n");
      }

     v = (amount) * what->query("base_value");


	if((int)me->query_encumbrance() + 
		amount* what->query("base_weight")
		> me->query_max_encumbrance() )
		return notify_fail("��ȡ��Ǯ̫���ˣ�װ���¡�\n");

	set_temp("busy",1);
	me->add("balance",  -v);
        
	banghui=(string)me->query("banghui");
	if(! banghui || banghui!=(string)query("banghui"))	{
        v=what->query("base_value") * amount * 8 /10 ;
	 lixi=what->query("base_value") * amount/10;
	 if(lixi>0)	"/cmds/adm/ctom.c"->save_money(this_object(),lixi);
	}
	else
	 v=what->query("base_value") * amount;


	MONEY_D->pay_player(me, v );
	
	message_vision(sprintf("$N��Ǯׯ��ȡ��%s��\n", MONEY_D->money_str(v)),
		me);

	remove_call_out("enough_rest");
	call_out("enough_rest", 5);
	return 1;
}
