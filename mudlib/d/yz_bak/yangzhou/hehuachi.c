//music  yangzhou's �ɻ���

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "�ɻ���");
        set("long", @LONG
	��������վ�ڷ羰�������̲������ĺɻ��رߣ�ÿ���ļ�������
�ɻ�ʢ�������޶��ˣ�����������פ�㣬��ʹ����ī��������������紵
�������淺��һ��������ʹ����һ��������ȥ�ĳ嶯���ر���һ��Ƭ�̲�
ƺ������ͽ����Ϣ��ѧϰ�ĵط���

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("sleep_room",1);
        set("objects", ([
        //      __DIR__"obj/box" : 1,
        ]));

        set("exits", ([
              "east" : __DIR__"xiangzhai",
                     ]));
 //       create_door("northwest", "����", "southeast", DOOR_CLOSED);
        setup();
}

int init()
{

add_action("do_jump","jump");
add_action("do_jump","tiao");
add_action("do_back","back");
add_action("do_chat","chat");

}

int do_chat()
{
return 0;
}

int do_jump()
{
if( living(this_player()) ==0 ) return 1;

say(this_player()->query("name")+"��ͨһ�������³�ȥ\n");
tell_object(this_player(),"���������³�ȥ.\n");
this_player()->move("/d/yangzhou/chizhong");
return 1;

}

int do_back()
{
return 1;
}

