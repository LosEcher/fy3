//Mr.music  yangzhou's Ƥ�н� 1

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "Ƥ�н�");
        set("long", @LONG
	�����ǳǱ����--Ƥ�н֣����������ؽֶ��������ľ�¥����ݣ�
�����ֱ���Ϊ����ʳ�֡����ؽ�ʳƷ������Ŀ��������������˱ǣ��㲻��
�����ķ����˽Ų���

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
              __DIR__"npc/chike" : 1,
        ]));

        set("exits", ([
              "south" : __DIR__"shizhongxin",
              "north" : __DIR__"pishijie2",
                     ]));
        setup();
        replace_program(ROOM);
}

