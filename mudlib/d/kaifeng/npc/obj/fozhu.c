// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// shoupi.c

#include <armor.h>

inherit NECK;

void create()
{
set_name("��̴��",({"fochuan"}));
   set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
set("material","wood");
                set("unit", "��");
set("armor_prop/armor",10);
        }
        setup();
}

