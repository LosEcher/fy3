// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 

inherit ITEM;

void create()
{
        set_name("����������", ({ "xiang" }) );
        set_weight(500000);
        set_max_encumbrance(800);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "����ֳ����,����΢Ц����.\n");
                set("value", 50);
        }
}


