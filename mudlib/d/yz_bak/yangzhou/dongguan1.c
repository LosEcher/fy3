// Mr.music  yangzhou's ���ؽ� 1

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "���ؽ�");
        set("long", @LONG
	���������ݳ�����Ĵ���ϣ��ؽֵ����������ֳ̼�Ⱥ������
���ﳵ���������������У�ҹ�����ǹ���£��ƻ�ͨ���������ǳ��е���
Ҫ����ҵ���Ļ����ֽ֣����С�����ʮ������·�������ơ����ǳ�����
����Ҧ��Ǯׯ���ϱ߾������ݸ����ˡ�

LONG
        );

        set("outdoors", "/d/yangzhou");

        set("objects", ([
                   __DIR__"npc/shusheng" : 1,
                   __DIR__"npc/xiaohaizi" : 1 ,
                 ]));

        set("exits", ([
              "west" : __DIR__"yz-x2",
              "east" : __DIR__"dongguan2",
              "north": __DIR__"yaoji",
              "south": __DIR__"yamen",
                     ]));
 //       create_door("northwest", "����", "southeast", DOOR_CLOSED);
        setup();
        replace_program(ROOM);
}

