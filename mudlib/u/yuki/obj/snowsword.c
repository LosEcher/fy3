#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
        set_name(HIW"��ѩ�޺�"NOR,({ "snowsword","sword"}));
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long",        HIW"����һ����ָ���ɺ������ɵĶ̽���\n"NOR);
                set("value",500000);
                set("material", "steel");                              
        }
         init_sword(150);

        set("wield_msg", HIW"ֻ�������һ����һ��ҫ�۵İ׹�������$N�����ж��˰ѱ������ı�����\n"NOR);
        set("unwield_msg", HIW"�׹�զ��,$N���еı�ѩ�޺��Ѿ���������Ľ����ڡ�\n"NOR);


        setup();
}

mixed weapon_action(object me,object victim)
{
        object ob,target_weapon;
        string msg;
        target_weapon=victim->query_temp("weapon");
        if(! target_weapon)     return 0;
        if( target_weapon->query("oldsix/qjdy"))        {
                msg=HIW"��������һ����"+this_object()->query("name")+MAG"��"+
                target_weapon->query("name")+HIW"�ཻ��ð�������ǣ�\n"NOR;
                return msg;
        }
        msg=MAG"ֻ���׹�һ����"+victim->query("name")+HIW"���е�"+target_weapon->query("name")+HIW"��"+this_object()->query("name")+HIW"����������������ɿ�ȥ����\n"NOR;
                        
                        destruct(this_object());
                        return msg;

}

