//lhqhoumen.c

inherit ROOM;
#include <ansi.h>
void create()
{
        set("short", "�һ������");
        set("long", @LONG
��������һ���ĺ��ţ�������������ܶ����ڣ���������
���ڳ���׷ס����ڵش���Ҫ������Ĺط�Ҳ�����ܡ�
LONG );
        set("exits", ([
                "northup"   : __DIR__"zhandao1",
                "southdown" : __DIR__"lhqyuan",
        ]));
        set("outdoors", "mingjiao");
        set("no_clean_up", 0);
        setup();
	replace_program(ROOM);
}
