// music yangzhou's 临时通道

inherit ROOM;

void create()
{
  set ("short", "临时通道");
  set ("long", @LONG
	临时联结各间，调试用

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
