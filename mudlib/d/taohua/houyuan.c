#include <room.h>
inherit ROOM;

void create()
{
    set("short", "��Ժ");
        set("long", @LONG
����ɽׯ�ĺ�Ժ��Ժ�а��ż��������ˣ��Ǹ��һ������������õġ�
Ժ�����һ�����Ψһһ��ɽ�壺��ָ�塣�����һ�ɽׯ��ɽ������������
�ɡ�
LONG
        );
    set("exits", ([
     "north" :__DIR__"dating",
     "west" :__DIR__"xiaowu",
     "east" :__DIR__"siguoshi" ,
     "south" :__DIR__"guifang" ,
]));

        setup();
        replace_program(ROOM);
}

