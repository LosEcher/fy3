
// yinpiao.c

inherit MONEY;

void create()
{
	set_name("������Ʊ", ({"yin piao",  "cash","zhi bi","piao"}));
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("money_id", "cash");
		set("long", "һ�����һ�������ӵ���Ʊ��\n");
		set("unit", "��");
		set("base_value", 10000);
		set("base_unit", "��");
		set("base_weight", 3);
	}
	set_amount(1);
}

