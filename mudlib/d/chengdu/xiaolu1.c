//by enter xiaoya

inherit ROOM;

void create()
{
        set("short", "С·");
        set("long", @LONG
�������˶��������С·�ϣ�ż���������������
�Ҷ������������ĳ�����������ͨ�����ݳǣ�������
�����Ĵ��Ĵ����
LONG
        );

        set("exits", ([
                "west" : __DIR__"xiaolu2",
                "northeast" : "/d/city/xxroad1",
        ]));

        set("outdoors", "chengdu");
        setup();
        replace_program(ROOM);
}


