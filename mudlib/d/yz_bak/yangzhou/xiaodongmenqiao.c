// Mr.music  yangzhou's С������

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "С������");
        set("long", @LONG
	���������ݳǶ���һ��С�ţ����¾��Ǿ��������ġ����˺ӡ���
�����ݳ�����������������������ˮ���壬������ˮ���˲��ٷ��ݺʹ�
��ͷ������������С��ֻ���಻�ϣ�һƬ���ݾ���

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
              __DIR__"npc/shangren" : 1,
        ]));

        set("exits", ([
              "west" : __DIR__"dongguan4",
              "east" : __DIR__"jiedao3",
              "down" : __DIR__"yumatou",
                     ]));
        setup();
        replace_program(ROOM);
}

