inherit ITEM;

void create()
{
        set_name("ͭ��", ({"pai", "tong pai"}));
        set_weight(300);
        if (clonep())
                set_default_object(__FILE__);
    else  {
           set("unit", "��");
           set("long", "һ��Сͭ�ƣ����滹���Ż���д���֣�\n");
           set("value",2); 
           set("no_sell", 1);
           set("no_get",1);
                    set("no_drop",1);
        }
}
