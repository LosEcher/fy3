// biwu.c

#include <ansi.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	object obj;
         string *killer, callname, callme;

        seteuid(getuid());
        if( !environment(me)->query("biwuchang") )
                 return notify_fail("����ָ��ֻ���ڱ��䳡ʹ�á�\n");

	if( !arg )
                 return notify_fail("�����˭����?\n");
        if(arg == "cancel")
          {
           if(me->query_temp("war_ask"))
             {
               message_vision("\n$N�������"+me->query_temp("war_ask")
                 + "������!\n",me);
              me->delete_temp("war_ask");
              return 1;
             }
else
            write("�㲢û��������˱���!\n");
              return 1;
              }

	if(!objectp(obj = present(arg, environment(me))))
		return notify_fail("����û������ˡ�\n");

	if( !obj->is_character() || obj->is_corpse() )
		return notify_fail("�����һ�㣬�ǲ����ǻ��\n");

	if(obj==me)
                 return notify_fail("���Լ�����?û���Ҫ��!\n");

        if(!userp(obj))
                 return notify_fail("��ֻ�ܺ���ұ���!\n");

        if(!living(obj))
                 return notify_fail(obj->name() + "�Ѿ��޷�ս���ˡ�\n"); 
         if(me->query_temp("war_ask"))
                  return notify_fail("��������"+me->query_temp("war_ask")+"���䣬��"+
                                "����̬��˵��!\n");
         if(obj->query_temp("war_ask")&&obj->query_temp("war_ask")!=me->name())
                  return notify_fail(obj->name()+"������"+
                  obj->query_temp("war_ask")+"����!\n");
        if(me->query_temp("war_biwu"))
                 return notify_fail("�����ں�"+me->query_temp("war_biwu")+"���䣬��"+
                               "�ֳ�ʤ����˵��!\n");
        if(obj->query_temp("war_biwu"))
                 return notify_fail(obj->name()+"���ں�"+obj->query_temp("war_biwu")+
                               "���䣬�����Ƿֳ�ʤ����˵��!\n");
        callname = RANK_D->query_respect(obj);
        callme = RANK_D->query_self(me);
         if(!obj->query_temp("war_ask"))
            {
           me->set_temp("war_ask",obj->name());
          call_out("war_time", 60, me);
         message_vision("\n$N����$n����˵������" 
                  + callme + "����������"+callname+"�̸ֽ��У���ͽ̣���\n\n", me, obj);
        tell_object(obj,"�����ͬ��������� biwu "+me->query("id")+" ָ��!\n");
            }
        else
            {
           message_vision("\n$N���˵�ͷ����$n˵������" 
                    + callname + "��Ȼ����"+callme+"���㣡��\n\n", me, obj);

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
           write("�Է�û��Ӧ��ı���Ҫ��!\n");
         me->delete_temp("war_ask");
         return 1;
}
int help(object me)
{
  write(@HELP
 ָ���ʽ : biwu <����>  || biwu cnacel (ֹͣ������˱���)

 ���ָ�������ڱ��䳡����Ҽ�ı�����衣

 �������ָ��: fushu

HELP
    );
    return 1;
}
 
