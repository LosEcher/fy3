// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 

inherit ITEM;

void create()
{
        set_name("��֬�̲��", ({ "bibo hai" }) );
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "ֻ");
                set("long", "���̵Ĵɱ������ŵ����֬��,���Ǵ��о�Ʒ��\n");
                set("value", 1500);
        }
}


