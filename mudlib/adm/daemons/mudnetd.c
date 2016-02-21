// by musix 

#include <mudlib.h>
#include <socket_err.h>
#include <net/config.h>
#include <net/daemons.h>
#include <net/dns.h>
#include <net/socket.h>
#include <net/services.h>
#include <net/macros.h>

// �Լ������Լ�MUD��CHANNEL����������ֵ
#define VERSION "Ver 1.06  03.25"
#define CHANNEL "sys"
#define MSG_CHANNEL "sys"
#define CHAT_CHANNEL "chat"
#define ATT_CHANNEL "chat"
#define I_CHANNEL "chat"
#define EVERY 1

#define IP "202.102.16.7"
#define USER "txjh"
#define PASSWD "killu"
#define TIMEOUT 30
#define SEND_USERLIST 30

inherit F_DBASE;

void init_mudnet();
void link_mudsrv();
void read_sock(int, mixed);
void close_sock(int);
void write_sock(int);
void add_users();
int  add_user(string);
int  remove_user(string);
int  nchat(string , string );
int  nemote(string, string);
int  ichat(string , string );
int  iemote(string, string);

int s=-1;   // socket 

void read_sock(int s, mixed msg)
{
int offset;
string chat_string;
string chat_id;
string chat_mud;
string chat_msg;

set("alive",1);  // set alive flag , else reboot_mudnet

if( ( (int)query("net_login")==0 ) 
             &&   ( (int)query("net_wait")==0 )  && 
                              ( (int)query("net_ok")!=0 ) )

 {
  if( (offset=strsrch(msg,"MS$_MUD_ID"))!=-1 )
    {
    set("net_input_id",1);
    CHANNEL_D->do_channel( this_object(), CHANNEL,
        sprintf("%s","�ȴ������û�����"));
    }
  if( (offset=strsrch(msg,"MS$_MUD_PASSWD"))!=-1 )
    {
    set("net_input_pwd",1);
    CHANNEL_D->do_channel( this_object(), CHANNEL,
        sprintf("%s","�ȴ��������롣"));
    }
 }


if( ( (int)query("net_link")!=0) && 
                 ((int)query("net_wait")!=0))
 {
  if( (offset=strsrch(msg,"MS$_OK"))!=-1) 
    {
    set("net_login",1);
    CHANNEL_D->do_channel( this_object(), CHANNEL,
    sprintf("%s","��������������"));
    }
 }

if( (offset=strsrch(msg,"MS$_MSG"))!=-1 )      // send MSG to all mud
  {
    chat_string= msg[(offset+4)..strlen(msg)];
    if( strsrch(chat_string,"\n")!=-1 )
      {
       sscanf(chat_string,"%s\n%s",chat_msg,chat_id);
      }
    else chat_msg=chat_string;
    CHANNEL_D->do_channel( this_object(), MSG_CHANNEL,
        sprintf( "%s", chat_msg  )   );
  //  return;
  }

if( (offset=strsrch(msg,"MS$_ERR"))!=-1 )      // display ERR msg
  {
    chat_string= msg[(offset+4)..strlen(msg)];
    if( strsrch(chat_string,"\n")!=-1 )
      {
       sscanf(chat_string,"%s\n%s",chat_msg,chat_id);
      }
    else chat_msg=chat_string;
    CHANNEL_D->do_channel( this_object(), CHANNEL,
        sprintf("%s", chat_msg ));
  //  return;
  }


if( (offset=strsrch(msg,"MS$_CHAT"))!=-1 )      // display chat msg
  {
    chat_string=msg[(offset+10)..strlen(msg)];
    if( strsrch(msg,"\n")!=-1 )
      {
       sscanf(chat_string,"%s\n%s",chat_string,chat_id);
      }
    sscanf(chat_string,"%s@%s %s",chat_id,chat_mud,chat_msg);
    CHANNEL_D->do_channel( this_object(), CHAT_CHANNEL,
        sprintf("%s@%s: %s", chat_id,chat_mud,chat_msg  ) );
    return;
  }
if( (offset=strsrch(msg,"MS$_ICHAT"))!=-1 )      // display chat msg
  {
    chat_string=msg[(offset+11)..strlen(msg)];
    if( strsrch(msg,"\n")!=-1 )
      {
       sscanf(chat_string,"%s\n%s",chat_string,chat_id);
      }
    sscanf(chat_string,"%s@%s %s",chat_id,chat_mud,chat_msg);
    CHANNEL_D->do_channel( this_object(), CHAT_CHANNEL,
        sprintf("%s@%s: %s", chat_id,chat_mud,chat_msg  ) );
    return;
  }

if( (offset=strsrch(msg,"MS$_EMOTE"))!=-1 )      // display emote msg
  {
    chat_string=msg[(offset+11)..strlen(msg)];
    if( strsrch(msg,"\n")!=-1 )
      {
       sscanf(chat_string,"%s\n%s",chat_string,chat_id);
      }
    sscanf(chat_string,"%s@%s %s",chat_id,chat_mud,chat_msg);
    CHANNEL_D->do_channel( this_object(), CHAT_CHANNEL,
        sprintf("%s",chat_msg  ) );
    return;
  }
if( (offset=strsrch(msg,"MS$_IEMOTE"))!=-1 )      // display emote msg
  {
    chat_string=msg[(offset+12)..strlen(msg)];
    if( strsrch(msg,"\n")!=-1 )
      {
       sscanf(chat_string,"%s\n%s",chat_string,chat_id);
      }
    sscanf(chat_string,"%s@%s %s",chat_id,chat_mud,chat_msg);
    CHANNEL_D->do_channel( this_object(), CHAT_CHANNEL,
        sprintf("%s",chat_msg  ) );
    return;
  }
if( (offset=strsrch(msg,"MS$_ATT"))!=-1 )      // display attention msg
  {
    chat_string= msg[(offset+4)..strlen(msg)];
    if( strsrch(chat_string,"\n")!=-1 )
      {
       sscanf(chat_string,"%s\n%s",chat_msg,chat_id);
      }
    else chat_msg=chat_string;
    CHANNEL_D->do_channel( this_object(), ATT_CHANNEL,
        sprintf("%s", chat_msg ));
//    return;
  }


if( (offset=strsrch(msg,"MS$_SIG"))!=-1 )      // display signal msg
  {
    chat_string= msg[(offset+4)..strlen(msg)];
    if( strsrch(chat_string,"\n")!=-1 )
      {
       sscanf(chat_string,"%s\n%s",chat_msg,chat_id);
      }
    else chat_msg=chat_string;
    CHANNEL_D->do_channel( this_object(), CHANNEL,
        sprintf("%s", chat_msg ));
 //   return;
  }

}

void close_sock(int i)
{
if((int) query("close_again") !=0 ) return;
set("close_again",1);
    CHANNEL_D->do_channel( this_object(), ATT_CHANNEL,
        sprintf("%s","ATT: ���������жϡ�"));
if( s>=0) socket_close(s);
s=-1;
set("net_link",0);
set("net_login",0);
set("net_wait",0);
set("net_ok",1);
set("alive",1);
set("net_input_id",0);
set("net_input_pwd",0);
set("net_try",0);
set("net_ready",0);
CHANNEL_D->do_channel( this_object(), CHANNEL,
    sprintf("%s","�����жϡ�30������������������̡�"));
remove_call_out("link_mudsrv");
call_out("link_mudsrv",30*EVERY);
set("close_again",0);
}

void write_sock(int i)
{
}

void create()
{
seteuid(getuid());
init_mudnet();
}

void reboot_mudnet()
{
CHANNEL_D->do_channel( this_object(), CHANNEL,
    sprintf("%s","���������������̡�"));
close_sock(s);
}

void init_mudnet()
{
if( (int) query("running") !=0) return;
set("running",1);
s=-1;
set("channel_id","��");
set("id","mudnet");
set("name","�������");
set("net_link",0);
set("net_login",0);
set("net_input_id",0);
set("net_input_pwd",0);
set("net_wait",0);
set("alive",1);
set("net_ok",1);
set("net_try",0);
set("close_again",0);
set("net_ready",0);
remove_call_out("link_mudsrv");
call_out("link_mudsrv",3*EVERY);
CHANNEL_D->do_channel( this_object(), CHANNEL,
    sprintf("%s","������������"));
}

void link_mudsrv()
{
int i,j;
if( s< 0) 
   {
    s=socket_create(STREAM,"read_sock","close_sock");
    if( s<0) {remove_call_out("link_mudsrv");
             call_out("link_mudsrv",60*EVERY); }
    if( s>=0)
      {
       CHANNEL_D->do_channel( this_object(), CHANNEL,
         sprintf("%s","��ʼ��������"));
       remove_call_out("link_mudsrv");
       call_out("link_mudsrv",3*EVERY); 
       return;
      }
    return;
  }
if( (s>=0) && ((int) query("net_link")==0) )
  {
  
  if(socket_connect(s,IP+" 2911","read_sock","write_sock") >=0 )
    {
     set("net_link",1);
CHANNEL_D->do_channel( this_object(), CHANNEL,
    sprintf("%s","���ӵ� MUD server: "+IP));
     remove_call_out("link_mudsrv");
     call_out("link_mudsrv",5*EVERY);
     return;
    }
    if( (int) query("net_try")>1 ) 
      {
        remove_call_out("close_sock");
        call_out("close_sock",3*EVERY,s);
        return;
      }
CHANNEL_D->do_channel( this_object(), CHANNEL,
    sprintf("%s","��������ʧ�ܣ�30������ԡ�"));
    add("net_try",1);
  remove_call_out("link_mudsrv");
  call_out("link_mudsrv",30*EVERY);
  return;
  }

if( (int) query("net_login")==0)   // if login ok
   {
    if( (int) query("net_ok")==0 )  // if prompt not return after 30
      {
        remove_call_out("close_sock");
       call_out("close_sock",5*EVERY,s); // clear all & restart
       return;
      }
    if( (int) query("net_wait")==0)
     {
     if( (int) query("net_input_id")!=0 )
         {
         CHANNEL_D->do_channel( this_object(), CHANNEL,
           sprintf("%s","���͵�¼�û��� ... "));
        set("net_input_pwd",0);
        socket_write(s,USER);
     //   socket_write(s,"\n");
        set("net_input_id",0);
        remove_call_out("link_mudsrv");
        call_out("link_mudsrv",5*EVERY);
         return;
          } 
    //     CHANNEL_D->do_channel( this_object(), CHANNEL,
      //     sprintf("%s","loop ... "));
       if( (int) query("net_input_pwd")!=0 )
          {
         CHANNEL_D->do_channel( this_object(), CHANNEL,
           sprintf("%s","���͵�¼���� ... "));
        socket_write(s,PASSWD);
        socket_write(s,"\n");
        set("net_wait",1);
          }
        remove_call_out("link_mudsrv");
        call_out("link_mudsrv",5*EVERY);
     //   }
        return;
     }
   set("net_ok",0);
   remove_call_out("link_mudsrv");
   call_out("link_mudsrv",TIMEOUT*EVERY); // wait MS$_OK>  
CHANNEL_D->do_channel( this_object(), CHANNEL,
    sprintf("%s","�ȴ��Է�Ӧ��"));
   return;
   }

if( (int) query("net_wait") !=0 ) 
 {
  set("net_ready",1);
  CHANNEL_D->do_channel( this_object(), CHANNEL,
                       sprintf("%s","����״̬����"));
  add_users();
 }
set("net_wait",0);
socket_write(s,"\n");
socket_write(s,"\n");
if( (int) query("alive") ==0 )
  {
   remove_call_out("reboot_mudnet");
   call_out("reboot_mudnet",5*EVERY);
   return ;
  }
set("alive",0);                    // check if line broken
remove_call_out("link_mudsrv");
call_out("link_mudsrv",120*EVERY);  //check normal status
return;
}

void add_users()
{
int i;
int tt=0;
int gender=0;
object *list;
string tttt;
if( (int) query("net_ready")==0 ) return ;
list= users();
i=sizeof(list);
tttt="add_users";
while(i>0)
  {
   i--;
   gender=0;
   if( !environment(list[i]) ) continue;

   if( (string)list[i]->query("gender")=="����") gender=1;
   if( (string)list[i]->query("gender")=="Ů��") gender=-1;
   tttt+=sprintf(" %s@%s@%d@%d",  (string) list[i]->query("id"), 
    (string) list[i]->query("name"),(int) list[i]->query("age"), gender );
   tt++;
  }

tttt+="\n";
socket_write(s,tttt);
// CHANNEL_D->do_channel( this_object(), CHANNEL,
//    sprintf("%s %d","���� player list , ��",tt ));
}

int add_user(string ui)
{
string tttt;
tttt="add_user ";
if( (int) query("net_ready")==0 ) return 0;
tttt+=ui;
tttt+="\n";
socket_write(s,tttt);
return 1;
}

int remove_user(string ui)
{
string tttt;
tttt="remove_user ";
if( (int) query("net_ready")==0 ) return 0;
tttt+=ui;
tttt+="\n";
socket_write(s,tttt);
return 1;
}

int nchat( string user_id, string chat_msg)
{
string message;
string mmmm;
if( (int) query("net_ready")==0 ) return 0;
sscanf(chat_msg,"%s\n%s",message,mmmm);
if( strlen(message) < 1) message=chat_msg;
socket_write(s,"chat "+user_id+" "+message);
return 1;
}


int nemote( string user_id, string chat_msg)
{
string message;
string mmmm;
if( (int) query("net_ready")==0 ) return 0;
sscanf(chat_msg,"%s\n%s",message,mmmm);
if( strlen(message) < 1) message=chat_msg;
socket_write(s,"chat* "+user_id+" "+message);
return 1;
}

int iemote( string user_id, string chat_msg)
{
string message;
string mmmm;
if( (int) query("net_ready")==0 ) return 0;
sscanf(chat_msg,"%s\n%s",message,mmmm);
if( strlen(message) < 1) message=chat_msg;
socket_write(s,"ichat* "+user_id+" "+message);
return 1;
}

int ichat( string user_id, string chat_msg)
{
string message;
string mmmm;
if( (int) query("net_ready")==0 ) return 0;
sscanf(chat_msg,"%s\n%s",message,mmmm);
if( strlen(message) < 1) message=chat_msg;
socket_write(s,"ichat "+user_id+" "+message);
return 1;
}

