#include <ansi.h>;
#include <armor.h>;

inherit CLOTH;

void create()
{
    set_name(MAG"��"+HIC"ȸ"+HIR"��"+YEL"��"NOR, ({"feather", "yu yi"}) );
    set_weight(0);
    if( clonep() )
       set_default_object(__FILE__);
    else {
        set("female_only", 1);
        set("unit", "��");
        set("long", "����һ���ÿ�ȸ��ë��֯�ɵ���ɴ�£�ɫ��Ѥ�����ʵ���ӯ������ʹ�˶��Ի�����\n");
        set("material", "cloth");
                set("armor_prop/personality", 9999);
        set("weapon_prop/personality",100);
        set("value",70);
        set("armor_prop/armor", 20);
    }
    setup();
}
