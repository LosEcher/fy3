// jiuhua.c
// 97.7.14 by Aug

inherit COMBINED_ITEM;

void create()
{
	set_name("�Ż���¶��", ({"jiuhua" }));
	if( !clonep() ) {
		set("unit", "Щ");
		set("long",
"�Ż���¶�����ԡ���а����ҩʦ���ط����ɼ��������ҩ�ģ���ʱ����
���һ��������ƶ��ɵ���ҩ���ܴ����Ļָ�����������\n");
		set("base_unit", "��");
		set("base_value", 10000);
		set("base_weight", 50);
	}
	set_amount(1);
	setup();
}

int stuff_ob(object me)
{
	if( me->query_stat_maximum("food") - me->query_stat("food") < 5 )
		return notify_fail("��Ķ����Ѿ��ŵ�ʲ�ᶫ��Ҳ�̲���ȥ�ˡ�\n");
	message_vision(
"$N�ó�һ���Ż���¶�裬������У�������ȥ����ʱ��һ��ƮƮ����
�ĸо������ϲ�ʹ��ƣ���ƺ�һ���Ӷ���ʧ�ˡ�\n", me);
	me->supplement_stat("food", 5);
	me->heal_stat("gin", 3000);
	me->heal_stat("kee", 3000);
	me->heal_stat("sen", 3000);
	me->supplement_stat("gin", 3000);
	me->supplement_stat("kee", 3000);
	me->supplement_stat("sen", 3000);
	add_amount(-1);

	return 1;
}

