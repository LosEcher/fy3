//bye enter

#include <ansi.h>
#include <room.h>

inherit ROOM;

void create()
{
        set("short",HIY "����·" NOR);
        set("long", 
""HIW"������ǳɶ���������ҵ���ģ���������������������\n"
"�Ե������������ַǷ��������и����¥����ɫ�Ľ���ӭ��\n"
"Ʈ�ֻ�������ĸ����ָ�����Ŀ"+BLINK HIR"�����Ӿ�¥��"NOR""HIW"�����濴��"NOR"\n"
""HIW"���Ǹ���ݣ�һ�������Ź��ʵ��˴��������������"NOR"\n"
      );

        set("outdoors", "/d/chengdu");

        set("exits", ([
                "south" : __DIR__"chunxilu2",
                "north" : __DIR__"chunxilu",
                "east" : __DIR__"jiulou1",
                "west" : __DIR__"chaguan",
            ]));
	set("objects",([
		"/npc/man2":2,
	]));

        setup();
        replace_program(ROOM);       
}



