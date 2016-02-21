// biwu.c

#include <ansi.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	object obj;
         string *killer, callname, callme;

        seteuid(getuid());
        if( !environment(me)->query("biwuchang") )
                 return notify_fail("比武指令只能在比武场使用。\n");

	if( !arg )
                 return notify_fail("你想和谁比武?\n");
        if(arg == "cancel")
          {
           if(me->query_temp("war_ask"))
             {
               message_vision("\n$N不打算和"+me->query_temp("war_ask")
                 + "比武了!\n",me);
              me->delete_temp("war_ask");
              return 1;
             }
else
            write("你并没有邀请别人比武!\n");
              return 1;
              }

	if(!objectp(obj = present(arg, environment(me))))
		return notify_fail("这里没有这个人。\n");

	if( !obj->is_character() || obj->is_corpse() )
		return notify_fail("看清楚一点，那并不是活物。\n");

	if(obj==me)
                 return notify_fail("和自己比武?没这必要吧!\n");

        if(!userp(obj))
                 return notify_fail("你只能和玩家比武!\n");

        if(!living(obj))
                 return notify_fail(obj->name() + "已经无法战斗了。\n"); 
         if(me->query_temp("war_ask"))
                  return notify_fail("你正邀请"+me->query_temp("war_ask")+"比武，等"+
                                "他表态再说吧!\n");
         if(obj->query_temp("war_ask")&&obj->query_temp("war_ask")!=me->name())
                  return notify_fail(obj->name()+"正邀请"+
                  obj->query_temp("war_ask")+"比武!\n");
        if(me->query_temp("war_biwu"))
                 return notify_fail("你正在和"+me->query_temp("war_biwu")+"比武，等"+
                               "分出胜负再说吧!\n");
        if(obj->query_temp("war_biwu"))
                 return notify_fail(obj->name()+"正在和"+obj->query_temp("war_biwu")+
                               "比武，等他们分出胜负再说吧!\n");
        callname = RANK_D->query_respect(obj);
        callme = RANK_D->query_self(me);
         if(!obj->query_temp("war_ask"))
            {
           me->set_temp("war_ask",obj->name());
          call_out("war_time", 60, me);
         message_vision("\n$N对著$n拱手说道：「" 
                  + callme + "今日有幸向"+callname+"讨教高招，请赐教！」\n\n", me, obj);
        tell_object(obj,"如果你同意比武请下 biwu "+me->query("id")+" 指令!\n");
            }
        else
            {
           message_vision("\n$N点了点头，对$n说道：「" 
                    + callname + "既然有兴"+callme+"奉陪！」\n\n", me, obj);

         me->set_temp("war_biwu",obj->name());
           obj->delete_temp("war_ask");
           obj->set_temp("war_biwu",me->name());
          me->kill_ob(obj);
          obj->kill_ob(me);
            }

	return 1;
}
int war_time(object me)
{
      if(me->is_fighting()) return 0;
      if(!me->query_temp("war_ask")) return 0;
           write("对方没答应你的比武要求!\n");
         me->delete_temp("war_ask");
         return 1;
}
int help(object me)
{
  write(@HELP
 指令格式 : biwu <人物>  || biwu cnacel (停止邀请别人比武)

 这个指令用于在比武场与玩家间的比武而设。

 其他相关指令: fushu

HELP
    );
    return 1;
}
 
