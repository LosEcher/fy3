#include <armor.h>
inherit CLOTH;
string *name=({"����","���","�°�","��ɫ","�ֲ�","����"});

void create()
{
        set_name(name[random(sizeof(name))]+"����", ({ "jia sha","cloth" }) );
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("material", "cloth");
                set("unit", "��");
                set("armor_prop/armor", 15);

        }
        setup();
}

