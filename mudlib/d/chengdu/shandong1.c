//bye enter

inherit ROOM;

void create()
{
        set("short", "ɽ��");
	set("long", @LONG
��׳���ӣ��߽���ɽ���У����ﰵ�����գ�ͻȻ�䣬��
ֻ����������ǰ�ɹ����㱻������һ���亹��Խ�����߾�Խ��
Խ�ڣ��������ʧ�����ˡ�
LONG
	);
        set("exits", ([
                "east" : __DIR__"shandong2",
                "west" : __FILE__,
                "south" : __DIR__"shandao3",
                "north" : __FILE__,
        ]));
        setup();
        replace_program(ROOM);
}




