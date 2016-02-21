// quit.c
#include <ansi.h>
#include <command.h>

inherit F_DBASE;
inherit F_CLEAN_UP;

void create() 
{
	seteuid(getuid());
	set("name", "����ָ��");
	set("id", "quit");
}

int main(object me, string arg)
{
	int i;
	object *inv, link_ob, *guards;
	string dir;
	mixed old_target;

	if( me->is_busy())
		return notify_fail("����æ�ţ���ʱ�޷��˳���Ϸ��\n");
           if( me->query_temp("start_login_time")>time())
                   return notify_fail(HIG+"�� ϵ ͳ ��"+NOR+": ������ʮ���������!\n");
	if( !wizardp(me) ) {
		inv = all_inventory(me);
		for(i=0; i<sizeof(inv); i++)
			if( !inv[i]->query_autoload() )
				DROP_CMD->do_drop(me, inv[i]);
	}
	if(me->query_temp("guarding"))
        {
          old_target = me->query_temp("guarding");
          if( objectp(old_target)){
            guards = old_target->query_temp("guarded");
            guards -= ({ me});
            old_target->set_temp("guarded", guards);
            if( living(old_target) )
            tell_object( old_target, me->name() + "�Ѿ��뿪��Ϸ, û����������!\n");
            }else if(stringp(dir = old_target)){
              guards = environment(me)->query("guarded/" + dir);
              if( arrayp(guards) ){
              guards -= ({me});
              environment(me)->set("guarded/"+dir,guards);
              }
            }           
		me->delete_temp("guarding");
         }	

	link_ob = me->query_temp("link_ob");

	// We might be called on a link_dead player, so check this.
	if( link_ob ) {

		// Are we possessing in others body ?
		if( link_ob->is_character() ) {
			write("��Ļ��ǻص�" + link_ob->name(1) + "�����ϡ�\n");
			exec(link_ob, me);
			link_ob->setup();
			return 1;
		}

		link_ob->set("last_on", time());
		link_ob->set("last_from", query_ip_name(me));
		link_ob->save();
		destruct(link_ob);
	}

	write("��ӭ�´�������\n");
	message("system", me->name() + "�뿪��Ϸ�ˡ�\n", environment(me), me);

	CHANNEL_D->do_channel(this_object(), "sys",
		me->name() + "�뿪��Ϸ�ˡ�");
	me->save();
	destruct(me);

	return 1;
}

int help(object me)
{
	write(@HELP
ָ���ʽ : quit

��������ʱ�뿪ʱ, �����ô�һָ�
HELP
    );
    return 1;
}
