#include <ansi.h>

inherit ROOM;

void rtaohua( object ob ) ;

void create()
{
    set("short", "��̲");
    set("long", @LONG
�����һ���ǰ�ĺ�̲��������һ���޼ʵĴ󺣣���������һƬ�һ��֡�
�����ĺ��������죬���ɫ��ɳ̲���ۺ���һ�����һ�ж�����ô��������
����һ�Ҵ󴬡�
LONG );
   
    set("exits",([
        "south" :__DIR__"tao_in",
        "north" :__DIR__"xiaoyucun",
    ]));
    set("no_clean_up", 0);
    set("outdoors", "taohua");
    setup();
}

