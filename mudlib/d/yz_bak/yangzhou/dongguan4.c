// Mr.music  yangzhou's ���ؽ� 4

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "���ؽ�");
        set("long", @LONG
	���������ݳ�����Ĵ���ϣ��ؽֵ����������ֳ̼�Ⱥ������
���ﳵ���������������У�ҹ�����ǹ���£��ƻ�ͨ���������ǳ��е���
Ҫ����ҵ���Ļ����ֽ֣����С�����ʮ������·�������ơ�

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
        //      __DIR__"obj/box" : 1,
        ]));

        set("exits", ([
              "west" : __DIR__"shizhongxin",
              "east" : __DIR__"xiaodongmenqiao",
                     ]));
 //       create_door("northwest", "����", "southeast", DOOR_CLOSED);
        setup();
        replace_program(ROOM);
}

