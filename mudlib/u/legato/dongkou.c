#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", "����");
        set("long", @LONG
�㶥��ˮ���������ٲ�����ˮ����ȥ��ˮ���ļ��������������
�۾������æ��һ��������ͷ����ˮ���ǰ��ȥ
LONG );
        set("outdoors", "yandang");
        set("exits", ([ /* sizeof() == 2 */
            "north" : __DIR__"hole1",
            "south" : __DIR__"hushui1",
         "west": __DIR__"hushui5",
             ]));
        set("no_clean_up", 0);
        setup();
}


