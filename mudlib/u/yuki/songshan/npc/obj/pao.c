#include <armor.h>
#include <ansi.h>
inherit CLOTH;

void create()
{
        set_name(HIR"�廨����"NOR, ({ "cloth" }) );
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", "�����ɫ���廨��������ˬˬ������Ʈ�ݡ�\n");
                set("unit", "��");
                set("value", 0);
                set("material", "cloth");
                set("armor_prop/armor", 1);
                set("armor_prop/personality", 3);
                set("female_only", 1);
        }
        setup();
}
