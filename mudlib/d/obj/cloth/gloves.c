// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
#include <armor.h>

inherit HANDS;

void create()
{
        set_name("����", ({ "gloves" }) );
        set_weight(800);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "˫");
                set("material", "cloth");
     set("value", 100);
                set("armor_prop/armor", 2);
        }
        setup();
}
