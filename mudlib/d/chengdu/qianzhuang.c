// bye enter

#include <ansi.h>

inherit ROOM;

void create()
{
        set("short", "�¼�Ǯׯ");
        set("long", @LONG
�����ǳ�����������Ǯׯ--�¼�Ǯׯ����Ϣ��͵�������Ƿ��
��˵�������ϰ��������ڽ����к���������������å����һ��
�����������鷳����������һ��������ܺá�
LONG
        );

        set("exits", ([ 
                "east" : __DIR__"chunxilu2",
        ]) );
        set("objects", ([
                __DIR__"npc/wenlaoban": 1,
                   ]));

        setup();
}

int valid_leave(object me, string dir)
{
        tell_object(this_player(),WHT "�������Ŀڴ���̾�˿������߳���Ǯׯ. \n"NOR,this_player());
        return 1;
}
