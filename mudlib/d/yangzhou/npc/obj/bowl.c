// bowl.c

inherit ITEM;
inherit F_LIQUID;

void create()
{
        set_name("�����", ({ "cha wan", "bowl" }) );
        set_weight(400);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", "����һ�����룬������ʲô�أ���Ȼ�ǲ����������Ϻõ�ë���أ�\n");
                set("unit", "��");
                set("value", 100);
                set("max_liquid", 60);
        }

        set("liquid", ([
                "type": "water",
                "name": "ë��",
                "remaining": 60,
                "drunk_apply": 2,
        ]) );
}