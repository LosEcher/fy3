// Room: chufang.c
inherit ROOM;

void create()
{
        set("short", "����");
        set("long", @LONG
�����һ����ĳ�����������Ŵ�Բ������Χ����ż������Ρ�����
�����ż���ˮ�ɻ���������һ�±��ӣ������������㣡Ҳ��֪�����ǻ�
�㻹�Ƿ��㡣ƽʱ�һ����ĵ��Ӻ����˶��������ò͡�
LONG );
        set("exits",([
            "east" :__DIR__"qianyuan",
        ]));

        setup();
        replace_program(ROOM) ;
}


