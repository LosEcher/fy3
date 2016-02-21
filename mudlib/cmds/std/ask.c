// ask.c

#include <ansi.h>

inherit F_CLEAN_UP;

string *msg_dunno = ({
	"$nҡҡͷ��˵����û��˵����\n",
	"$n�����۾�����$N����Ȼ��֪��$P��˵ʲ�ᡣ\n",
	"$n�����ʼ磬�ܱ�Ǹ��˵���޿ɷ�档\n",
	"$n˵������....���ҿɲ��������������ʱ��˰ɡ�\n",
	"$n����һ�����˵�����Բ������ʵ�����ʵ��û��ӡ��\n"
});

int main(object me, string arg)
{
	string dest, topic, msg;
	object ob,obj;
	mapping inquiry;

	seteuid(getuid());

	if( !arg || sscanf(arg, "%s about %s", dest, topic)!=2 )
		return notify_fail("��Ҫ��˭ʲ���£�\n");

	if( !objectp(ob = present(dest, environment(me))) )
		return notify_fail("����û������ˡ�\n");

	if( !ob->is_character() ) {
		message_vision("$N����$n��������....\n", me, ob);
		return 1;
	}

	if( !ob->query("can_speak") ) {
		message_vision("$N��$n�����йء�" + topic + "������Ϣ������$p��Ȼ�������˻���\n", me, ob);
		return 1;
	}

	if( !INQUIRY_D->parse_inquiry(me, ob, topic) )
		message_vision("$N��$n�����йء�" + topic + "������Ϣ��\n", me, ob);

	if( userp(ob) ) return 1;
	if( !living(ob) ) {
		message_vision("���Ǻ���Ȼ�ģ�$n���ڵ�״��û�а취��$N�κδ𸲡�\n",
			me, ob);
		return 1;
	}
	if (obj=present("shen zhi",me))  {
		if (ob->query("name")==obj->query("who1/name")&&topic==obj->query("what"))  {
    message_vision(CYN"$N˵��:����������"+obj->query("who2/name")+"("+
    obj->query("who2/id")+")֪��!\n"NOR,ob);
	return 1;
	      }
if (ob->query("name")==obj->query("who2/name")&&topic==obj->query("what"))   {
    message_vision(CYN"$N˵��:�������������...����,���...���.....\n"NOR,ob);
    write("�����������ˣ�����ȥ��ּ��!\n");
    me->delete("xxy/quest");
obj->set("who2/done",1);
        return 1;
       }
     }
	if( msg = ob->query("inquiry/" + topic) ) {
		if( stringp(msg) ) {
			message_vision( CYN "$N˵����" + msg + "\n" NOR, ob);
			return 1;
		}
	} else
		message_vision(msg_dunno[random(sizeof(msg_dunno))], me, ob);

	return 1;
}

int help(object me)
{
   write( @HELP
ָ���ʽ: ask <someone> about <something>

���ָ���ڽ���ʱ����Ҫ, ͨ��������ɴ�һָ�����
��ý�һ������Ѷ��
HELP
   );
   return 1;
}
