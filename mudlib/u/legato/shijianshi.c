#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", "�Խ�ʯ");
        set("long", @LONG
�������㵴��ɽ���Խ�ʯ����˵�а���֮һ����������������ĥ��
�Խ���֮��ɽ���Ŀյ��ϵ������Ƿ��������Ĵ�ʯͷ�����絶����
���룬�����Ƶ���Ƿ�����
LONG );
        set("outdoors", "yandang");
        set("exits", ([ /* sizeof() == 2 */
            "northup" : __DIR__"laoniubei",
            "southdown":__DIR__"xianrensong" ,
        ]));
        set("no_clean_up", 0);
        setup();
}


