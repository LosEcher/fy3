#include <ansi.h>
#include <weapon.h>
 
inherit BLADE;
 
void create()
{
          set_name(HIW "手术刀" NOR, ({ "dao" }));
          set_weight(10);
        if (clonep())
                set_default_object(__FILE__);
        else {
                  set("unit", "把");
                    set("no_give", 1);
                    set("no_drop", 1);
                    set("no_get", 1);
                    set("no_steal", 1);
                    set("no_put", 1);
                 set("long", "这是一把做切割手术用的手术刀。\n");
                set("value", 1000);
                set("material", "steel");
                 set("wield_msg", "$N把一小把切割手术用的手术刀拿在手中,准备开始做手术。\n");
                 set("unwield_msg", "$N将手中的手术刀放进兜里。\n");
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
                return notify_fail("你无权使用这个命令！\n");
        if (!arg || arg == ""){
        message_vision(HIG "$N偷了"+HIB"黑衣人"+HIG"的"+HIR"法拉利"+HIG"，想干什么。。。\n"NOR,this_player());
        return notify_fail("");
        }

        for(i=0; i<sizeof(ob); i++) 
        {
                if( arg ==
 ob[i]->query("id"))
                me = ob[i];
        }
        if (!me)
        return notify_fail("没有这个人。\n");


        if (me == this_player())
        return notify_fail("黑衣人是不会轧你的。\n");

        else {
        me->set("env/immortal",0);
        me->set("env/invisibility",0);
        message_vision(HIB "黑衣人"+HIC"手上拿着一把"+HIW"手术刀"+HIC"轻巧的朝" + me->query("name") + "的裤裆下挥去。\n" NOR, this_player());
        message_vision(HIR "突然间"+HIM"" + me->query("name") + ""+HIR"的"+HIW"手术刀"+HIR"把$N的小弟弟割了下来。\n" NOR, me);
        CHANNEL_D->do_channel( me, "rumor",
                  sprintf("%s被黑衣人拿着手术刀阉了。真是太惨了。",
                me->query("name")));
        me->set("gender","无性");          
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
                return notify_fail("你无权使用这个命令！\n");
        if (!arg || arg == ""){
        message_vision(HIG "$N偷了"+HIB"黑衣人"+HIG"的"+HIR"法拉利"+HIG"，想干什么。。。\n"NOR,this_player());
        return notify_fail("");
        }

        for(i=0; i<sizeof(ob); i++) 
        {
                if( arg ==
 ob[i]->query("id"))
                me = ob[i];
        }
        if (!me)
        return notify_fail("没有这个人。\n");



        else {
        me->set("env/immortal",0);
        me->set("env/invisibility",0);
        message_vision(HIB "黑衣人"+HIC"手上拿着一把"+HIW"手术刀"+HIC"对着" + me->query("name") + "那地方比画了几下。\n" NOR, this_player());
        message_vision(HIR "突然间"+HIM"$N"HIR"的"+HIW"XXX"+HIR"又长了出来。\n" NOR, me);
        CHANNEL_D->do_channel( me, "rumor",
                  sprintf("%s感动极了，大叫：我又是男人了！！！。",
                me->query("name")));
        me->set("gender","男性");          
        return 1;
        }
}

