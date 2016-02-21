// qianlaob.c
#include <ansi.h>

inherit NPC;
void create()
{
	set_name("Ǯ�ϱ�", ({"qian laoben", "qian", "laoben"}));
	set("banghui","��ػ�");
	set("gender", "����");
	set("age", 34);

	set("str", 22);
	set("int", 24);
	set("dex", 18);
	set("con", 18);

	set("kee", 800); 
	set("max_kee", 800);
	set("gin", 100);
	set("max_gin", 100);
	set("mingwang",500);
	set("max_force",800);
	set("force",800);
	set("force_factor",80);

	set("combat_exp", 100000);
	set("attitude", "friendly");
	set("env/wimpy", 50);
	set("chat_chance", 5);
	set("chat_msg", ({
	"Ǯ�ϱ�˵�����ҽ�Ǯ�ϱ���������Ϊ���������ϱ�Ҳ���ˡ�\n",
	"Ǯ�ϱ�Ц��˵�����ڱ����Ǯ��Ϣ���ٰٷ�֮һ���͹���ֻ�ܴ�ɡ�\n",
	"Ǯ�ϱ�˵��ֻ�жԱ��ɵ����Ҳ���ô�������Ա���˰����ߺ�......\n",
	"Ǯ�ϱ�ͻȻ˵��: ������������Ҫ������ֵ�ߴ��кô�����\n",
        "Ǯ�ϱ�ͻȻ˵�����˷ֿ�һ��ʫ�����Ϻ�Ӣ����֪��\n",
	}));
        set("inquiry", ([
		"��Ϣ" :  "\n��Ҫ��Ϣ����ᣡ\n",
		"�½���" :  "\n����ܶ�����û��ô���ס�\n",
		"��ػ�" :  "\nֻҪ��Ӣ�ۺú���������������ػ�(join tiandihui)��\n",
   ]));
	set_skill("unarmed", 80);
	set_skill("yunlong-shou",80);
	set_skill("force",80);
	set_skill("yunlong-xinfa",80);
	set_skill("dodge", 80);
	set_skill("yunlong-shenfa",80);
	set_skill("parry",80);

	map_skill("unarmed","yunlong-shou");
	map_skill("parry","yunlong-shou");
	map_skill("dodge","yunlong-shenfa");
	map_skill("force","yunlong-xinfa");
	set_temp("apply/attack", 100);
	set_temp("apply/defense", 100);
	set_temp("apply/damage", 40);

	setup();
	carry_object("/obj/cloth")->wear();
	add_money("gold", 3);
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
		message_vision("$N����$n��������������ʧ�ٶ��գ���ȥ�һƷɺ�������������ɡ�\n",this_object(),ob);
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

	from_ob->add_amount(-amount);

	if (!to_ob) {
		to_ob = new("/obj/money/" + to);
		to_ob->set_amount(amount * bv1 / bv2);
		to_ob->move(me);
	}
	else
		to_ob->add_amount(amount * bv1 / bv2);
	
	message_vision(sprintf("$N������ȡ��%s%s%s��������%s%s%s��\n",
	chinese_number(amount), from_ob->query("base_unit"), from_ob->query("name"),
	chinese_number(amount * bv1 / bv2), to_ob->query("base_unit"), 
	to_ob->query("name")), me);

//	from_ob->add_amount(-amount);

	remove_call_out("enough_rest");
	call_out("enough_rest", 5);

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

	me->add("balance", what_ob->query("base_value") * amount);
	what_ob->add_amount(-amount);
	message_vision(sprintf("$N�ó�%s%s%s�������Ǯׯ��\n", 
	chinese_number(amount), what_ob->query("base_unit"), 
	what_ob->query("name")), me);

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
/*
	Ǯׯ��Ϣת�������룬ͬ��᲻����Ϣ
	���ڱ�NPC�Ƿ�����NPC�����Բ��ý�����Ϣת����
	����Ĵ���
	 lixi=what->query("base_value") * amount/10;
	 if(lixi>0)	"/cmds/adm/ctom.c"->save_money(this_object(),lixi);
*/
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

void recognize_apprentice(object ob)
{
        string banghui;
        if(! stringp(banghui=ob->query("banghui")) ||
                banghui!=query("banghui"))
        return notify_fail(query("name")+"ҡͷ����������ػ��ֵܲ��̡�\n");
        if(ob->query("score")<50)
                return notify_fail(query("name")+"������Ҫ��Ϊ��ػ��������\n")
;
        return 1;
}
