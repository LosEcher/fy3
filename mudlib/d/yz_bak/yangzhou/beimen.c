// Mr.music  yangzhou's ����

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "����");
        set("long", @LONG
	����������ݳǵı��ţ���������ݳǽ����е��˳�û����̫��ȫ��
����һ�����ϣ����žͻ�رա�

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
              __DIR__"npc/wulai" : 2,
        ]));

        set("exits", ([
              "south" : __DIR__"pishijie3",
		"north":"/d/taishan/yidao",
                     ]));
        setup();
        replace_program(ROOM);
}

