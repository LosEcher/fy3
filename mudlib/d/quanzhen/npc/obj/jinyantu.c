// jinyantu.c ����ͼ��


#include <ansi.h>
inherit ITEM;
 
void create()
{
        set_name(HIC"����ͼ��" NOR, ({ "jinyan tu","tu", }));
        set_weight(800);
        if( clonep() )
                set_default_object(__FILE__);
        else {
             set("unit", "��");
             set("long",
        "���Ǳ�����ͨ���飬�����������һЩС�˷����ͼ�Ρ�\n",
         );
         set("value", 0);
         set("material", "paper");
         set("skill", ([
			"name":		"jinyan-gong",
   			"exp_required" : 10000,
			"sen_cost":	25,
                        "max_skill":  60
                ]) );
        }
}
