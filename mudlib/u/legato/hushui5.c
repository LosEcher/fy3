#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", "һ���ˮ");
        set("long", @LONG
����һ���ˮ����ʹ��������ѽ��ֻ��ˮɫ���̣��峺����
ֻ�����ٲ���ˮ�ĳ����ˮ����Щ�������ܴ��㶨�˶���
��ǰ����ȥ��
LONG );
        set("outdoors", "yandang");
        set("exits", ([ /* sizeof() == 2 */
            "east" : __DIR__"dongkou",
              "out" :"/d/yandang/luoyan33",
             ]));
        set("no_clean_up", 0);
        setup();
}

