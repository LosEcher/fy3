inherit ITEM;

void create()
{
        set_name("����", ({"pai", "tie pai"}));
        set_weight(200);
        if (clonep())
                set_default_object(__FILE__);
    else  {
           set("unit", "��");
           set("long", "һ�鷽�����ƣ����滹���Ż���д���֣�\n");
           set("value",2); 
           set("no_sell", 1);
           set("no_get",1);
                    set("no_drop",1);
        }
}
