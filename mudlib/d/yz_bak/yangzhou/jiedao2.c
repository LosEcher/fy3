//music  yangzhou's �ֵ� 2

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "�ֵ�");
        set("long", @LONG
	���������ݳǵ�һ��С���ϣ�����ٻĽ������Ժ�������
�������̵���˼�Ҳϡϡ���䡣ż�����˾�����Ҳ����ɫ�Ҵҡ���
���͵����ݵ������ǽ��ˡ�����ͨ�����ݳǵ���������������һ��
����Ĳ÷�꣬�������⵹�Ǻܺ��

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
        //      __DIR__"obj/box" : 1,
        ]));

        set("exits", ([
                        "north" : __DIR__"jiedao1",
                        "south" : __DIR__"yz-x2",
                        "east"  : __DIR__"caifengdian" ,
                     ]));
        setup();
        replace_program(ROOM);
}

