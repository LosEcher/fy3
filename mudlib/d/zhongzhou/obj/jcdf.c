//�ҳ�����
inherit F_FOOD;
inherit ITEM;

void create()
{
        set_name("�ҳ�����", ({ "doufu", "jcdf" }) );
        set_weight(300);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", "һ����պõļҳ�������\n");
                set("unit", "��");
                set("value", 100);
                set("food_remaining", 3);
                set("food_supply", 25);
        }
    setup();
}
