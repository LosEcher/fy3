// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 

inherit ITEM;

void create()
{
        set_name("����Ŀ����", ({ "ci wan" }) );
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "ֻ");
                set("long", "�������,����ֽ���ϼѴ�����\n");
                set("value", 500);
        }
}


