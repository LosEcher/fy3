inherit ITEM;
inherit F_FOOD;

void create()
{
	set_name("��ĩ�ձ�", ({"shao bing"}));
	set_weight(800);
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value", 15);
		set("food_remaining", 3);
		set("food_supply", 20);
	}
}
