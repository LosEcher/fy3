#include <room.h>

inherit ROOM;

void create()
{
    set("short", "����ׯ����");
    set("long",@LONG
�����ǹ���ɽׯ�����š�ׯ���Եú�ΰ�ߴ�װ�λ�������
�ߵ�Ժǽ���Ѷ�ȥ����Ȼ��������ͷ��ׯ��ǰ���ż�����������
���һ���Ѥ�õ������š�
LONG);

        set("exits", ([
        "south" : __DIR__"qianyuan1",
        "north" : __DIR__"tingzi",
        "east"  : __DIR__"shiqiao" ,       
        ]));
        
    set("outdoors", "taohua");
    setup();
    
}

