#include <ansi.h>
inherit ROOM;
 
int do_pick(string arg) ;

void create()
{
        set("short", "ɽ��");
        set("long",@LONG
��������һ��Сɽ���С�������ߺܰ���ֻ������ԼԼ����������һ�Ѹɲݡ�
�ɲ��Ϻ������һ��ʯϻ����ͻȻ�ŵ�һ�����ŵ���ζ����Ȼ�����˳���ס
������ȴ����ɨ��Ե�ʡ�
LONG);   
 
        set("exits", ([
  "out"  : "/d/taohua/road5",
]));
    

        setup();
}

