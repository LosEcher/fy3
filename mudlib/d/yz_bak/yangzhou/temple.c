//music  yangzhou's ��쾵���

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "��쾵���");
        set("long", @LONG
	���������쾵۵���Ĺ��һ����������ڴˣ�ĹѨ��ʯ�ɶѣ��Ӳݴ�
����ֻ��һ�������˺۵�[33mĹ��[37m�������µ�ĬĬ���ڷ�ѩ֮�С���ʱ��һ�󺮷�
ӭ�洵�����㿴�������ޱߵĿ�Ұ���������˸���ս������������ʧ��ʲô��
�����ĵط����ǲ�Ҫ�����ˣ��㰵�����롣

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("no_fight", "1");
        set("no_steal", "1");
        set("no_sleep_room", "1");

        set("objects", ([
        //      __DIR__"obj/box" : 1,
        ]));

        set("exits", ([
              "east" : __DIR__"huangye1",
                    ]));
 //       create_door("northwest", "����", "southeast", DOOR_CLOSED);
        setup();
        replace_program(ROOM);
}

