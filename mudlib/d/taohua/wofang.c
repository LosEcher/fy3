#include <room.h>
inherit ROOM;

void create()
{
    set("short", "�Է�");
        set("long", @LONG
���߽���һ���Է���һ���������޵������˱Ƕ������ٽ��黭��
����ǽ�ϡ�����ɴ�֣������⡣С������Ҥ����ƿ�ڵ��һ�����ʢ
��������һ�Ŵ�����ͷ���������Ʊ���
LONG );
    set("exits", ([
        "east" :"/d/taohua/dating",
    ]));

    setup();
    replace_program(ROOM);
}

