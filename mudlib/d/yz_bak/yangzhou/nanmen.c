// Mr.music  yangzhou's ����

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "����");
        set("long", @LONG
	����������ݳǵ����ţ���������ݳǽ����е��˳�û����̫��ȫ��
����һ�����ϣ����žͻ�رա�

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
        //      __DIR__"obj/box" : 1,
        ]));

        set("exits", ([
              "north" : __DIR__"yingshijie3",
              "south" : __DIR__"dukoulu",
                     ]));
        setup();
        replace_program(ROOM);
}

