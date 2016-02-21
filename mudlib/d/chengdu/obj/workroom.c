
// Room: /u/dewey/workroom.c

#include <ansi.h>

inherit ROOM;

void create()
{
        set("short", "�����ӵĹ�����");
        set("long", 
"����һ��������С�ݣ��峿�����⾲���شӴ�����������\n"+
"���������һ����ܺ�һ�ŷ��ŵ��ԵĹ���̨֮�⣬����ʲô\n"+
"��û�С�ǽ������һ�����ɷ�����֣�"+BLINK HIB"��������־Զ����\n" NOR         
        );
 
        set("no_clean_up", 0);
        
        set("exits", ([ /* sizeof() == 3 */
           "northeast" : "/d/city2/dating",
           "north" : "/u/dewey/workroom",
           "west" : "/u/editer/hengshan/shaodao1",
            ]));

      
        
        setup();

        replace_program(ROOM);
}
