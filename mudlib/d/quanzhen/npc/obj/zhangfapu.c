// zhangfapu.c ����Ʒ���


#include <ansi.h>
inherit ITEM;
 
void create()
{
        set_name(HIY"����Ʒ���" NOR, ({ "zhangfa pu","pu", }));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
             set("unit", "��");
             set("long",
        "����һ�����ƾɵ��飬�����������һЩС�˻���ȭ�ŵ�ͼ�Ρ�\n",
         );
         set("value", 0);
         set("material", "paper");
         set("skill", ([
                        "name":       "haotian-zhang",
   			"exp_required" : 10000,
			"sen_cost":30,
                        "max_skill":  80
                ]) );
        }
}
