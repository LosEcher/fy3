#include <ansi.h>

inherit ITEM;
inherit F_LIQUID;

void create()
{
        set_name(HIY"���ڴ�"NOR, ({ "jiangkou chun", "chun","jiuhu" }) );
        set_weight(400);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", HIY"����һ�����ɫ�ľƺ�������װ���ǽ������ơ����ڴ�����\n"NOR);
                set("unit", "��");
                set("value", 10000);
                set("max_liquid", 50);
        }

        // The liquid contained in the container is independent, we set a copy
        // in each cloned copy.
        set("liquid", ([
                "type": "water",
                "name": "���ڴ�",
                "remaining": 50,
        ]) );
}
