// music yangzhou's �˺� 1

inherit ROOM;

void do_hua();
void go_ahead(object);

void create()
{
  set ("short", "�˺�");
  set ("long", @LONG
	�㷺�����˺��ϣ����ڴ�ͷ��΢��ϰϰ�����±̲���������֪����
������һ������ڣ�����ԥ��һ�£�С��������ǰ�ߡ�������������ֻԽ��
Խ�٣����������ޱߵĿ�Ұ��

LONG
    );

//  set("objects", ([ 
//                   __DIR__"npc/shusheng" : 1,
//                 ]));
  set("outdoors", "/d/yangzhou");
  set("exits", ([  
//    "west" : __DIR__"yumatou",
//    "south" : __DIR__"changjiangkou",
//    "east"  : __DIR__"yunhe2",
]));


  setup();
}

void init()
{
    call_out("go_ahead",7,this_player());
    add_action("do_hua", "hua");
}

int do_hua()
{
tell_object( this_player() ,"����������һ��·������󺹡�\n" );
this_player()->add("kee",-10);
return 1;
}


void go_ahead(object me)
{
if( (me->query_temp("yz_sz")) ==2 )
    {
    me->move("/d/yangzhou/yumatou");
    me->set_temp("yz_sz",0);
    me->destruct("/d/yangzhou/npc/obj/chuanjiang");
    say ( me->query("name")+"�źý������˰�.\n");
    return;
    }
if( (me->query_temp("yz_sz")) ==1 )
    {
    me->move("/d/yangzhou/yunhe2");
    return;
    }
    // if not 1,2 ?
    me->move("/d/yangzhou/yumatou");
return;
}

