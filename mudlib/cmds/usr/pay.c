
inherit F_CLEAN_UP;

int main(object me, string arg)
{
	int money;
	object ob,obj;
	if(! arg)
		return notify_fail("pay somebody\n");

	if(! ob=present(arg,environment(me)))
		return notify_fail("���û����ô���ˡ�\n");
	if(! ob->is_character())
		return notify_fail("���壬�����������\n");
	if(! living(ob))
		return notify_fail("����Ȱ���Ū����˵��\n");
	if(! (money=ob->query("money_need")))
		return notify_fail("������"+
		ob->query("name")+"������������Ǯ�ơ�\n");
	if( (string)ob->query("banghui")&&
		me->query("banghui")==ob->query("banghui"))
		return notify_fail(ob->query("name")+"�Ǻ�Ц�����Լ������ֵܣ��α���˿�����\n");
	if(! me->can_afford(money))
		return notify_fail(ob->query("name")+"����һ�������������ϴ�����Ǯ�����ɡ�\n");
	if(! me->pay_money(money))
		return notify_fail(ob->query("name")+"����һ�������������ϴ�����Ǯ�����ɡ�\n");
	message_vision("$N���������Ĵ��������ͳ�"+
		chinese_number(money/100)+"�����ӽ���$n��\n",me,ob);
	message_vision("$N���˵�ͷ����"+me->query("name")+"������Թ�ȥ�ˡ�\n",
		ob);
	me->set_temp("oldsix/can_leave",1);
	"/cmds/adm/ctom"->save_money(ob,money);
	return 1;
	

}

int help()
{
	write(@TEXT
ָ���ʽ��pay <somebody>

����ָ����������Ǯ��ĳNPC�ģ�����һЩNPC������
һЩ���̣���Ҫ��ͨ���Ļ��������������ͬ���ֵ�
������ȷ���Լ����Դ�����������㻹�ǹԹԵĸ�Щ
���������ɡ�
TEXT
	);
	return 1;
}
