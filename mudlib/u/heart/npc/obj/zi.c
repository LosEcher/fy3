#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
        set_name(MAG"��������"NOR,({ "zilan sword","sword"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long",        MAG"�������͵ı�����\n"NOR);
                set("value",500000);
                set("material", "steel");                              
        }
           init_sword(200);

        set("wield_msg", MAG"ֻ����ǰһ������о�������ɱ����$N�����ж��˰ѵı�����\n"NOR);
        set("unwield_msg", MAG"�Ϲ�ѸȻ��ʧ,$N���е��������������뽣���ڡ�����ƽ������ࡣ\n"NOR);


        setup();
}

mixed weapon_action(object me,object victim)
{
        object ob,target_weapon;
        string msg;
        target_weapon=victim->query_temp("weapon");
        if(! target_weapon)     return 0;
        if( target_weapon->query("oldsix/qjdy"))        {
                msg=MAG"��������һ����"+this_object()->query("name")+MAG"��"+
                target_weapon->query("name")+MAG"�ཻ��ð�������ǣ�\n"NOR;
                return msg;
        }
        msg=MAG"ֻ���ϹⱩ�ǣ�"+victim->query("name")+MAG"���е�"+target_weapon->query("name")+MAG"��"+this_object()->query("name")+MAG"����һ�ᣬ�������ֶ��ɡ���\n"NOR;
                        
                        destruct(this_object());
                        return msg;

}

