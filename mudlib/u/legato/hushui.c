#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", "һ���ˮ");
        set("long", @LONG
�����ɽ���еĺ�ˮ���棬ֻ��ˮɫ���̣��峺���ף�ֻ����
�ٲ���ˮ�ĳ����ˮ����Щ�������ܴ��㶨�˶�����ǰ��
��ȥ��
LONG );
        set("outdoors", "yandang");
        set("exits", ([ /* sizeof() == 2 */
            "north" : __DIR__"hushui1",
             ]));
        set("no_clean_up", 0);
        setup();
}


