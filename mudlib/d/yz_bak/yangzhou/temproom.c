// music yangzhou's ��ʱͨ��

inherit ROOM;

void create()
{
  set ("short", "��ʱͨ��");
  set ("long", @LONG
	��ʱ������䣬������

LONG
    );

  set("objects", ([ 
                   __DIR__"npc/weichunhua" : 1,
                 ]));
  set("outdoors", "/d/yangzhou");
  set("exits", ([  
    "west" : __DIR__"yz-x2",
    "south" : __DIR__"startroom",
//    "north" : __DIR__"",
]));
  setup();
}
