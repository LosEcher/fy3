//music  yangzhou's �÷��

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "�÷��");
        set("long", @LONG
	������һ�Ҳ÷�꣬�������æ���Ȼ��죬��������ܲ���
�ڳ�����Ÿ��ַ�װ��Ʒ������Ը����Լ�����Ҫ��������ġ���Ժ��
��ЩֵǮ��Ƥ�£�����ү�Ƕ����ġ��������ϰ���Ц���еĴ������㡣

LONG
        );

        set("objects", ([
                        __DIR__"npc/shenlaoban" : 1,
                       ]));

        set("exits", ([
                        "west" : __DIR__"jiedao2",
                     ]));
        setup();
        replace_program(ROOM);
}

