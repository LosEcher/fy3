// music yangzhou' ����

inherit ITEM;
inherit F_FOOD;

void create()
{
	set_name("��������",({"xysh"}));
	set_weight(80);
	if (clonep())
		set_default_object(__FILE__);
	else {
	set("long","ɫ���Ƶ���ը����������ʱ������ž�����졣\n");
	set("unit","��");
		set("food_remaining", 3);
		set("food_supply", 30);
	}
}
