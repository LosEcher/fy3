#include <room.h>
inherit ROOM;

void create()
{
    set("short", "�뷿");
        set("long", @LONG
�߽�����һ�����㣬�˱Ƕ����������������Ů���ҵ���Ʒ
������˿�ʣ���װ��񡣿��������Ƕ�а����Ů�����Է��ˡ�Ϊ
�˱���Ů���ҵĹ뷿���˻��������뿪Ϊ�
LONG
        );
    set("exits", ([
     "north" :__DIR__"houyuan",
     
]));
        set("objects", ([
                __DIR__"npc/rong" : 1,
        ]));



        setup();
        replace_program(ROOM);
}

