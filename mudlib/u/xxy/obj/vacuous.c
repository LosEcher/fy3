#include <dbase.h>
#include <name.h>

void init()
{
   add_action("do_unwrap", "unwrap");
   add_action("do_coat", "coat");
}

string extra_long()
{
   string str;
   if (query("vacuous/status"))   
     str="���"+name()+"�ǵý�����.\n";
      else   str="���"+name()+"����.\n";
return str;
}

int do_coat(string arg)
{
        if ( !living(this_player()))
           return 1;
   if( !this_object()->id(arg) ) return 0;
   if( this_player()->is_busy() )
     return notify_fail("����һ��������û����ɡ�\n");
   if( query("vacuous/status")==1 )
     return notify_fail( "���"+name() +"�Ѿ��Ǻ���.\n");
   add("vacuous/status", 1);
     message_vision("$N��"+query("vacuous/name")+"��" + name() + "������.\n", this_player());
   if( this_player()->is_fighting() ) this_player()->start_busy(2);
   return 1;
}

int do_unwrap(string arg)
{
   if( !living(this_player()))
     return 1;
   if( !this_object()->id(arg) ) return 0;
   if( this_player()->is_busy() )
     return notify_fail("����һ��������û����ɡ�\n");
   if( query("vacuous/status")!=1 )
     return notify_fail("���"+name()+"�Ѿ�����!\n");
   message_vision("$N��" + name() + "�ϵ�"+query("vacuous/name")+"��\n", this_player());
   add("vacuous/status",-1);
   if( this_player()->is_fighting() ) this_player()->start_busy(2);
   return 1;
}
