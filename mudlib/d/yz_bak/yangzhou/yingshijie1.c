//Mr.music  yangzhou's ���н� 1

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "���н�");
        set("long", @LONG
	���������ݳǵ�һ������ϣ������������У������������ؽֱ�
���Ǹ�����̼ҡ����̺�С������������������·�˲��ϣ�����ʱ���η�
���У��������Ե������ε������������н֣��������ǳ��е������ˡ�

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
              __DIR__"npc/tiaofu" : 2,
        ]));

        set("exits", ([
              "north" : __DIR__"shizhongxin",
              "south" : __DIR__"yingshijie2",
                     ]));
        setup();
        replace_program(ROOM);
}

