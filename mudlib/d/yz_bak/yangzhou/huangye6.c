//music  yangzhou's ��Ұ 6

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "��Ұ");
        set("long", @LONG
	�������ޱߵĻ�Ұ�أ���������Ӱ��Ҳ���������������ǵ�����һ
�����硣һ������įӿ����ͷ���㲻�ɵļӿ��˲�������ԶԶ��ȥ��һ
������ɫ��ʯ�������Ǵ������µ��������ˣ�����ͨ�����ݳǡ�

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
        //      __DIR__"obj/box" : 1,
        ]));

        set("exits", ([
              "south" : __DIR__"24qiao",
              "north" : __DIR__"huangye7",
                     ]));
        setup();
        replace_program(ROOM);
}

