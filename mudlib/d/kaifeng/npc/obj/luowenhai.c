// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 

inherit ITEM;

void create()
{
        set_name("����������", ({ "luowen hai" }) );
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "ֻ");
                set("long", "����ɫ,���ⶼ�������ε����ơ�\n");
                set("value", 1000);
        }
}


