/* 
LPMud Smtp Client v0.1a0
[for CCTX II by CuteRabbit Studio]

��д��1999��5��16��
���ߣ�JackyBoy(����) @ CuteRabbit Studio for CCTX II (�����ù�����)
��ҳ��http://mud.yn.cninfo.net/jackyboy
�����ʼ���jackyboy@126.com
��������������Ը���ʹ���ڷ���ҵ��MUD�У�����������������������һ���д����е���
Ѫ����Ҫ�۸����ߵ�����������������޸Ĵ�����κβ��֣�Ψһ��Ҫ�������㹫������
�ĺ�ĳ��򣬲�������������޸ı���������
------------------------------------------------------
���¼�¼��
1999��5��17�� ���������LOGIND.C��ע�Ṧ�ܣ��������������룬��������Ϣ��ʾ��ͬʱ
	�����޸�logind.c�Ļ���������Gb to Big5��ת�����漰�ļ��϶ࣺ
	/include/globals.h
	/adm/daemons/language.c /adm/etc/�µ�table�ļ�
	/adm/simul_efun/message.c
	/clone/user/ user.c login.c
	/adm/daemons/logind.c
	/adm/daemons/alias.c
	/adm/daemons/message.c
	...(������ϸ�о�)
	��֪BUG��printf����������ȷ��ʾ������ʹ��write(sprintf())��ȡ��
	JackyBoy@CuteRabbit
...
*/

/*
�ļ�����˵����
    ����ҽ���ע�Ტ����ע����Ϊ�˱��ⱻ����֪�������Ԥ������������ID��
Ӧ��������������޸��Լ��Ŀ����Ҳ����˵����˫�����¼����������趨�Ŀ���������
��ȡ�ؿ��ͬʱҲ���Լ�¼������ݣ�����������ǿ�����ȡ�ؿ��
    ����µ�¼��ʱ��Ӧ�����ÿ��temp_password���ԣ�ע��ʱ����password���ԣ�����
�ҵ�¼ʱ��������ȷ��ע����������registered���ԣ�����login ob��user ob�ﶼ���õġ�
*/
#include <ansi.h>
#include <net/dns.h>
#include <net/telnet.h>
#include <net/socket.h>
#include <net/socket_errors.h>
#include <socket_err.h>
#include <mudlib.h>

inherit ITEM;

static int my_socket,socket1,socket2;
static object me;
static int status=0;
static string smtp_ip="202.106.186.237 25";
static string smtp_domain="www.email.com.cn";
static string sender="Xyj";
static string rcpt,msg;
int write_message(string);
void tell_me(string arg)
{
        tell_object(environment(this_object()),arg);
}
void chat(string arg)
{
	//CHANNEL_D->do_channel(this_object(),"sys",arg);
	tell_me(arg);
	return;
}

void create()
{
        set_name("["+INTERMUD_NAME+"]"+"ע����", ({ "register","smtp", "telnet" }) );
        set("long",
                "�����������ӷ��ʼ�����������MUD�Ĺ��ߡ�\n");
                set_weight(3000);
                set_max_encumbrance(0);
                if( clonep() )
                        set_default_object(__FILE__);
                else {
                        set("unit", "��");
                        set("material", "unknow");
                }
        setup();
}

void init()
{       
        object ob;

        if( interactive(ob = this_player()) ) {
                add_action("close_socket","close");
                add_action("write_message","/");
                add_action("do_register","register");
                add_action("do_telnet","telnet");
                me = ob;
        }
}

int do_telnet(string arg)
{
        int err;
        if( query("connected") )        socket_close(my_socket);
        my_socket = socket_create( STREAM, "in_read_callback","in_close_callback" );
        if ( my_socket < 0 ) {
                tell_me( "Failed to create socket.\n" );
                return 1;
        }
        err = socket_connect( my_socket, arg , "read_callback","write_callback" );
        if( err==EESUCCESS ) {
                        tell_me("Connect to " + arg + "\n");
                        set("connected",1);
        }
        else
                        tell_me("Can't connect to " + arg + "\n");
        return 1;
}

int close_socket()
{
        if( query("connected") )  {
                        if( socket_close(my_socket) ) {
                                tell_me("Closed telnet socket.\n");
                                delete("connected");
                        }
                        else
                                tell_me("Close telnet socket fail.\n");
                }
        else
                tell_me("Not connected.\n");
        return 1;
}

void read_callback(int fd, mixed message)
{
    tell_me( BOLD + "��" + NOR + message );
    switch(status)
    {
    	case 0:
    		if(sscanf(message,"220%*s"))
    		{
    			status++;
    			write_message("HELO " +smtp_domain );
    			//chat("����HELO����");
    			return;
    		}
    		break;
    	case 1:
    		if(sscanf(message,"250%*s"))
    		{
    			status++;
    			write_message("MAIL FROM:<TXJH>");
    			//chat("����MAIL FROM����");
    			return ;
    		}
			break;
    	case 2:
    		if(rcpt&&sscanf(message,"250%*s"))
    		{
    			status++;
    			write_message("RCPT TO:<"+rcpt+">");
    			//chat("����RCPT TO����");
    			return ;
    		}
    		break;
    	case 3:
    		if(sscanf(message,"250%*s"))
    		{
    			status++;
    			write_message("DATA");
    			//chat("����DATA����");
    			return;
    		}
    		break;
    	case 4:
    		if(sscanf(message,"354%*s"))
    		{
    			status++;
    			if(sscanf(msg,"%*s\r\n.\r\n%*s"))
    				chat("�����Ƿ����ݣ����ܻ��޷����͡�\n");
    			log_file("sendmail","\n��ͼ��������:\n"+msg);
    			write_message(msg+"\n.\n");
    			//chat("��������");
    			return;
    		}
    		break;
    	case 5:
    		if(sscanf(message,"451%*s"))
    			chat("Smtp Server�������ݳ�������ѡ��������\n");
    		else
    			chat("ע���ż��Ѿ���ȷ������\n"+
    				"��������Ӻ��ٴ����������ա�\n\t\t\t\tLxh@TXJH\n");
    		break;    			
    }
    if(status!=5||!sscanf(message,"250%*s"))
    	chat("���ͳ���");
    status=0;
	write_message("QUIT");
	chat("�ָ�����״̬");
	close_socket();
	return ;        			
}

void write_callback(int fd)
{
        int res;
        if(query("connect"))return ;
        res = socket_write( fd,"");
        if (res == EESUCCESS || res == EECALLBACK) {
                set("connected",1);
        }
}

int write_message(string arg)
{
        if( !arg ) arg="";
        socket_write(my_socket,arg+"\n");
        return 1;
}

string make_password(string arg,string id)
{
	return id;
}

int do_register(string dest)
{
	object me,linkob;

	me=this_player(1);
	if( !dest||!sscanf(dest,"%*s@%*s.%*s") )
		return notify_fail("�����ʼ���ַ����\n");
	rcpt=dest;
	status=0;
	if(!my_socket&&do_telnet(smtp_ip)==0)
		return notify_fail("�޷������ʼ���������\n");
	//������ҵ�ע����Ϣ
	linkob=me->query_temp("link_ob");
	linkob->set("password", crypt(make_password(dest,me->query("id")),0) );
	linkob->set("email",lower_case(dest));
	me->set("startroom","/d/welcome/wel1_1");
	//����ע���ż�
	msg="\n��ã���ӭ����"+INTERMUD_NAME+"��\n"+
		"���Ѿ��ɹ����ڱ���Ϸע�ᣬ��ʹ�������ṩ�������¼���ע�ᡣ\n���ע�������ǣ�"+
		make_password(dest,me->query("id"))+"\n"
		"����㶪ʧ���ţ�����ԭ������ʱ������룬������ע�ᡣ\n"+
		CHINESE_D->chinese_time(0,(string)localtime(time()));
	msg="TO:"+dest+"\n"+
		"SUBJECT:"+INTERMUD_NAME+"ע���ż���\n"+
		"FROM:"+me->query("id")+"@"+INTERMUD_MUD_NAME+"\n"+
		"MIME-Version:1.0\n"+
		"DATE:"+time()+"\n"+
		"X-MAILER:Lpc Smtp client v0.1\n"+"\n"+
		msg;
		
//�������Щ�����ƶ���read_callback����		
/*	msg="HELO " + smtp_domain + "\n" +
        "MAIL FROM: <" + sender + ">\n" + 
        "RCPT TO: <" + dest + ">\n" +
        "DATA\n" + msg + "\n.\n" +
        "QUIT\n";
	write_message(msg);
	*/
	return 1;
}

