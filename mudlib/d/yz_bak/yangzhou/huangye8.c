//music  yangzhou's ��Ұ 8

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "��Ұ");
        set("long", @LONG
	�������ޱߵĻ�Ұ�أ���������Ӱ��Ҳ���������������ǵ�����һ
�����硣һ������įӿ����ͷ���㲻�ɵļӿ��˲�����ǰ����һ��Сɽ��
ɽ����Լ������Ժ������

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
        //      __DIR__"obj/box" : 1,
        ]));

        set("exits", ([
              "up" : __DIR__"damingsi",
              "east" : __DIR__"huangye7",
                     ]));
        setup();
        replace_program(ROOM);
}

