// Mr.music yangzhou ����


#include <weapon.h>

inherit THROWING;

void create()
{
        set_name("����", ({ "putuan" ,"tuan"}) );
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", "����һ�����Ƶ����ţ��������������á�\n");
                set("unit", "ֻ");
                set("base_unit", "ֻ");
                set("base_weight", 200);
                set("base_value", 1);
                set("value", 0);
              }
        set_amount(1);
        init_throwing(1);
        setup();
}
