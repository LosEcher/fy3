#include <weapon.h>

inherit THROWING;

void create()
{
set_name("ܽ�ؽ���",({"jinzhen"}));
        if( clonep() )
                set_default_object(__FILE__);
        else {
set("long","β�������ܽ�ػ�����״,�仨��ͻ��һ������.\n");
set("unit","��");
set("base_unit","��");
set("base_weight",10);
     set("base_value", 1);
        }
set_amount(13);
        init_throwing(20);
        setup();
}

