// music yangzhou' ������

inherit ITEM;
inherit F_FOOD;

void create()
{
	set_name("������", ({"huashengmi", "huasheng","mi"}));
	set_weight(80);
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("long", "һ��������\n");
		set("unit", "��");
		set("value", 30);
		set("food_remaining", 2);
		set("food_supply", 20);
	}
}
