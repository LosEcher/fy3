// Mr.music yangzhou ����

#include <weapon.h>

inherit THROWING;

void create()
{
        set_name("����", ({ "feibiao" ,"biao"}) );
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", "����һ֧��ͨ�ķ��ڡ�\n");
                set("unit", "֧");
                set("base_unit", "֧");
                set("base_weight", 10);
                set("base_value", 20);
                set("value", 20);
              }
        set_amount(1);
        init_throwing(5);
        setup();
}
