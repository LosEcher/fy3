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
                "east" : __FILE__,
                "west" : __DIR__"shandong3",
                "south" : __FILE__,
                "north" : __FILE__,
        ]));
        setup();
        replace_program(ROOM);
}




