inherit ITEM;
inherit F_FOOD;

void create()
{
	set_name("���", ({ "pan tao" }) );
	set_weight(120);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һ��΢΢����Ĵ����\n");
		set("unit", "��");
		set("value", 1000);
                set("eat_msg","$N����$n,�����˶����ſ�ˮ,����:������ô�����϶�.\n");
		set("food_remaining",8);
		set("food_supply", 60);
	}
}
