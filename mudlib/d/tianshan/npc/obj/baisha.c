#include <armor.h>

inherit CLOTH;

void create()
{
        set_name("��ɴ", ({ "bai sha" }) );
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","����İ�ɴ,���Űٻ�����.\n");
                set("unit", "��");
                set("material", "cloth");
                set("armor_prop/armor", 1);
        }
        setup();
}

