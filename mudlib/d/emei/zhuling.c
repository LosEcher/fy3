// Room: /u/xxy/room/zhuling
inherit ROOM;

void create()
{
  set ("short", "����");
  set ("long", @LONG
����ѷ�,��ǰ��һƬ�Դ����εļ�����,�峿�ĳ�¶����Ҷ����
ӯӯ����,����Ľ����������л���,һƬ����ڽ��»���,�������
����������(make)����,����,Ҳ����ժ(zhai)����Ҷ.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"yixiant",
]));
set("outdoors","/d/emei");
  setup();
}
void init()
{
	add_action("do_make", "make");
	add_action("do_zhai", "zhai");
}

int do_make(string arg)
{
    if(!arg) return 0;
    if(arg=="��")  
    {message_vision("$N��������һ������,����ҧ��һ�ѽ���ģ����\n", this_player());
clone_object("/d/emei/obj/zhujian")->move(this_player()); 
    return 1;}
    if(arg=="��")
    { message_vision("$N��������һ������,����ҧ��һ�ѵ���ģ����\n", this_player());
clone_object("/d/emei/obj/zhudao")->move(this_player());
return 1;}
return 0;
}
int do_zhai(string arg)
{    if(arg!="��Ҷ") return 0;
    message_vision("$N�¶�,�͵ش���,����'ž'��һ��,$Nˤ���ڵ�,���л�ץ��һƬ��Ҷ��\n", this_player());
clone_object("/d/emei/obj/zhuye")->move(this_player()); 
   return 1;
}
