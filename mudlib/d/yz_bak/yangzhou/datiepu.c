//music  yangzhou's ������

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "������");
        set("long", @LONG
	����һ�Ҵ����̣������������Ŵ󴸣������Ÿ���������
�����������Ǵ�õļ������������ֻ������ǳ��õ�һЩ������
��ֵ����̽���ذ�׵ȡ�

LONG
        );

        set("objects", ([
                        __DIR__"npc/wangtiejiang" : 1,
                       ]));

        set("exits", ([
                        "east" : __DIR__"jiedao1",
                     ]));
        setup();
        replace_program(ROOM);
}

