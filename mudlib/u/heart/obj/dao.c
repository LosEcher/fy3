#include <ansi.h>
#include <weapon.h>
 
inherit BLADE;
 
void create()
{
          set_name(HIW "������" NOR, ({ "dao" }));
          set_weight(10);
        if (clonep())
                set_default_object(__FILE__);
        else {
                  set("unit", "��");
                    set("no_give", 1);
                    set("no_drop", 1);
                    set("no_get", 1);
                    set("no_steal", 1);
                    set("no_put", 1);
                 set("long", "����һ�����и������õ���������\n");
                set("value", 1000);
                set("material", "steel");
                 set("wield_msg", "$N��һС���и������õ���������������,׼����ʼ��������\n");
                 set("unwield_msg", "$N�����е��������Ž����\n");
        }
        init_blade(20);
        setup();
}
int init()
{
            add_action("do_ya2", "ya2");
            add_action("do_ya3", "ya3");
}


int do_ya2(string arg)
{
        object *ob, me;
        int i;
        ob = users();
if ( this_player()->query("id") != "heart")
                return notify_fail("����Ȩʹ��������\n");
        if (!arg || arg == ""){
        message_vision(HIG "$N͵��"+HIB"������"+HIG"��"+HIR"������"+HIG"�����ʲô������\n"NOR,this_player());
        return notify_fail("");
        }

        for(i=0; i<sizeof(ob); i++) 
        {
                if( arg ==
 ob[i]->query("id"))
                me = ob[i];
        }
        if (!me)
        return notify_fail("û������ˡ�\n");


        if (me == this_player())
        return notify_fail("�������ǲ�������ġ�\n");

        else {
        me->set("env/immortal",0);
        me->set("env/invisibility",0);
        message_vision(HIB "������"+HIC"��������һ��"+HIW"������"+HIC"���ɵĳ�" + me->query("name") + "�Ŀ����»�ȥ��\n" NOR, this_player());
        message_vision(HIR "ͻȻ��"+HIM"" + me->query("name") + ""+HIR"��"+HIW"������"+HIR"��$N��С�ܸܵ���������\n" NOR, me);
        CHANNEL_D->do_channel( me, "rumor",
                  sprintf("%s���������������������ˡ�����̫���ˡ�",
                me->query("name")));
        me->set("gender","����");          
        me->set("class", "eunach");
        return 1;
        }
}
int do_ya3(string arg)
{
        object *ob, me;
        int i;
        ob = users();
if ( this_player()->query("id") != "heart")
                return notify_fail("����Ȩʹ��������\n");
        if (!arg || arg == ""){
        message_vision(HIG "$N͵��"+HIB"������"+HIG"��"+HIR"������"+HIG"�����ʲô������\n"NOR,this_player());
        return notify_fail("");
        }

        for(i=0; i<sizeof(ob); i++) 
        {
                if( arg ==
 ob[i]->query("id"))
                me = ob[i];
        }
        if (!me)
        return notify_fail("û������ˡ�\n");



        else {
        me->set("env/immortal",0);
        me->set("env/invisibility",0);
        message_vision(HIB "������"+HIC"��������һ��"+HIW"������"+HIC"����" + me->query("name") + "�ǵط��Ȼ��˼��¡�\n" NOR, this_player());
        message_vision(HIR "ͻȻ��"+HIM"$N"HIR"��"+HIW"XXX"+HIR"�ֳ��˳�����\n" NOR, me);
        CHANNEL_D->do_channel( me, "rumor",
                  sprintf("%s�ж����ˣ���У������������ˣ�������",
                me->query("name")));
        me->set("gender","����");          
        return 1;
        }
}

