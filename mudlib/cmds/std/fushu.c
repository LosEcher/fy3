// halt.c

#include "/doc/help.h"
inherit F_CLEAN_UP;

int main(object me, string arg)
{
        object ob;
         if(!arg || arg == "")
                   return notify_fail("ָ���ʽ: fushu (����)\n");
         if( !environment(me)->query("biwuchang") )
                  return notify_fail("����ָ��ֻ���ڱ��䳡ʹ�á�\n");
         if( !me->query_temp("war_biwu") )
                return notify_fail("�����ڲ�û����ս����\n");
         if(!objectp(ob = present(arg, environment(me))))
                 return notify_fail("����û������ˡ�\n");
         if(ob==me)
                 return notify_fail("û���ֱ�Ҫ�ɡ�\n");
         if(!ob->query_temp("war_biwu") || ob->query_temp("war_biwu")!= me->name())
                 return notify_fail(ob->name()+"���ڲ�û�к�����䰡��\n");
          me->remove_all_killer();
          ob->remove_all_killer();
         me->delete_temp("war_biwu");
          ob->delete_temp("war_biwu");
         message_vision("$N����Ȧ�⹰��˵��: " +
                         RANK_D->query_self(me) + "�书���ã��ʰ��·�!\n",me);
	write("Ok.\n");
	return 1;
}

int help(object me)
{
   write(@HELP
  ָ���ʽ: fushu (����)

 �ڱ��䳡����ֹͣ����˵�ս����

 ���ָ��: biwu
HELP
   );
   return 1;
}
