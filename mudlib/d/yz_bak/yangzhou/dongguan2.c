// Mr.music  yangzhou's ���ؽ� 2

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "���ؽ�");
        set("long", @LONG
	���������ݳ�����Ĵ���ϣ��ؽֵ����������ֳ̼�Ⱥ������
���ﳵ���������������У�ҹ�����ǹ���£��ƻ�ͨ���������ǳ��е���
Ҫ����ҵ���Ļ����ֽ֣����С�����ʮ������·�������ơ��ֱ��м�ҩ��
���������˿Ͳ��ϡ�

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
        //      __DIR__"obj/box" : 1,
        ]));

        set("exits", ([
              "east" : __DIR__"dongguan3",
              "west" : __DIR__"dongguan1",
              "north": __DIR__"yaopu",
                     ]));
 //       create_door("northwest", "����", "southeast", DOOR_CLOSED);
        setup();
        replace_program(ROOM);
}

