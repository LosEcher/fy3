//Mr.music  yangzhou's ���н� 3

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "���н�");
        set("long", @LONG
	���������ݳǵ�һ������ϣ������������У������������ؽֱ�
���Ǹ�����̼ҡ����̺�С������������������·�˲��ϣ�����ʱ���η�
���У��������Ե������ε������������н֣����Ͼ͵������ˡ�

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
             __DIR__"npc/chefu" : 1,
        ]));

        set("exits", ([
              "north" : __DIR__"yingshijie2",
              "south" : __DIR__"nanmen",
                     ]));
        setup();
        replace_program(ROOM);
}

