// Mr.music  yangzhou's ���ؽ� 3

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "���ؽ�");
        set("long", @LONG
	���������ݳ�����Ĵ���ϣ��ؽֵ����������ֳ̼�Ⱥ������
���ﳵ���������������У�ҹ�����ǹ���£��ƻ�ͨ���������ǳ��е���
Ҫ����ҵ���Ļ����ֽ֣����С�����ʮ������·�������ơ�·����һ����
�µ�̨�ף��±߲�ʱ���������Ц��

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
              __DIR__"npc/liumang" : 1,
        ]));

        set("exits", ([
              "west" : __DIR__"dongguan2",
              "east" : __DIR__"shizhongxin",
              "down" : __DIR__"duchang",
                     ]));
 //       create_door("northwest", "����", "southeast", DOOR_CLOSED);
        setup();
        replace_program(ROOM);
}

