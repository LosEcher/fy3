#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", "����");
        set("long", @LONG
������һ������������ʯ��ɽ������ʱ�����εδ���ˮ����ص�
�������㿴��һ�����ܣ���Ȼ���ֲ�Զ��һ�����������������
��Ŀ����㣬��ֻ�۾�������ӨӨ�Ĺ⣬
LONG );
          
                set("objects",([
         "/u/legato/npc/mangshe":1,
       ]));
              set("exits", ([ /* sizeof() == 2 */
            "south" : __DIR__"shandong",
         "north":__DIR__"shishi",
           ]));
        set("no_clean_up", 0);
        setup();
}

