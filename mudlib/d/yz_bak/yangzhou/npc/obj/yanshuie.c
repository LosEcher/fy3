// music  yangzhou's ��ˮ��

inherit ITEM;
inherit F_FOOD;

void create()
{
	set_name("��ˮ��", ({ "yanshuie", "yanshui","e" }) );
	set_weight(600);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һֻ��ˮ�졣\n");
		set("unit", "ֻ");
		set("value", 200);
		set("food_remaining", 20);
		set("food_supply", 100);
		set("material", "bone");
	}
	setup();
}

//int finish_eat()
//{
//	if( !query("weapon_prop") ) return 0;
//	set_name("�еþ���ļ��ȹ�ͷ", ({ "bone" }) );
//	set_weight(150);
//	set("long", "һ���еþ���ļ��ȹ�ͷ��\n");
//	return 1;
//}
