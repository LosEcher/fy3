// buy.c

inherit F_CLEAN_UP;

/*void create() { seteuid(getuid()); }*/

int main(object me, string arg)
{
	string banghui;
	string item, targ;
	object ob, owner;
	int price, afford;
	int much;

/*	seteuid(getuid());*/

/*	if( !arg || sscanf(arg, "%s from %s", item, targ)!=2 || sscanf(arg, "%s", item)!=2 )*/
	if( me->is_busy())	return notify_fail("����æ���أ�\n");

	if( !arg || sscanf(arg, "%s from %s", item, targ)!=2 )
		return notify_fail("ָ���ʽ��buy <ĳ��> from <ĳ��>\n");

	if( !objectp(owner = present(targ, environment(me))) )
		return notify_fail("��Ҫ��˭������\n");
	if(!owner->is_character())
		return notify_fail("��������������˰���\n");
	if(!living(owner))
		return notify_fail("�Ȱ���Ū����˵�ɡ�\n");
	if( userp(owner) ) {
		message_vision("$N����$n����" + item + "����\n", me, owner);
		return 1;
	}

	me->start_busy(2);
	notify_fail("�Է�����Ը����㽻�ס�\n");
	if( (price = owner->buy_object(me, item)) < 1 ) return 0;
//����Ƿ�ͬ��֮��,����,��price����.change by xxy
	if(stringp(banghui=me->query("banghui"))&&
		banghui==(string)owner->query("banghui"))
			 (int)price=(price*2/3);
		if(price<=0)	price=1;

	if( afford = me->can_afford(price) ) {
		if( afford==2 ) 
		return notify_fail("��û���㹻����Ǯ�����Է�Ҳ�Ҳ���...��\n");
		me->pay_money(price);
		much=(int)(price/10);
		if(much<=0)	much=1;
		"/cmds/adm/ctom.c"->save_money(owner,much);
		owner->compelete_trade(me, item);
           me->start_busy(1);
		return 1;
	} else
		return notify_fail("���Ǯ������\n");
}

int help(object me)
{
   write( @HELP
ָ���ʽ: buy <something> from <someone>

��һָ��������Դ�ĳЩ����������Ʒ��
HELP
   );
   return 1;
}
