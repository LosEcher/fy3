//music  yangzhou's ��Ұ 3

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "��Ұ");
        set("long", @LONG
	�������ޱߵĻ�Ұ�أ���������Ӱ��Ҳ���������������ǵ�����һ
�����硣һ������įӿ����ͷ���㲻�ɵļӿ��˲�����

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
        //      __DIR__"obj/box" : 1,
        ]));

        set("exits", ([
              "east" : __DIR__"huangye4",
              "west" : __DIR__"huangye2",
                     ]));
 //       create_door("northwest", "����", "southeast", DOOR_CLOSED);
        setup();
        replace_program(ROOM);
}

