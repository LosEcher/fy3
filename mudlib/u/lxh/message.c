// message.c

#include <ansi.h>
#include <dbase.h>

#define MAX_MSG_BUFFER 500

static string *msg_buffer = ({});

void receive_message(string msgclass, string msg)
{
        string subclass, *ch;

        if( !interactive(this_object()) ) {
                this_object()->relay_message(msgclass, msg);
                return;
        }

        if( sscanf(msgclass, "%s:%s", subclass, msgclass)==2 ) {
                switch(subclass) {
                        case "channel":
                                if( !pointerp(ch = query("channels"))
                                ||      member_array(msgclass, ch)==-1 )
                                        return;
                                break;
                        case "outdoor":
                                if( !environment() || !environment()->query("outdoors") )
                                        return;
                                break;
                        default:
                                error("Message: Invalid Subclass " + subclass + ".\n");
                }
        }

        if( query_temp("block_msg/all") || query_temp("block_msg/" + msgclass) )
                return;

        if( in_input(this_object()) || in_edit(this_object()) ) {
                if( sizeof(msg_buffer) < MAX_MSG_BUFFER )
                        msg_buffer += ({ msg });
        } else
                receive( msg );
}


void write_prompt()
{
        int env;
        string prompt;
        object me;
        me=this_player(1);
        if( sizeof(msg_buffer) ) {
                receive(BOLD "[����ʱ�ݴ�ѶϢ]\n" NOR);
                for(int i=0; i<sizeof(msg_buffer); i++)
                        receive(msg_buffer[i]);
                msg_buffer = ({});
        }
        if(intp(me->query("env/prompt")))
        {
                env=(int)me->query("env/prompt");
                switch(env)
                {
                case 1:
                        env=(int)me->query("env/time_format");
                        prompt=HIY"["+HIW+
                                "/cmds/usr/ctime"->chinese_time(env,(string)localtime(time()))
                                +HIY"]"NOR;
                        break;
                case 2:
                        prompt=HIY"["+HIW+"��:"+me->query("kee")+"|��:"+me->query("gin")+"|��:"+me->query("sen")+""+HIY+"]"NOR;
                        break;

                case 3:
                        if(!stringp(prompt=me->query_temp("reply")))
                                prompt=HIY"> "NOR;
                        else
                                prompt=HIY"["+HIW+prompt+HIY"]"NOR;
                        break;
                default:
                        if(!stringp(prompt))
                                prompt=HIY"> "NOR;
                }
        }
        else
                prompt=me->query("env/prompt");
        write(prompt);
}
void receive_snoop(string msg)
{
        receive("%" + msg);
}

