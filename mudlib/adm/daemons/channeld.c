// channeld.c
// music 12.13

#include <ansi.h>
#include <net/dns.h>
#include <net/macros.h>
inherit F_DBASE;

mapping channels = ([
        "sys":  ([      "msg_speak": HIB "��ϵͳ��%s��%s\n" NOR, "wiz_only": 1 ]),
        "wiz":  ([      "msg_speak": HIY "����ʦ��%s��%s\n" NOR, "wiz_only": 1 ]),
//add Lxh@txjh 0-2-13 0:34 ��֪���ܲ�������        
        "txjh":   ([   "msg_speak": HIR "����Ѫ������%s��%s\n" NOR,
          "msg_emote": HIR "����Ѫ������%s\n" NOR,
          "intermud": GCHANNEL, "channel": "xyj",
          "filter": (:$1["MUDLIB"]=="Tie xue jiang hu" :) ]),
        "gwiz": ([      "msg_speak": HIG "��������ʦ��%s��%s\n" NOR,
                        "msg_emote": HIG "��������ʦ��%s %s.\n" NOR,
                        "wiz_only": 1, "intermud": GWIZ, "channel": "CREATOR",
                                "filter": 1 ]),
   "es":   ([   "msg_speak": HIY "����̶���%s��%s\n" NOR,
          "msg_emote": HIY "����̶���%s\n" NOR,
          "intermud": GCHANNEL, "channel": "es",
          "filter": 1 ]),
        "twiz": ([      "msg_speak": HIW "��̨����ʦ��%s��%s\n" NOR,
                                "msg_emote": HIW "��̨����ʦ��%s %s.\n" NOR,
                                "wiz_only":1, "intermud": GCHANNEL, 
"channel": "twiz",
                                "filter": (: $1["HOSTADDRESS"][0..2]=="140" 
:) ]),

"chat": ([      "msg_speak": HIC "�����ġ�%s��%s\n" NOR ]),
"rumor":(["msg_speak": YEL "��ҥ�ԡ�%s��%s\n" NOR,"anonymous": "ĳ��"]), ]);

void create()
{
        seteuid(getuid()); // This is required to pass intermud access check.
        set("channel_id", "���߾���");
}

varargs int do_channel(object me, string verb, string arg, int emote)
{
        object *ob;
        string *tuned_ch, who , real_who;
        int len;

        if( !mapp(channels) || undefinedp(channels[verb]) )
                return 0;

        if( userp(me) ) {
	if( me->query("bad_chat")) return notify_fail("�������Ȩ���ѱ��رա�\n");
                if(channels[verb]["wiz_only"] && !wizardp(me) )
                        return 0;

                if( arg==(string)me->query_temp("last_channel_msg") )
                        return 
notify_fail("�ý�̸Ƶ��˵���벻Ҫ�ظ���ͬ��ѶϢ��\n");

         // If we speaks something in this channel, then must tune it in.
                tuned_ch = me->query("channels");
                if( !pointerp(tuned_ch) )
                        me->set("channels", ({ verb }) );
                else if( member_array(verb, tuned_ch)==-1 )
                        me->set("channels", tuned_ch + ({ verb }) );
        }

        if( channels[verb]["anonymous"] )
                who = channels[verb]["anonymous"];
        else if( userp(me) || !stringp(who = me->query("channel_id")) )  {
        	who = me->query("name");
     if(me->query("id")) 
       who=who+"(" + capitalize(me->query("id")) + ")";  }

        // Ok, now send the message to those people listening us.
ob = filter_array(users(),"filter_listener",this_object(),channels[verb]);
           if( !arg ) arg = "...";
           len=strlen(arg);
   while(len>1 && arg[len-1]=='\n')
       arg=arg[0..((len--)-2)];
        message( "channel:" + verb,
                sprintf( emote ? channels[verb]["msg_emote"] : 
channels[verb]["msg_speak"], who, arg ), ob );
 if( channels[verb]["anonymous"] )
    {
     real_who =me->query("name") + "(" + capitalize(me->query("id")) + ")";
        message( "channel:sys",
                sprintf( emote ? channels[verb]["msg_emote"] :
channels[verb]["msg_speak"], real_who, arg ), ob );

    }
        if( arrayp(channels[verb]["extra_listener"]) ) {
                channels[verb]["extra_listener"] -= ({ 0 });
                if( sizeof(channels[verb]["extra_listener"]) )
           channels[verb]["extra_listener"]->relay_channel(me, verb, arg);
        }
        
        if( !undefinedp(channels[verb]["intermud"])
        &&      base_name(me) != channels[verb]["intermud"] )
                channels[verb]["intermud"]->send_msg(
     channels[verb]["channel"], me->query("id"), me->name(1), arg, 0,
                        channels[verb]["filter"] );
        
        if( userp(me) ) 
                me->set_temp("last_channel_msg", arg);
        return 1;
}

int filter_listener(object ppl, mapping ch)
{
        // Don't bother those in the login limbo.
        if( !environment(ppl) ) return 0;
        
        if( ch["wiz_only"] ) return wizardp(ppl);
        return 1;
}

void register_relay_channel(string channel)
{
        object ob;

        ob = previous_object();
        if( undefinedp(channels[channel]) || !ob) return;
        if( arrayp(channels[channel]["extra_listener"]) ) {
                if( member_array(ob, channels[channel]["extra_listener"]) >=0 
) return;
                channels[channel]["extra_listener"] += ({ ob });
        } else
                channels[channel]["extra_listener"] = ({ ob });
}
 
