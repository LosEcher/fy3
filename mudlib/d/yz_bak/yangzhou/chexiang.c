// music yangzhou's ������

inherit ROOM;

void do_hua();
void go_ahead(object);

void create()
{
  set ("short", "������");
  set ("long", @LONG
	���������������ڣ�������������ֱ����

LONG
    );
    set("sleep_room",1);

//  set("objects", ([ 
//                   __DIR__"npc/shusheng" : 1,
//                 ]));
  set("exits", ([  
//    "west" : __DIR__"yumatou",
//    "south" : __DIR__"changjiangkou",
//    "east"  : __DIR__"yunhe2",
]));


  setup();
}

void init()
{
    call_out("go_hankou",20,this_player());
}


void go_hankou(object me)
{
    tell_object(me,"��������㣬˵������������\n");
    me->move("/d/hankou/inn");
return;
}

