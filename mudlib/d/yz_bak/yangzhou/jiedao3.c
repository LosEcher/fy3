// Mr.music  yangzhou's �ֵ� 3

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "�ֵ�");
        set("long", @LONG
	���������ݳǶ���һ��С���ϣ��򶫾������ݳǵĶ����ˡ�
����������Ľ�Զ��ƽ�յ�Ҳ�徲�������Ǵ��˺ӣ�����С�����ţ�
���Ƿ����Ķ��ؽ��ˡ�������һ����վ��

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
        //      __DIR__"obj/box" : 1,
        ]));

        set("exits", ([
              "south" : __DIR__"yizhan",
              "west" : __DIR__"xiaodongmenqiao",
              "east" : __DIR__"dongmen",
                     ]));
        setup();
        replace_program(ROOM);
}

