#include <armor.h>

inherit ARMOR;

void create()
{
        set_name("����", ({ "yinjia","jia" }) );
        set_weight(6000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
		set("value", 8000);
		set("oldsix/max_damage",50);
		set("oldsix/protect",5);
                set("material", "steel");
                set("armor_prop/armor", 25);
        }
        setup();
}
