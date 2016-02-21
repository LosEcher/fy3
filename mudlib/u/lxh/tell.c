//��ң�� 1.0 BY LXH 1:49 99-1-2
// tell.c

#include <ansi.h>
#include <net/dns.h>
#include "/cmds/std/block_tell.h";
#define NEW_PERIOD 32400

inherit F_CLEAN_UP;

int help(object me);

   void create() {seteuid(getuid());}

int main(object me, string arg)
{
   string target, msg, mud;
   object obj;
   int idle;

   if( !arg || sscanf(arg, "%s %s", target, msg)!=2 ) return help(me);
//        if((int)me->query("mud_age") < NEW_PERIOD)
//                return notify_fail("��Ŀǰ��ʱֻ��ʹ�ã�say��Ƶ����������\n");


   if( sscanf(target, "%s@%s", target, mud)==2 ) {
     GTELL->send_gtell(mud, target, me, msg);
     write("��·ѶϢ���ͳ�������Ҫ�Ժ���ܵõ���Ӧ��\n");
     return 1;
   }

        if(!block_tell(me)) return 1;

   obj = find_player(target);
   if(!obj || !me->visible(obj)) return notify_fail("û������ˡ�\n");

   if( obj->query("env/notell") && (!wizardp(me))  )
        {
         if ( stringp(obj->query("env/notell")) )
         write( GRN "�Զ�Ӧ������㣺"+obj->query("env/notell")+"\n" NOR );
         else write( GRN "�Զ�Ӧ������㣺����æ���أ��Ժ���̸��\n" NOR);
         return 1;
        }

   if( obj->query_temp("netdead") )
          return notify_fail (GRN+ obj->name(1)+"������...�����ղ��������Ϣ�ˡ�\n" NOR);
        idle = query_idle(obj) /60;

   if( idle > 1 )
                write( sprintf(GRN"����%s�Ѿ��������� %d ���ӣ����ܲ������ϻش���Ļ���\n"NOR,
                        gender_pronoun(obj->query("gender")),
                        idle) );    
     
   write(HIG "�����" + obj->name(1) + "��" + msg + "\n" NOR);
  tell_object(obj, sprintf( HIG "%s�����㣺%s\n" NOR,
     me->name(1)+"("+me->query("id")+")", msg));

   obj->set_temp("reply", me->query("id"));
   return 1;
}

string remote_tell(string cname, string from, string mud, string to, string msg)
{
   object ob;

   if( ob = find_player(to) ) {
           if(wizardp(ob) && ob->query("env/invisibility"))
       return "�����Ҳ�������ˡ�"; //respond no such user.

           if( ob->query("env/block_tell") ) return
       ob->query("name")+"���ڲ�����κ���˵����";

                if(!living(ob) || ob->query_temp("netdead")) 
             return ob->query("name")+"������������˵�Ļ���\n";

     if( cname )
        tell_object(ob, sprintf(HIG "%s(%s@%s)�����㣺%s\n" NOR,
          cname, capitalize(from), mud, msg ));
     else
        tell_object(ob, sprintf(HIG "%s@%s �����㣺%s\n" NOR,
          capitalize(from), mud, msg ));
     ob->set_temp("reply", from + "@" + mud);
     return ob->query("name")+"�յ��������Ϣ��";  
     // if succeed, return target's name.
   } else
     return "�����Ҳ�������ˡ�";
}

int help(object me)
{
   write(@HELP
ָ���ʽ��tell <ĳ��> <ѶϢ>
          tell <ĳ��>@<Mudname> <ѶϢ>

����������ָ��������ط���ʹ����˵����
Ҳ����ͬ����INTERNET�ϵ�MUD��Ϸ�����˵����

�������ָ�reply, mudlist
HELP
   );
   return 1;
}


