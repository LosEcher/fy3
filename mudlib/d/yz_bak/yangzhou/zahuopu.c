//Mr.music  yangzhou's �ӻ���

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "�ӻ���");
        set("long", @LONG
	�������ڳ������нֵ��жε�С�ӻ��̣������������У�����������
��ʱ���η����У��������Ե������ε������������ͨ����̫�ã����ϰ����
�������⡣
LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
__DIR__"npc/lanjinglin":1,
        ]));

        set("exits", ([
              "west" : __DIR__"yingshijie2",
                     ]));
        setup();
        replace_program(ROOM);
}

