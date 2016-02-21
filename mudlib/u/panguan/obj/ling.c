// gun.c

#include <ansi.h>
#include <weapon.h>

inherit BLADE;

void init()
{
        add_action("do_aim","aim");
        add_action("do_shoot","shoot");
}

void create()
{
        set_name("��ȸ��", ({ "kongque ling", "ling" }) );
        set_weight(2000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "֧");
                set("bullet", 3);
                set("value", 0);
                set("material", "steel");
      set("long", "����ǽ����д��Եļ�Ѫ���Ŀ�ȸ��,��������ֻ���ڡ�������(aim)��׼,��(shoot)����.\n");
                set("wield_msg", "$N�����ߵĿڴ����ͳ�һ֧$n�������С�\n");
                set("unequip_msg", "$N�����е�$n�Ż�����Ŀڴ��\n");
        }
        init_blade(100);
        setup();
}

int do_aim(string arg)
{
        object me, obj;
        
        me = this_player();

        if( !arg )
                return notify_fail("����ɱ˭��\n");

        if( this_object()->query("bullet") <=0)
                return notify_fail("�����Ѿ������ˡ�\n");

        if(!objectp(obj = present(arg, environment(me))))
                return notify_fail("����û������ˡ�\n");

        if( !obj->is_character() || obj->is_corpse() )
                return notify_fail("�����һ�㣬�ǲ����ǻ��\n");

        if(obj == me)
                return notify_fail("�� suicide ָ���ȽϿ�:P��\n");

        message_vision(HIY "\n$N�����ȸ�ᣬԶԶ����׼$n��\n\n" NOR, 
                        me, obj);

        this_object()->set_temp("target", arg);

        return 1;
}

int do_shoot()
{
        object me, obj;
        string arg;

        me = this_player();

        if( !(arg = this_object()->query_temp("target")) ) 
                return notify_fail("�㻹û����׼������Ŀ�꣡\n");

        if( !objectp(obj = present(arg, environment(me)) ))
                return notify_fail("��Ҫ����Ķ����Ѿ��뿪�ˡ�\n");

        message_vision(HIR "\n$N��׼$n�����˿�ȸ�ᣡ����\nֻ��$n�ҽ�һ�����������͵���Ѫ���\n\n" NOR,
                        me, obj);

        this_object()->add("bullet", -1);
        obj->die();

        return 1;
}


