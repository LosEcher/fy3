//Mr.music  yangzhou's ���н� 2

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "���н�");
        set("long", @LONG
	�������ڳ������нֵ��жΣ������������У������������ؽֱ�
���Ǹ�����̼ҡ����̺�С������������������·�˲��ϣ�����ʱ���η�
���У��������Ե������ε���

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
              __DIR__"npc/dipi" : 1,
        ]));

        set("exits", ([
              "north" : __DIR__"yingshijie1",
              "south" : __DIR__"yingshijie3",
              "east"  : __DIR__"zahuopu",
                     ]));
        setup();
        replace_program(ROOM);
}

