#include <armor.h>
#include <ansi.h>

inherit HEAD;
void create()
{
        set_name(YEL+"����"+NOR, ({"jinchai"}));
   set_weight(200);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("material", "gold");
                set("unit", "֦");
                set("long","һ֧��ͷ����,���˵ķ���΢΢�ſ�.\n");
                             set("value",1000);
                set("wield_msg","$N��ͷ�ϰ���һ֦$n,��ɬ��Ц��Ц!\n");
                             set("unwield_msg","$Nʮָ��ò���,ת�ۼ�,���е�$n������!\n");
   set("skill_type", "fork");
   if( !query("actions") ) {
     set("actions", (: call_other, WEAPON_D, "query_action" :) );
     set("verbs", ({ "thrust", "pierce" }) );
   }
     set("armor_prop/armor", 1);
     set("weapon_prop/attack",10);
        }
        setup();
}
