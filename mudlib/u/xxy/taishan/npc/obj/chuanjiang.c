
//music yangzhou's ����

#include <ansi.h>
#include <weapon.h>

inherit BLADE;

void create()
{
        set_name("����", ({"chuanjiang","jiang"}) );
        set_weight(400);
        set("no_get",1);
        set("no_drop","��Ĵ������ܶ���,������군�ˡ�\n");
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("material", "wood");
                set("wield_msg", "$N����һ��ʪ���ܵ�$n�������С�\n");
                set("unequip_msg", "$N���������е�$n��\n");
             }
        init_blade(5);
        setup();
}       


