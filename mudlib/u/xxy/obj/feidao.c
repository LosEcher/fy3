// yaorong tan С��ɵ�

#include <weapon.h>

inherit THROWING;

void create()
{
        set_name("С��ɵ�", ({ "feidao" ,"dao"}) );
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", "����һ������������Ƴɵĵ��ڼ����ķɵ���\n");
                set("unit", "��");
                set("base_unit", "��");
                set("base_weight", 10);
                set("base_value", 20000);
                set("value", 20);
              }
        set_amount(1);
        init_throwing(55);
        setup();
}
