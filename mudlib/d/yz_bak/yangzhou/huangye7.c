//music  yangzhou's ��Ұ 7

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "��Ұ");
        set("long", @LONG
	�������ޱߵĻ�Ұ�أ���������Ӱ��Ҳ���������������ǵ�����һ
�����硣һ������įӿ����ͷ���㲻�ɵļӿ��˲���������ԶԶ��ȥ��һ
������ɫ��ʯ�������Ǵ������µ��������ˣ�����ͨ�����ݳǡ�

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
        //      __DIR__"obj/box" : 1,
        ]));

        set("exits", ([
              "west" : __DIR__"huangye8",
              "south" : __DIR__"huangye6",
                     ]));
        setup();
        replace_program(ROOM);
}

