//Mr.music  yangzhou's Ƥ�н� 3

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "Ƥ�н�");
        set("long", @LONG
	�����ǳǱ����--Ƥ�н֣����������ؽֶ��������ľ�¥����ݣ�
�����ֱ���Ϊ����ʳ�֡����ؽ�ʳƷ������Ŀ��������������˱ǣ��㲻��
�����ķ����˽Ų��������ǳ�������һ�Ҿ�¥--���¾�¥��ֻ��¥������
���ɷ����д�š�������������ҹ  �������������ݡ���

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
        //      __DIR__"obj/box" : 1,
        ]));

        set("exits", ([
              "south" : __DIR__"pishijie2",
              "north" : __DIR__"beimen",
              "west"  : __DIR__"startroom",
              "east"  : __DIR__"shuchang",
                     ]));
        setup();
        replace_program(ROOM);
}

