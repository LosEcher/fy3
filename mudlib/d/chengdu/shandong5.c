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
                "east" : __DIR__"shandong6",
                "west" : __FILE__,
                "south" : __FILE__,
                "north" : __FILE__,
        ]));
        setup();
        replace_program(ROOM);
}




