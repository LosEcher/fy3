inherit ITEM;

void create()
{
        set_name("金牌", ({"pai", "jin pai"}));
        set_weight(500);
        if (clonep())
                set_default_object(__FILE__);
    else  {
           set("unit", "块");
           set("long", "一块圆形金牌，上面还雕着花，写着字．\n");
           set("value",2); 
           set("no_sell", 1);
           set("no_get",1);
                    set("no_drop",1);
        }
}
