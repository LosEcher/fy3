// hupi.c
//

#include <ansi.h>
#include <armor.h>

inherit CLOTH;

void create()
{
	set_name(HIY"��Ƥ"NOR,({"hu pi"}));
        set_weight(20000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("material", "cloth");
		set("value", 20000);
                set("armor_prop/armor", 10);
        }
        setup();
}

