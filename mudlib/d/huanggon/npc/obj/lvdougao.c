inherit ITEM;
inherit F_FOOD;

void create()
{
	set_name("õ���̶���", ({"gao"}));
	set_weight(900);
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value", 100);
		set("food_remaining", 4);
		set("food_supply", 20);
	}
}
