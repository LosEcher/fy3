// Mr.music  yangzhou's �ֵ� 4

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "�ֵ�");
        set("long", @LONG
	���������ݳǱ���һ��С���ϣ�����������Ľ�Զ��������徲���š�
����ͨ������������������ɽׯ��һ·�����������ﻨ�㣬�����Ŀ����ơ�
��Զ����һ�����̵�С�������������µ��������ˡ�

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
        //      __DIR__"obj/box" : 1,
        ]));

        set("exits", ([
              "north" : __DIR__"shouxihu",
              "south" : __DIR__"yz-x1",
                     ]));
        setup();
        replace_program(ROOM);
}

