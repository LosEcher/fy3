#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", "����");
        set("long", @LONG
�����ڵ����ˣ��㾫ƣ����ˮ���ܵ�������ȥ��ԭ�������ٲ�����
��һ��ɽ���ڣ������߾���ɽ���ˣ�������Ϸ�Ĺ���������Ӧ����
���ܣ��뵽�����̲�ס���ֳ������ˣ��㰺��ͷ������һ��������
����ǰ��ȥ��
LONG );
        set("outdoors", "yandang");
        set("exits", ([ /* sizeof() == 2 */
            "north" : __DIR__"hole",
            "south" : __DIR__"dongkou",
               ]));
        set("no_clean_up", 0);
        setup();
}


