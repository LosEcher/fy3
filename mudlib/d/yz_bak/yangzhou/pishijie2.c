//Mr.music  yangzhou's Ƥ�н� 2

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
              __DIR__"npc/qigai" : 2,
        ]));

        set("exits", ([
              "south" : __DIR__"pishijie1",
              "north" : __DIR__"pishijie3",
              "east": __DIR__"kendeji" ,
                     ]));
        setup();
        replace_program(ROOM);
}

