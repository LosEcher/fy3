#include <ansi.h>

inherit ROOM;

void create()
{
        set("short", "����Ӫ");
        set("long", @LONG
            �������ά����������ΰ��ĳ���Ӫ���ſ���һ�޴�����ң�д��
������Ӫ���������֣������ǳ��ش��˵İ칫֮������û���ر������ñ½�ȥ
�����ܻᱻ���ɼ�ϸץ������


LONG
        );

        set("exits", ([ /* sizeof() == 2 */
        "west" : __DIR__"changjie5.c",
        "east" : __DIR__"bingyin1",

                     ]));
        set("objects", ([
                __DIR__"npc/weibing.c": 2
        ]) );

set("outdoors","/d/jingling");
        setup();
}

int valid_leave(object me, string dir)
{
        if( dir=="west"  )
        {
        tell_object(me,"�㿴�˿���ǰ�����ң��ֿ��˿��ſڵ�����������һ�󷢻š� \n");
        if (me->query("sen")>20) me->add("sen",-20);
        return 1;
        }
        if(dir=="east")
        {
         if ( me->query("age")<16 )
           {
            tell_object(me,"������ס��˵�����ش��˲���С����.\n");
            say("������ס��"+me->query("name")+".\n");
            return notify_fail("������ס����.\n");
           } 
           tell_object(me,HIW"�������һ����������ǰ���÷�������������Ϊ.\n"NOR);
           return 1;
        }
}
